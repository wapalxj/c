//
// Created by mu on 2021/3/4.
//
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/**
 * 结构体
 */
struct Person {
    char *name;
    int age;
    char sex;
} p1 = {"vero", 18, 'm'},//构造一个对象
p2,//构造一个对象,属性为默认值
p3;//构造一个对象,属性为默认值

void printPerson();

void printStudent();

void printCat();

void printCat2();

struct Study {
    char *content;
};
struct Play {
    char *content;
};

struct Student {
    char name[10];
    int age;
    char sex;
    struct Study study;
    struct Play play;
};

struct Cat {
    char name[10];
    int age;

};

int main() {
    printCat2();
    printCat();
    printPerson();
    printStudent();
    return 0;
}
//结构指针
// -> 符号：调用一级指针成员
//还是栈区内存
void printCat() {
    struct Cat cat = {"miao", 2};
    struct Cat *catp = &cat;//还是栈区内存
    catp->age = 10;
    printf("name=%s,age=%d\n", catp->name, catp->age);

}

//堆区内存
void printCat2() {
    struct Cat *catp = malloc(sizeof(struct Cat));
    strcpy(catp->name,"veroooo");
    catp->age = 8;
    printf("name=%s,age=%d\n", catp->name, catp->age);
    free(catp);
}

void printStudent() {
    struct Study study = {""};
    struct Play play = {""};
    struct Student student = {"", 18, 'm', study, play};
    strcpy(student.name,"vnix");
}


void printPerson() {
    printf("name=%s,age=%d,sex=%c\n", p1.name, p1.age, p1.sex);
    printf("name=%s,age=%d,sex=%c\n", p2.name, p2.age, p2.sex);
    p3.name = "vnix";
    p3.age = 19;
    p3.sex = 'm';
    printf("name=%s,age=%d,sex=%c\n", p3.name, p3.age, p3.sex);

    struct Person person;
    person.name = "vnixvero";
    person.age = 20;
    person.sex = 'm';
    printf("name=%s,age=%d,sex=%c\n", person.name, person.age, person.sex);

}