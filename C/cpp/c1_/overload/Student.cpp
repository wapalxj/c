//
// Created by mu on 2021/3/9.类的实现
//

#include "Student.h"

int Student::getAge() {
    //C++对象是指针
    return this->age;
}

char *Student::getName() {
    return this->name;
}

void Student::setAge(int age) {
    this->age = age;
}

void Student::setName(char *name) {
    this->name = name;
}