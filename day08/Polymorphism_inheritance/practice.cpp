#include<iostream>
using namespace std;


class RemoteControl {
public:
	virtual void On() {
		cout << "TV on" << endl;
	}
};

class SamsungTv :public RemoteControl{
public:
	virtual void On() {
		cout << "»ï¼º TV on" << endl;
	}
};

class LGtv : public RemoteControl{
public:
	virtual void On() {
		cout << "¿¤Áö TV on" << endl;
	}
};


int main(void) {

	RemoteControl* remote_Samsung = new SamsungTv();
	RemoteControl* remote_Lg = new LGtv();

	remote_Samsung->On();
	remote_Lg->On();






	return 0;
}

