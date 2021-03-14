//
// Created by mu on 2021/3/11.
//

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main() {
//    strcpy (char*, const char*);

    int num1 = 9;
    int num2 = 8;

    //常量指针
    //1.不允许修改指向地址对应的值
    //2.允许重新指向
    const int *numP = &num1;
//    *numP = 100;//error
    numP=&num2;

    //指针常量
    int * const numP2 = &num2;
    *numP2 = 100;
//    numP2=&num2//error

    //常量指针常量
    const int * const constnumP = &num1;
//    *constnumP = 100;//erro
//    constnumP=&num2;//erro

    return 0;
}