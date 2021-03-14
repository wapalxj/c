//
// Created by mu on 2021/3/9.
//

#include <iostream>
#include <string.h>

typedef struct {
    char name[20];
    int age;
} Student;

void insert(Student student);

int main(){
    Student student={"cccc",18};
    insert(student);
    return 0;
}

void insert(const Student & student) {
    //修改报错
//    strcpy(student.name,"vnix");

}
