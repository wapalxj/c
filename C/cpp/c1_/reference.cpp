//
// Created by mu on 2021/3/9.
//

#include <iostream>

using namespace std;


void numChange(int *num1, int *num2) {
    int temp = 0;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

/**
 * &num1 表示引用
 */
void numChange2(int &num1, int &num2) {
    int temp = 0;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

int main() {
    int num1 = 100;
    int num2 = 2;
    cout << "n1_addr==" << &num1 << "  n2_addr==" << &num2 << endl;


//    numChange(&num1,&num2);
    numChange2(num1, num2);

//    cout <<"n1=="<<num1<<",,,n2=="<<num2<< endl;


    int n1=888;
    int n2=999;
    int & n3=n1;//n3和n1的地址一样

    cout << "n1_addr==" << &n1 << "  n2_addr==" << &n2<< "  n3_addr==" << &n3  << endl;


    return 0;
}