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
	int workTime;	//이 달에 일한 시간의 합계
	int payPerHour;	// 시간당 급여

public:
	TemporaryWorker(const char* name, int pay) : Employee(name), workTime(0), payPerHour(pay) {

	}

	void AddWorkTime(int time) {
		workTime += time;	//일한 시간의 추가
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
	int salesResult;	//월 판매 실적
	double bonusRatio;	// 상여금 비율

public:
	SalesWorker(const char* name, int money, double ratio) : PermanentWorker(name, money), salesResult(0), bonusRatio(ratio) {}

	void AddSalesResult(int value) {
		salesResult += value;
	}
	int GetPay() const {
		cout << "SalesWorker" << endl;		// 오버라이딩된 멤버함수는 자식 것이 실행 된다
		return PermanentWorker::GetPay()	// 따라서 재정의된 부모것을 호출 할려면 PermanentWorker의 GetPay함수 호출
			+ (int)(salesResult * bonusRatio);
	}
	void ShowSalaryInfo() const {
		ShowYourName();
		cout << "Salary : " << GetPay() << endl << endl;
	}
};

int main(void) {
	//직원 관리를 목적으로 설계된 컨트롤 클래스의 객체 생성
	EmployeeHandler handler;

	// 직원등록
	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));
	handler.AddEmployee(new PermanentWorker("Hee", 1200));

	//임시직 등록
	TemporaryWorker* alba = new TemporaryWorker("Jung", 700);
	alba->AddWorkTime(5);
	handler.AddEmployee(alba);

	//영업직 등록
	SalesWorker* seller = new SalesWorker("Hong", 1000, 0.1);
	seller->AddSalesResult(7000);
	handler.AddEmployee(seller);

	//이번달에 지불해야할 급여의 정보
	handler.ShowAllSalryInfo();

	//이번 달에 지불해야 할 급여의 총 합
	handler.ShowTotalSalary();

	

	return 0;
}

