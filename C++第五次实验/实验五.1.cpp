#include<iostream>
using namespace std;
class Time {
private:
	int hour;
	int minute;
	int sec;
public:
	void Cin() {
		cin >> hour >> minute >> sec;
	}
	
	void Cout() {
		cout << this->hour << "   " << this->minute << "  " << this->sec << endl;
	}
};

int main() {
	Time t1;
	t1.Cin();
	t1.Cout();
}