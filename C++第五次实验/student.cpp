#include<iostream>
#include"student.h"
void student::display()         //在类外定义display类函数
{
    cout << "num:" << num << endl;
    cout <<"name:" << name << endl;
    cout << "sex:" << sex << endl;
}
void student::set_vaule(int _num,const char _name[], char _sex) {
    this->num = _num;
    for (int i = 0;i < 20;i++)
        this->name[i] = _name[i];
    this->sex = _sex;
}