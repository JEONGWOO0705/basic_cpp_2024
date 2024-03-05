#include <iostream>
#include <string>
using namespace std;


class Point {
private:
	int xpos, ypos;
public:
	Point(int x, int y): xpos(x), ypos(y){}

	Point operator+(Point& ref) {
		Point val(xpos + ref.xpos, ypos + ref.ypos);
		return val;
	}
	Point operator+(int num) {
		/*
		 �� �Լ��� ���ٸ� pos * 3�� �ȵ�. �ڷ����� �޶� ������ �߻��Ѵ�.
		 */
		Point val(xpos + num, ypos + num);
		return val;
	}

	void viewPoint() {
		cout << xpos << ", " << ypos << endl;
	}
	friend Point operator+(int num, Point& ref);
	friend ostream& operator<<(ostream&, const Point&);
};
ostream& operator<<(ostream& os, const Point& pos) {
	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
	return os;
}
/*
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;
	�̷��� ��ü�� ����Ű�� ���� (int  a, int b) �̹Ƿ� �̰��� ���� ������ִ� 
	<< ������ �����ε��� ���� �ذ�


	���� viewPoint()�Լ��� ���� a.viewpoint() �̷��� ���� �־��µ�, 
	�� �Լ� ��� ���� ������� ��ü�� ������ �̷��� �߰��ؾ��Ѵ�
*/


Point operator+(int num, Point& ref) {
	return ref + num;
}

int main(void) {
	Point a(10, 20);
	Point b(30, 40);

	Point c = a + b;
	Point d = a + 100;
	Point e = 100 + a;

	d.viewPoint();
	e.viewPoint();

	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;

	return 0;
}