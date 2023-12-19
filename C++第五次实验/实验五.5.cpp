#include<iostream>
using namespace std;
class Piont {
private:
	int x;
	int y;
public:
	Piont() {
		x = 60;
		y = 80;
	}
	void setPiont(int i,int j){
		x = 60 + i;
		y = 80 + j;
	}
	void display(){
		cout << x << "  " << y << endl;
	}
};
int main() {
	Piont p1;
	p1.display();
	p1.setPiont(20,40);
	p1.display();
	system("pause");
	return 0;
}