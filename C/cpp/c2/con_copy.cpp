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

    Student(char *name, int age):name(name),age(age) {

    }
    ~Student() {
        cout << "析构函数执行==" << endl;
    }

    //拷贝构造函数，默认存在，我们看不见，
    //我们写的拷贝构造函数会覆盖默认的
    Student(const Student & student){
        cout << "拷贝构造函数==" << endl;
    }

};

int main() {

    //拷贝，类比结构体拷贝
    Student stu1("vnix", 19);
//    Student stu1{"vnix", 19};

    //调用我们自己的拷贝构造函数
    Student stu2=stu1;

//    //调用默认的拷贝构造函数
//    Student stu2;
//    stu2=stu1;

    cout << "name==" << stu2.getName() << ",age==" << stu2.getAge() << endl;

    //指针指向
    //不调用拷贝构造函数
//    Student *stu3=new Student("vvv",18);
//    Student *stu4=stu3;
//
//    cout << "name==" << stu4->getName() << ",age==" << stu4->getAge() << endl;

    return 0;
}

