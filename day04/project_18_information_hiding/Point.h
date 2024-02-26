#ifndef __POINT_H_
#define __POINT_H_


class Point {
private:
	int x;
	int y;

public:
	bool InitMembers(int xpos, int ypos);
	int GetX() const;	// private로 정보를 은닉한 x,y값을 외부에서 호출할 수 있는 함수
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);
};

#endif
