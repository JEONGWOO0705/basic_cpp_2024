#include<iostream>
#include<string>
using namespace std;

/*
c-style ���ڿ�
���ڿ��� �������� �ι��ڰ� �ٴ´�.
*/
int main() {
	/*
	int code = 97;
	cout << code << endl;
	cout << (char)code << endl;
	cout << "------------------------" << endl;


	char ary[6] = { 'a','b','c','d','e' };	//���ڿ� Ÿ���� �迭 ����
	cout << ary << endl;
	cout << "------------------------\n" << endl;

	char ary1[6] = { 'a','b','c','\0','e' };		//�� ����- ���ڿ� ���� �˸���.
	cout << ary1 << endl;		
	cout << sizeof(ary1) << endl;		//��ü ���� ũ��
	cout << strlen(ary1) << endl;		// �� ���� �ձ����� ũ��
	cout << "------------------------\n" << endl;

	char str[] = "string";			// �ڵ����� null���ڰ� �ٴ´� 
	cout << str << endl;
	cout << sizeof(str) << endl;	// s,t,r,i,n,g + �� ���� = 7
	cout << strlen(str) << endl;	// �ι��� ���� --> 6�� ����

	str[0] = 'S';
	cout << str << endl;





	cout << "------------------------\n" << endl;

	const char* pstr = "STRING";
	cout << pstr << endl;
	cout << sizeof(pstr) << endl;	
	cout << strlen(pstr) << endl;
	// pstr[0] = 's';	���ڿ��� �����ͷ� ����ϴ� ���� ������ �Ұ���
	cout << pstr << endl;
	cout << "------------------------\n" << endl;

/*
C++ style	: heap ������ �����Ѵ�.

*/
	string str = "string";
	cout << str << endl;
	cout << sizeof(str) << endl;	// string Ÿ���� ��ü�� �⺻������ ũ�Ⱑ 40�̴�
	//cout << strlen(str) << endl; ���Ұ�
	cout << str.size() << endl;	// --> 6 ��Ȯ�ϰ� ���� ������ �����ش�!!

	string s1 = "Hongildon";
	cout << s1 << endl;
	cout << sizeof(s1) << endl;	//
	cout << s1.size() << endl;	// --> 6 ��Ȯ�ϰ� ���� ������ �����ش�!!

	return 0;
}

