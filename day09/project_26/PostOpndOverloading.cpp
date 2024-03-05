#include<iostream>
using namespace std;


class Point {
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}	// 따로 입력이 없으면 0으로 초기화 하겠다는 말!!
	void ShowPosition() const {
		cout << '[' << xpos << "," << ypos << ']' << endl;
	}

	Point& operator++()	//전위증가		a = ++i
	{
		xpos += 1;
		ypos += 1;
		return *this;
	}
	const Point operator++(int) {		// a = i++

		const Point retobj(xpos, ypos);	
		// 후위 연산자 이기 때문에 현재에 객체를 복사하여 현재의 속성값을 유지 시킨다.
		xpos += 1;
		ypos += 1;
		return retobj;
	}
	friend Point& operator--(Point& ref);
	friend const Point operator--(Point& ref, int);
};

Point& operator--(Point& ref) {
	ref.xpos -= 1;
	ref.ypos -= 1;
	return ref;
}

const Point operator--(Point& ref, int) {	//후위 감소
	const Point retobj(ref);
	ref.xpos -= 1;
	ref.ypos -= 1;
	return retobj;
}

int main(void) {
	Point pos(3, 5);
	Point cpy;
	cpy = pos--;
	cpy.ShowPosition();
	pos.ShowPosition();

	cpy = pos++;
	cpy.ShowPosition();
	pos.ShowPosition();

	return 0;
}