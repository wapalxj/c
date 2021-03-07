//
// Created by mu on 2021/3/4.
//
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

struct Worker_ {
    char name[10];
    int age;
    char sex;
};

//很多typedef取一个和结构一样的名字，是为了兼容代码的写法
//typedef struct  Worker_ Worker_; //给结构体取别名

typedef struct Worker_ Worker; //给结构体取别名
typedef Worker *WorkerP; //给结构体指针取别名

int main() {
    struct Worker_ *p = malloc(sizeof(struct Worker_));
    //用构体别名
    Worker *worker = malloc(sizeof(struct Worker_));
    //用结构体指别名
    WorkerP p1 = NULL;
    return 0;
}