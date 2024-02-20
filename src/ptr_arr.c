//
// 指针与数组
//
#include <stdio.h>

int main(void)
{
    int arr[5] = {2, 3, 4};
    printf("%d  %d\n", arr[1], arr[3]);

    printf("%p\n", arr);

    int *ptr = arr;
    printf("%d  %d\n", *(ptr+1), *(ptr+3));

    printf("%p\n", ptr);

    return 0;
}
