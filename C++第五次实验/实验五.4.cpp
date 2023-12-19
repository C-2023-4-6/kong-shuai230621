#include<iostream>
using namespace std;
class student {
	friend  void max(student* p, student stud[]);
	

	int number;
	int score;
public:
	student(int n, int s) {
		number = n;
		score = s;
	}
};
void max(student* p, student stud[]) {
	
	student m = stud[0];
	for (int i = 1;i < 5;i++) {
		m = (m.score > stud[i ].score ? m : stud[i + 1]);
	}
	p = &m;
	cout << p->number << endl;;
}
int main() {
	student _stud[5] = { student(1,100),student(2,85),student(3,90),student(4,35),student(5,99) };
	student* p=&_stud[1];
	 max( p,  _stud);
	
	system("pause");
	return 0;
	
}