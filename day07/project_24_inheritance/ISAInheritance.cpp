#include<iostream>
#include<cstring>
using namespace std;

class Computer {
private:
	char owner[9];
public:
	Computer(const char* name) {
		strcpy(owner, name);
	}
	void Calculate() {
		cout << "요청 내용을 계산합니다." << endl;
	}
};

class Notebookcomp : public Computer {
private:
	int Battery;
public:
	Notebookcomp(const char* name, int initChag) : Computer(name), Battery(initChag) {}

	void Charging() {
		Battery += 5;
	}
	void UseBattery() {
		Battery -= 1;
	}
	void MoningCal() {
		if (GetBatteryInfo() < 1)
		{
			cout << "충전이 필요합니다" << endl;
			return;
		}
		cout << "이동하면서";
		Calculate();
		UseBattery();
	}
	int GetBatteryInfo() {
		return Battery;
	}
};

class TableNotebook : public Notebookcomp {
private:
	char regstPenModel[50];

public: 
	TableNotebook(const char* name, int initChag, const char* pen) : Notebookcomp(name, initChag) {
		strcpy(regstPenModel, pen);
	}

	void Write(const char* penInfo) {
		if (GetBatteryInfo() < 1) {
			cout << "충전이 필요합니다" << endl;
			return;
		}
		if (strcmp(regstPenModel, penInfo) != 0) {
			cout << "등록된 펜이 아닙니다" << endl;
			return;
		}
		cout << "필기 내용을 처리합니다." << endl;
		UseBattery();
	}
};





int main(void) {
	Notebookcomp nc("이수종", 5);
	TableNotebook tn("정수용", 5, "ISE324");
	nc.MoningCal();
	tn.Write("ISE324");
	tn.Calculate();
	return 0;
}