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

	cout << "���þ� ���� : " << CountryArea::RUSSIA << "km*2" << endl;
	cout << "ĳ���� ���� : " << CountryArea::CANADA << "km*2" << endl;
	cout << "�߱� ���� : " << CountryArea::CHINA << "km * 2" << endl;
	cout << "�ѱ� ���� : " << CountryArea::KOREA << "km*2" << endl;
	

	return 0;
}

// const static ��� ������ Ŭ������ ���ǵ� �� ������ ���� �����Ǵ� ���