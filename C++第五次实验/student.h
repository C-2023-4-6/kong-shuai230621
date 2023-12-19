#pragma once
#include<iostream>
using namespace std;
class student {
public:                   //公用成员函数原型声明
	void display();
	void set_vaule(int _num, const char _name[], char _sex);
private:
	int num;
	   char name[20];
	   char sex;
};