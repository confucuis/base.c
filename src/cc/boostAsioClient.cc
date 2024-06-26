#include <array>
#include <iostream>
#include <boost/asio.hpp>

using boost::asio::ip::tcp;

int main(int argc, const char **argv)
{
    try {
        if (argc != 2) {
            std::cerr << "Usage: a.out <host>" << std::endl;
            return 1;
        }
        boost::asio::io_context io_context;
        tcp::resolver resolver(io_context);
        tcp::resolver::results_type endpoints = resolver.resolve(argv[1], "8884");
        tcp::socket socket(io_context);
        boost::asio::connect(socket, endpoints);
        for (;;) {
            std::array<char, 128> buffer;
            boost::system::error_code error; 
            size_t len = socket.read_some(boost::asio::buffer(buffer), error);
            if (error == boost::asio::error::eof) break;
            else throw boost::system::system_error(error);
            std::cout.write(buffer.data(), len);
        }
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
