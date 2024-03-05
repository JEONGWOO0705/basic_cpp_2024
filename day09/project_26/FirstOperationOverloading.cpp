#include<iostream>
using namespace std;


class Point {
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(x) {}	// 따로 입력이 없으면 0으로 초기화 하겠다는 말!!
	void ShowPosition() const {
		cout << '[' << xpos << "," << ypos << ']' << endl;
	}

	Point operator+(const Point& ref) {
		Point pos(xpos + ref.xpos, ypos + ref.ypos);	// 객체 생성
		return pos;
	}
};

int main(void) {
	Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos3 = pos1.operator+(pos2);

	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();

	return 0;
}