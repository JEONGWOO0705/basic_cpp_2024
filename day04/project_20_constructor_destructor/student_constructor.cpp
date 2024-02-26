#include <iostream>
using namespace std;

class StudentClass {
	const int ID;	// �й��� ���ȭ --> ���ȭ�� ������� ��ü �������� �ʱ�ȭ ���Ѿ���!!
	char name[20];	// ���ڿ��� ���� ������ ����!!
	char major[20];
	int age;
	const int birth;

public:
	// ���ڿ��� �ּ��̱� ������ ����Ʈ ������ �־ ����Ѵ�.
	// ���ڿ��� ù��° ���� �ּҰ� ����ȴ�.
	StudentClass(int myid, const char* mname, const char* mmajor, int myage, int mybirth) : ID(myid), birth(mybirth)// **��� �̴ϼȶ�����** ID���� ���� ���ȭ �Ǿ��ֱ� ������ ��ü �������� �ʱ�ȭ ���ѳ�����
	{
		//C++ �μ� ����� ��ġ�ϴ� �������� �ν��Ͻ��� �����ϴ�.
		//�μ� ������ (int, const char [9], const char [3], int)�Դϴ�.
		//const char *mname ���� const�� ���� ���ϸ� ���� ���� ������ �߻��Ѵ�.
		// ������ ����Ǹ� �ȵǱ� ������ const �����!
		strcpy_s(name, mname);	//strcpy�� ���ٸ� ���س��� 20���� ������ ���� ���°� �ƴ϶� �� ������ ���ڿ��� ���鼭 ������ �߻��Ѵ�.
		strcpy_s(major, mmajor);
		age = myage;
	}
	// ���ڿ� �迭�� �����ϰ� strcpy() �� ���� 
	void Showdata() const {

		cout << ID << ' ' << name << ' ' << major << ' ' << age <<' '<<birth<< endl;

	}
};

int main(void) {
	StudentClass me(2052708, "jeongwoo", "IT", 27, 980705);		// ��ü�� �����ϸ� ������ ȣ���ؾ� �Ѵ�.
	// jeongwoo��� ���ڿ��� �����ϴ� �ּҰ� mname�� ����Ǿ� ����
	me.Showdata();

	return 0;

}