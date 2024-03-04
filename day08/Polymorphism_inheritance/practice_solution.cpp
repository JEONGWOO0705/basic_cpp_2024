#include<iostream>
using namespace std;


class RemoteControl {
public:
	virtual void On() {
		cout << "TV on" << endl;
	}
};

class SamsungTv :public RemoteControl {
public:
	virtual void On() {
		cout << "»ï¼º TV on" << endl;
	}
};

class LGtv : public RemoteControl {
public:
	virtual void On() {
		cout << "¿¤Áö TV on" << endl;
	}
};


int main(void) {

	RemoteControl* remote = new SamsungTv();
	remote->On();

	remote = new LGtv();
	remote->On();

	delete remote;






	return 0;
}

