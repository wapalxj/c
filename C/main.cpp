#include <iostream>
#include <stdio.h>
#include "c.c"
int hello(int,int);

int main() {
    printf("xxx\n");
    std::cout << "Hello, World!" << std::endl;
    say(hello(2,3));
    return 0;
}

int hello(int a,int b){
    return a+b;
}