#include <iostream>
#include <cstring>
using namespace std;

class Girl;

class Boy {
private:
	int height;
	friend class Girl;

public:
	Boy(int len) : height(len) {}

	void ShowYourFriendInfoBoy(Girl& grn);
};

class Girl {
private:
	char phNum[20];

public:
	Girl(const char* num) {
		strcpy(phNum, num);
	}

	void ShowYourFriendInfoGirl(Boy& frn);
	friend class Boy;
};

void Boy::ShowYourFriendInfoBoy(Girl& frn) {
	cout << "Her Phone Number : " << frn.phNum << endl;
}

void Girl::ShowYourFriendInfoGirl(Boy& dd) {
	cout << "His height : " << dd.height << endl;
}

int main(void) {

	Boy boy(170);
	Girl girl("010-1111-1111");
	boy.ShowYourFriendInfoBoy(girl);
	girl.ShowYourFriendInfoGirl(boy);

	return 0;
}
