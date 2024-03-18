#include <stdio.h>
#include <stdlib.h>

int adj[4][4] = {
    {0, 1, 0, 0},
    {0, 0, 1, 1},
    {1, 0, 0, 1},
    {1, 0, 0, 0}
};


int main(void)
{
    //fprintf(stderr, "hello world!\n");
    int pos = 0;
    while(1) {
        int x = rand() % 4;
	while( !adj[pos][x]) {
	    x = rand() % 4;
	}
	printf("%d", x);
	pos = x;
    }

    return 0;
}

