#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *name;
    char *address;
} Person;

int main()
{
    // 定义指针的时候初始化成NULL
    Person *pointer = NULL;
    pointer = (Person *)malloc(sizeof(Person));
    if (pointer == NULL)
        return -1;
    pointer->name = "zhangsan";
    pointer->address = "chengdu";

    fprintf(stderr, "name    = %s\n", pointer->name);
    fprintf(stderr, "address = %s\n", pointer->address);

    if (pointer != NULL) {
        free(pointer);
        // 释放指针所指的内存空间的时候将指针重新指向NULL
        pointer = NULL;
    }

    return 0;
}
