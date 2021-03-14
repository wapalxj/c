//
// Created by mu on 2021/3/9.
//

/**
 * 头文件，只写声明，不写实现
 */
#ifndef C_STUDENT_H
#define C_STUDENT_H

#endif //C_STUDENT_H

class Student {
private:
    char *name;
    int age;

public:
    void setAge(int age);

    void setName(char *name);

    int getAge();

    char *getName();
};