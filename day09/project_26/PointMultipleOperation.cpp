#include<iostream>
using namespace std;


class Point {
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}	// ���� �Է��� ������ 0���� �ʱ�ȭ �ϰڴٴ� ��!!
	void ShowPosition() const {
		cout << '[' << xpos << "," << ypos << ']' << endl;
	}

	Point operator*(int times) {
		/*
		 �� �Լ��� ���ٸ� pos * 3�� �ȵ�. �ڷ����� �޶� ������ �߻��Ѵ�.
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