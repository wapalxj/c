//
// Created by mu on 2021/3/11.
//

struct Person{
    int age;
    char * name;
};
int main() {
    //p1的成员赋值给p2，但是p1和p2地址不一样
    Person p1 = {100, "vero"};
    Person p2 = p1;
    cout << "name==" << p2.name << ",age==" << p2.age << endl;

}