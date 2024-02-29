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
		cout << "��û ������ ����մϴ�." << endl;
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
			cout << "������ �ʿ��մϴ�" << endl;
			return;
		}
		cout << "�̵��ϸ鼭";
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
			cout << "������ �ʿ��մϴ�" << endl;
			return;
		}
		if (strcmp(regstPenModel, penInfo) != 0) {
			cout << "��ϵ� ���� �ƴմϴ�" << endl;
			return;
		}
		cout << "�ʱ� ������ ó���մϴ�." << endl;
		UseBattery();
	}
};





int main(void) {
	Notebookcomp nc("�̼���", 5);
	TableNotebook tn("������", 5, "ISE324");
	nc.MoningCal();
	tn.Write("ISE324");
	tn.Calculate();
	return 0;
}