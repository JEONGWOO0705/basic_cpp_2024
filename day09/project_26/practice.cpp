#include<iostream>
using namespace std;

class Myclass {
private:
	int num;
	
	

public:
	Myclass(int a) :num(a) {}
	

	Myclass operator+(const Myclass& ref){
		Myclass val(num + ref.num);
		return val;
	}


	void print() {
		
		cout << "value : " << num << endl;
	}

};


int main(void) {
	Myclass a(10);
	a.print();			// value : 10

	Myclass b(a);		

	//Myclass(Myclass* ref) {} ---->>> ���� �����ڸ� �����ϱ� ���� ���ڵ带 �ۼ�������
	//									���� �����ڴ� �⺻������ �����Ͽ� ������ �Ǳ� ������ �ʿ���� �ڵ���!!
	//									����Ʈ ������, ���� ������, �Ҹ��ڴ� �⺻������ ����!!
	//									���� ���� �϶��� ���� ������ �ڵ� �����ϱ�


	b.print();		// value : 10

	Myclass c = b;
	c.print();			// value : 10;

	Myclass h = a + b;
	h.print();

	Myclass d = a + b + c;
	d.print();			// value : 30;
}