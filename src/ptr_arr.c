//
// 指针与数组
//
#include <stdio.h>
#include <stdlib.h>

void dynamic_arry(int size);

int main(void)
{
    int arr[5] = {2, 3, 4};

    // 注意区分与下面dynamic_arr动态数组的大小
    printf("原生数组大小: %ld\n", sizeof(arr));

    printf("%d  %d\n", arr[1], arr[3]);

    printf("%p\n", arr);

    int *ptr = arr;
    printf("%d  %d\n", *(ptr+1), *(ptr+3));

    printf("%p\n", ptr);

    dynamic_arry(6);

    return 0;
}

// 动态数组
void dynamic_arry(int size)
{
    int *dynamic_arr = (int *)malloc(size * sizeof(int));

    if (dynamic_arr == NULL) {
        printf("malloc memory failure!");
	return;
    }

    for (int i=0; i<size; i++) {
        dynamic_arr[i] = i*i;
    }

    printf("动态数组大小: %ld\n", sizeof(dynamic_arr));

    for (int i=0; i<size; i++) {
        printf("%d\n", dynamic_arr[i]);
	printf("动态数组元素%d大小: %ld\n", i, sizeof(dynamic_arr[i]));
    }

    free(dynamic_arr);
}
