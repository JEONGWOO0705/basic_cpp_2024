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

void human :: showHuman() {	// ��� �Լ�
	printf("name : %s	age : %d	job : %s\n", name, age, job);
}
int main() {

	AClass a(10);
	a.Alnfo();

	human h("Ȳ����", 27, "���");
	h.showHuman();

	return 0;
}