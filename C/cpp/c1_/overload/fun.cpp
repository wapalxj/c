//
// Created by mu on 2021/3/9.
//

#include <iostream>
#include <string.h>
#include "Student.h"

using namespace std;

int isOK(bool isOk = true) {//默认形参
    return isOk;
}

int add(int num1 = 10, int num2 = 20) {
    return num1 + num2;
}

int add(int num1 = 10, int num2 = 20, int num3 = 30) {
    return num1 + num2 + num3;
}

//考虑扩展，留一个int参数的坑
void uploadLogToEngine(char *logText, int) {

}

int main() {
    Student student1;
    student1.setAge(18);
    student1.setName("vnix");
    cout << "student1.name==" << student1.getName() << endl;
    return 0;
}
