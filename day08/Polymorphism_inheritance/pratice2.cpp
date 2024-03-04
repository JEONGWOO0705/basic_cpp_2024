#include<iostream>
using namespace std;




class SamsungTv {
public:
	virtual void On() {
		cout << "»ï¼º TV on" << endl;
	}
};

class LGtv: public SamsungTv {
public:
	virtual void On() {
		cout << "¿¤Áö TV on" << endl;
	}
};


class RemoteControl:public LGtv {
public:
	virtual void On() {
		cout << "TV on" << endl;
	}
};

int main(void) {
	RemoteControl* remote = new RemoteControl();
	LGtv* remote1 = remote;
	SamsungTv* remote2 = remote1;

	remote->SamsungTv::On();
	remote->LGtv::On();

	return 0;
}