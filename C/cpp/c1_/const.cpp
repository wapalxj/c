//
// Created by mu on 2021/3/9.
//

#include <iostream>

using namespace std;
int main(){
    int num=100;
    int *p=&num;
    *p=10000;

//    const int num2=100;
//    int *p2=&num2;
    cout <<*p<<endl;

    return 0;
}