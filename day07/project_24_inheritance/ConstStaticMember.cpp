#include<iostream>
using namespace std;

class CountryArea {

public:
	const static int RUSSIA = 170;
	const static int CANADA = 998;
	const static int CHINA = 957;
	const static int KOREA = 660;

};

int main(void) {

	cout << "러시아 면적 : " << CountryArea::RUSSIA << "km*2" << endl;
	cout << "캐나다 면적 : " << CountryArea::CANADA << "km*2" << endl;
	cout << "중국 면적 : " << CountryArea::CHINA << "km * 2" << endl;
	cout << "한국 면적 : " << CountryArea::KOREA << "km*2" << endl;
	

	return 0;
}

// const static 멤버 변수는 클래스가 정의될 때 지정된 값이 유지되는 상수