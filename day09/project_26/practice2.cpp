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
		 이 함수가 없다면 pos * 3이 안됨. 자료형이 달라 오류가 발생한다.
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
	이러한 객체가 가르키는 값이 (int  a, int b) 이므로 이것을 따로 출력해주는 
	<< 연산자 오버로딩을 통해 해결


	원래 viewPoint()함수를 만들어서 a.viewpoint() 이렇게 볼수 있었는데, 
	이 함수 사용 없이 만들어진 객체를 볼려면 이렇게 추가해야한다
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