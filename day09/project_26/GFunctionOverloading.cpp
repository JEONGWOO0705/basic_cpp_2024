#include<iostream>
using namespace std;

class Point {
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) :xpos(x), ypos(y) {}

	void ShowPosition() const {

		cout << '[' << xpos << "," << ypos << ']' << endl;
	}
	friend Point operator+(const Point& pos1, const Point& pos2);	// operator+ 함수 내에서는 point 클래스의 private영역에 접근 가능
																	// Point 클래스는 +연산에 대해서 연산자 오버로딩이 되어 있구나
};

Point operator+(const Point& pos1, const Point& pos2) {
	Point pos(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
	return pos;
}

int main(void) {
	Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos3 = pos1 + pos2;	// + 연산자가 operator+ 함수를 실행시킴!

	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();

	return 0;
}