#include <iostream>
#include "FileDivision.h"
using namespace std;

AClass :: AClass(int anum) {
	
	num = anum;

}

void AClass :: Alnfo() {

	std::cout << "AClass :: num " << num << std::endl;
}

Human::Human(const char* mname, const char* mjob, int mage) {
	strcpy_s(name, mname);
	strcpy_s(job, mjob);
	age = mage;
}

void Human::ShowProfile() {
	cout << name << ' ' << job << ' ' << age << endl;
}

int main(void) {
	Human me("정우", "학생", 27);
	me.ShowProfile();
	return 0;

}