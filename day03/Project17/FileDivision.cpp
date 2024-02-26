#include <iostream>
#include "FileDivision.h"

AClass :: AClass(int anum) {
	
	num = anum;

}

void AClass :: Alnfo() {

	std::cout << "AClass :: num " << num << std::endl;
}

human::human(name, age, job)
{
}

void human :: showHuman() {	// 멤버 함수
	printf("name : %s	age : %d	job : %s\n", name, age, job);
}
int main() {

	AClass a(10);
	a.Alnfo();

	human h("황정우", 27, "백수");
	h.showHuman();

	return 0;
}