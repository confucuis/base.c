#include <stdio.h>

// 回调函数的定义
void callbackFunc(int arg) {
    // 执行回调函数的操作
    printf("回调函数被调用，参数为：%d\n", arg);
}

// 注册回调函数的函数
void registerCallback(void (*callback)(int)) {
    // 某些操作...
    // 当满足特定条件时调用回调函数
    int arg = 10;
    callback(arg);
}

int main() {
    // 注册回调函数
    registerCallback(callbackFunc);

    return 0;
}

