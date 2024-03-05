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

	Point operator*(int times) {
		/*
		 이 함수가 없다면 pos * 3이 안됨. 자료형이 달라 오류가 발생한다.
		 */
		Point pos(xpos * times, ypos * times);
		return pos;
	}
};

int main(void) {
	Point pos(1, 2);
	Point cpy;

	cpy = pos * 3;
	cpy.ShowPosition();

	cpy = pos * 3 * 2;
	cpy.ShowPosition();

	return 0;
}