//
// Created by mu on 2021/3/11.
//

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

class Student {
private:
    char *name;
    int age;

public:
    int getAge() {
        //C++对象是指针
        return this->age;
    }

    char *getName() {
        return this->name;
    }

    void setAge(int age) {
        this->age = age;
    }

    void setName(char *name) {
        this->name = name;
    }

    Student() {

    }
    Student(char *name, int age) {
        this->name = name;
        this->age = age;
    }
    ~Student() {
        cout << "析构函数执行==" << endl;
    }


};

int main() {
    //栈内存空间
    Student stu;
    stu.setName("vero");
    stu.setAge(18);
    cout << "name==" << stu.getName() << ",age==" << stu.getAge() << endl;

    //堆内存空间
    Student *stu2 = new Student("vnix", 19);
    cout << "name==" << stu2->getName() << ",age==" << stu2->getAge() << endl;
    delete stu2;//free(stu):这样写不规范
//
//    //C工程师习惯
//    //这样调是不会调到构造方法的
//    Student *s = (Student *) malloc(sizeof(Student));


    return 0;
}

