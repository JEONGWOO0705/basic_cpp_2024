#include<iostream>
using namespace std;

// 클래스 data를 흉내 낸 영역

typedef struct Data {
	int data;
	void(*ShowData)(Data*);	// 멤버 함수 선언
	void(*Add)(Data*, int);	//멤버 함수 선언
}Data;

void ShowData(Data* THIS) {	//멤버함수 정의
	cout << "Data : " << THIS->data << endl;
}
void Add(Data* THIS, int num) {	//멤버함수 정의
	THIS->data += num;
}

//적절히 변경된  main함수
int main(void) {
	Data obj1 = { 15,ShowData,Add };	//Data구조체 변수 obj선언과 초기화
	Data obj2 = { 7,ShowData,Add };

	obj1.Add(&obj1, 17);
	obj2.Add(&obj2, 9);
	obj1.ShowData(&obj1);
	obj2.ShowData(&obj2);

	return 0;
}