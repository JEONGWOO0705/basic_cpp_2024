#include<iostream>
using namespace std;




class SamsungTv {
public:
	virtual void On() {
		cout << "�Ｚ TV on" << endl;
	}
};

class LGtv : public SamsungTv {
public:
	virtual void On() {
		cout << "���� TV on" << endl;
	}
};


class RemoteControl :public LGtv {
public:
	virtual void On() {
		cout << "TV on" << endl;
	}

	string select() {
		char company[100];
		cout << "SamsungTv �� LGtv�� �ϳ��� ������ �Է��� �ֽÿ� : " << endl;
		cin >> company;

		return company;
	}


};

int main(void) {
	RemoteControl* remote = new RemoteControl();
	LGtv* remote1 = remote;
	SamsungTv* remote2 = remote1;

	remote->SamsungTv::On();
	remote->LGtv::On();

	remote->select();



	return 0;
}