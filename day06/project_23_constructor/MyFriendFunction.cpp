#include<iostream>
using namespace std;

class Point;

class PointOP {
private:
	int opcnt;

public:
	PointOP() :opcnt(0) {}

	Point PointAdd(const Point&, const Point&);
	Point PointSub(const Point&, const Point&);

	~PointOP() {
		cout << "Operation times: " << opcnt << endl;
	}

};

class Point {
private:
	int x;
	int y;

public:

	Point(const int& xpos, const int& ypos) :x(xpos), y(ypos) {}

	friend Point PointOP::PointAdd(const Point&, const Point&);	// 함수 선언에서는 매개변수의 이름은 생략 가능!! but , 매개 변수 타입은 생략 할 수없다.
	friend Point PointOP::PointSub(const Point&, const Point&); //(const Point&) --> (const Point & ab) 처럼 &뒤에 변수 이름을 따로 설정 안해놓아도 된다!!
	friend void ShowPointPos(const Point&);
};

Point PointOP::PointAdd(const Point& p1, const Point& p2) {
	opcnt++;
	return Point(p1.x + p2.x, p1.y + p2.y);
}

Point PointOP::PointSub(const Point& p1, const Point& p2) {
	opcnt++;
	return Point(p1.x - p2.x, p1.y - p2.y);
	
}

int main(void) {

	Point pos1(1, 2);
	Point pos2(2, 4);
	PointOP op;

	ShowPointPos(op.PointAdd(pos1, pos2));
	ShowPointPos(op.PointSub(pos1, pos2));
	return 0;


}

void ShowPointPos(const Point& pos) {

	cout << "x: " << pos.x << ", ";
	cout << "y: " << pos.y << endl;
}