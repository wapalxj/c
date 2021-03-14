//
// Created by mu on 2021/3/9.
//


#include <stdint.h>
#include <stddef.h>
#include <stdio.h>

void add(int num1,int num2);

//C语言不支持函数重载
//void add(int num1,int num2,int num3);

int main() {
    int (*a)[10] = NULL;   // 一个指针，它指向一个有10个int元素的数组
    return 0;
}