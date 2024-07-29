# 定义编译器和相关工具
CXX = g++
PROTOC = protoc
GRPC_CPP_PLUGIN = grpc_cpp_plugin

# 定义编译选项
CXXFLAGS = -std=c++11 -I/usr/local/include -pthread -I.
LDFLAGS = -L/usr/local/lib `pkg-config --libs grpc++ grpc` -lgrpc++_reflection -ldl -Wl,--no-as-needed -lprotobuf -lpthread

# 定义路径
PROTO_DIR = api/service/helloworld
PROTO_FILES = $(PROTO_DIR)/helloworld.proto
PROTO_GEN_FILES = $(PROTO_DIR)/helloworld.pb.cc $(PROTO_DIR)/helloworld.grpc.pb.cc $(PROTO_DIR)/helloworld.pb.h $(PROTO_DIR)/helloworld.grpc.pb.h
SERVER_SRC = server.cc
CLIENT_SRC = client.cc
SERVER_OBJ = server
CLIENT_OBJ = client

# 默认目标
all: $(SERVER_OBJ) $(CLIENT_OBJ)

# 生成Protobuf文件
$(PROTO_DIR)/%.pb.cc $(PROTO_DIR)/%.grpc.pb.cc: $(PROTO_DIR)/%.proto
	$(PROTOC) -I $(PROTO_DIR) --grpc_out=$(PROTO_DIR) --plugin=protoc-gen-grpc=`which $(GRPC_CPP_PLUGIN)` $<
	$(PROTOC) -I $(PROTO_DIR) --cpp_out=$(PROTO_DIR) $<

# 编译服务器
$(SERVER_OBJ): $(SERVER_SRC) $(PROTO_GEN_FILES)
	$(CXX) $(CXXFLAGS) $(SERVER_SRC) $(PROTO_DIR)/helloworld.pb.cc $(PROTO_DIR)/helloworld.grpc.pb.cc -o $@ $(LDFLAGS)

# 编译客户端
$(CLIENT_OBJ): $(CLIENT_SRC) $(PROTO_GEN_FILES)
	$(CXX) $(CXXFLAGS) $(CLIENT_SRC) $(PROTO_DIR)/helloworld.pb.cc $(PROTO_DIR)/helloworld.grpc.pb.cc -o $@ $(LDFLAGS)

# 清理生成的文件
clean:
	rm -f $(SERVER_OBJ) $(CLIENT_OBJ) $(PROTO_GEN_FILES)

.PHONY: all clean

