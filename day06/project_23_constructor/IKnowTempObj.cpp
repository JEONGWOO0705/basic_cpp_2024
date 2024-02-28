#include <iostream>
using namespace std;

class Temporary {
private:
	int num;
public:
	Temporary(int n) : num(n) {
		cout << "create obj : " << num << endl;
	}

	~Temporary() {
		cout << "destroy obj: " << num << endl;
	}

	void ShowTempInfo() {
		cout << "My num is " << num << endl;
	}
};

int main(void) {

	Temporary(100);	// 이름없는 임시 객체!!   --> 이름이 있을려면 :  Temporary t(100)
	cout << "********* after make!!" << endl << endl;

	Temporary(200).ShowTempInfo();
	cout << "***** after make!" << endl << endl;

	const Temporary& ref = Temporary(300);	//임시 객체를 참조 할려면 const가 필수적이다!!!!
	cout << "***** end of main!" << endl << endl;

	return 0;

}