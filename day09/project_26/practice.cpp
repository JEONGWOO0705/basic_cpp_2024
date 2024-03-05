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

	//Myclass(Myclass* ref) {} ---->>> 복사 생성자를 생성하기 위해 이코드를 작성했지만
	//									복사 생성자는 기본적으로 제공하여 컴파일 되기 때문에 필요없는 코드임!!
	//									디폴트 생성자, 복사 생성자, 소멸자는 기본적으로 제공!!
	//									깊은 복사 일때만 복사 생성자 코드 생성하기


	b.print();		// value : 10

	Myclass c = b;
	c.print();			// value : 10;

	Myclass h = a + b;
	h.print();

	Myclass d = a + b + c;
	d.print();			// value : 30;
}