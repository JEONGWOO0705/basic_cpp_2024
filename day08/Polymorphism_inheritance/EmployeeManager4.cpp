#include<iostream>
#include<cstring>
using namespace std;


class Employee {
private:
	char name[100];
public:
	Employee(const char* name) {
		strcpy(this->name, name);
	}
	void ShowYourName()const {
		cout << "name : " << name << endl;
	}

	virtual int GetPay() const {
		return 0;
	}
	virtual void ShowSalaryInfo() const{}

};

class PermanentWorker : public Employee {
private:
	int salary;
public:
	PermanentWorker(const char* name, int money) :Employee(name), salary(money) {}
	int GetPay() const {
		return salary;
	}

	void ShowSalaryInfo() const {
		ShowYourName();
		cout << "salary : " << GetPay() << endl << endl;
	}
};

class EmployeeHandler {
private:
	Employee* empList[50];
	int empNum;

public:
	EmployeeHandler() :empNum(0) {}
	void AddEmployee(Employee* emp) {
		empList[empNum++] = emp;

	}

	void ShowAllSalryInfo() const {

		for (int i = 0; i < empNum; i++) {
			empList[i]->ShowSalaryInfo();
		}

	}
	void ShowTotalSalary() const {
		int sum = 0;

		for (int i = 0; i < empNum; i++) {
			sum += empList[i]->GetPay();


			cout << "salary sum: " << sum << endl;
		}
	}
	~EmployeeHandler() {
		for (int i = 0; i < empNum; i++) {
			delete empList[i];
		}
	}
};

	
	
class TemporaryWorker : public Employee {
private:
	int workTime;	//�� �޿� ���� �ð��� �հ�
	int payPerHour;	// �ð��� �޿�

public:
	TemporaryWorker(const char* name, int pay) : Employee(name), workTime(0), payPerHour(pay) {

	}

	void AddWorkTime(int time) {
		workTime += time;	//���� �ð��� �߰�
	}

	int getPay() const {
		return workTime * payPerHour;
	}
	void ShowSalryInfo() const {
		ShowYourName();
		cout << "salary : " << getPay() << endl << endl;
	}
};


class SalesWorker : public PermanentWorker {
private:
	int salesResult;	//�� �Ǹ� ����
	double bonusRatio;	// �󿩱� ����

public:
	SalesWorker(const char* name, int money, double ratio) : PermanentWorker(name, money), salesResult(0), bonusRatio(ratio) {}

	void AddSalesResult(int value) {
		salesResult += value;
	}
	int GetPay() const {
		cout << "SalesWorker" << endl;		// �������̵��� ����Լ��� �ڽ� ���� ���� �ȴ�
		return PermanentWorker::GetPay()	// ���� �����ǵ� �θ���� ȣ�� �ҷ��� PermanentWorker�� GetPay�Լ� ȣ��
			+ (int)(salesResult * bonusRatio);
	}
	void ShowSalaryInfo() const {
		ShowYourName();
		cout << "Salary : " << GetPay() << endl << endl;
	}
};

int main(void) {
	//���� ������ �������� ����� ��Ʈ�� Ŭ������ ��ü ����
	EmployeeHandler handler;

	// �������
	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));
	handler.AddEmployee(new PermanentWorker("Hee", 1200));

	//�ӽ��� ���
	TemporaryWorker* alba = new TemporaryWorker("Jung", 700);
	alba->AddWorkTime(5);
	handler.AddEmployee(alba);

	//������ ���
	SalesWorker* seller = new SalesWorker("Hong", 1000, 0.1);
	seller->AddSalesResult(7000);
	handler.AddEmployee(seller);

	//�̹��޿� �����ؾ��� �޿��� ����
	handler.ShowAllSalryInfo();

	//�̹� �޿� �����ؾ� �� �޿��� �� ��
	handler.ShowTotalSalary();

	

	return 0;
}

