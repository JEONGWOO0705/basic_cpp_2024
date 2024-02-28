#include <iostream>
using namespace std;

class  SoSimple {
private:
	int num;
public:
	SoSimple(int n) : num(n) {
		cout << "New Object : " << this << endl; // this �� �ּҴ�
	}

	SoSimple(const SoSimple& copy) : num(copy.num) {

		cout << "New Copy obj : " << this << endl;
	}

	~SoSimple() {
		cout << "Destroy : " << this << endl;

	}
};

SoSimple SimpleFuncObj(SoSimple ob) {

	cout << "Parm ADR : " << &ob << endl;
	return ob;
}

int main(void) {

	SoSimple obj(7);
	SimpleFuncObj(obj);

	cout << endl;
	SoSimple tempRef = SimpleFuncObj(obj);
	cout << "Return Obj : " << &tempRef << endl;

	return 0;
}

// &�� ������ �޸� �ּҰ��� �̾߱� �Ѵ�


/*
New Object : 000000F067EFF9C4			        31�� obj ����  - ��ü obj�ּ�
New Copy obj : 000000F067EFFAC4			        32�� �Լ� ȣ��� ���� 23���� �Ű� ���� ob����  - ��ü ob�ּ�
Parm ADR : 000000F067EFFAC4						25�� ������ ���ؼ�	- ��ü ob�ּ�
New Copy obj : 000000F067EFFB04					26���� ��ȯ���� ���� �ӽ� ��ü ����	- �ӽð�ü �ּ�
Destroy : 000000F067EFFAC4						�Ű� ���� ob�Ҹ�		- ��ü ob�Ҹ�
Destroy : 000000F067EFFB04						26�� ��ȯ���� ������ �ӽ� ��ü �Ҹ�

New Copy obj : 000000F067EFFB24					�Ű����� ob����	-  ob��ü ����
Parm ADR : 000000F067EFFB24						25���� ���� --> �Ű����� ob�޸� �ּ�	- ob��ü �ּ�
New Copy obj : 000000F067EFF9E4					26�� ��ȯ�� = �ӽ� ��ü ����
Destroy : 000000F067EFFB24						�Ű����� ob�� �Ҹ�
Return Obj : 000000F067EFF9E4					36���� ������ �ӽð�ü�� �ּҰ��� ����
Destroy : 000000F067EFF9E4						tempRef�� �����ϴ� �ӽð�ü �Ҹ�
Destroy : 000000F067EFF9C4						31���� obj �Ҹ�
*/