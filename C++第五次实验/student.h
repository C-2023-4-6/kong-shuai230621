#pragma once
#include<iostream>
using namespace std;
class student {
public:                   //���ó�Ա����ԭ������
	void display();
	void set_vaule(int _num, const char _name[], char _sex);
private:
	int num;
	   char name[20];
	   char sex;
};