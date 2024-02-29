#include<iostream>
using namespace std;

class PermanentWorker {
private:
	char name[100];
	int salary;

public:
	PermanentWorker(const char* name, int money) : salary(money) {
		strcpy(this->name, name);
	}

	int GetPay()const {
		return salary;
	}

	void ShowSalaryInfo()const {

		cout << "name : " << name << endl;
		cout << " salary : " << GetPay() << endl << endl;
	}
};

class EmployeeHandler {
private:
	PermanentWorker* empList[50];	// ��ü ������ �迭 // PermanentWorker ��ü		--> new �����ڸ� ���� �������� ���
	int empNum;

public:
	EmployeeHandler() : empNum(0) {}

	void AddEmployee(PermanentWorker* emp) { //PermanentWorker�� ��ü �ּҸ� �Է��Ѵ�. �̰�(������ ��ü�� ������)�� empList �迭�� ���� �ִ´�.

		empList[empNum++] = emp;
	}

	void ShowAllSalaryInfo() const {
		for (int i = 0; i < empNum; i++) {
			empList[i]->ShowSalaryInfo(); // empList[i] �� �� �ִ� ���� �ּ� ���̱� ������ ���ο� �����ڸ� ����ؾ��Ѵ�.
										 // empList �迭�� ��Ұ�(��ü �ּ�)�� ���ؼ� ��� �Լ��� ����
		}
	}

	void ShowTotalSalary() const {
		int sum = 0;

		for (int i = 0; i < empNum; i++) {
			sum += empList[i]->GetPay();
		}
		cout << "salary Sum : " << sum << endl;

	}
	~EmployeeHandler() {

		for (int i = 0; i < empNum; i++) {
			delete empList[i];
		}
	}
};

int main(void) {

	EmployeeHandler handler;
	

	// ���� ���
	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("Lee", 2000));
	handler.AddEmployee(new PermanentWorker("Hwang",3000));

	// �̹��޿� �����ؾ��� �޿��� ����

	handler.ShowAllSalaryInfo();

	//�̹� �޿� �����ؾ��� �޿��� ����
	handler.ShowTotalSalary();
	return 0;

}