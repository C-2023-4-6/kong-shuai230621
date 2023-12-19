#include<iostream>
using namespace std;
class cuboid {
private:
	int length;
	int width;
	int height;
public:
	void input() {
		int l, w, h;
		cin >> l >> w >> h;
		this->length = l;
		this->width = w;
		this->height = h;
	}
	void volume() {
		int v = height * width * length;
		cout << v << endl;
	}
};

int main() {
	cuboid c1;
	cuboid c2;
	cuboid c3;
	c1.input();
	c2.input();
	c3.input();
	c1.volume();
	c2.volume();
	c3.volume();
	system("pause");
	return 0;

}