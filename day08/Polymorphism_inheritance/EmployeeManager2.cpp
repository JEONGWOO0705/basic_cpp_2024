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
		void ShowYourName()const{
			cout << "name : " << name << endl;
		}
	
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
		/*
		for(int i = 0; i<empNum; i++){
			empList[i] ->ShowsalryInfo();
				}
		*/
	}


	void ShowTotalSalary() const {
		int sum = 0;
		/*
		for(int i = 0;i<empNum;i++){
			sum += empList[i] -> Getpay();
		*/

		cout << "salary sum: " << sum << endl;
	}
	~EmployeeHandler() {
		for (int i = 0; i < empNum; i++) {
			delete empList[i];
		}
	}
};

	
	int main(void) {
		//직원 관리를 목적으로 설계된 컨트롤 클래스의 객체 생성
		EmployeeHandler handler;

		// 직원등록
		handler.AddEmployee(new PermanentWorker("KIM", 1000));
		handler.AddEmployee(new PermanentWorker("LEE", 1500));
		handler.AddEmployee(new PermanentWorker("Hee", 1200));

		//이번달에 지불해야할 급여의 정보
		handler.ShowAllSalryInfo();

		//이번 달에 지불해야 할 급여의 총 합
		handler.ShowTotalSalary();

		return 0;
	}

