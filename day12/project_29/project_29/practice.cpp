#include <iostream>
#include <cstring>
#include<vector>
using namespace std;

int main(void) {
	char ary[] = { 'a','b','c','d','e','f' };
	int choice;
	int size = sizeof(ary) / sizeof(ary[0]);
	vector<char>re;

	/*
	 sizeof(ary)�� �迭 ary�� ��ü ũ�⸦ ��ȯ�ϸ�, �� ���� �迭�� ��� ���� �ƴմϴ�.
	 ���� �� ���� ����ϸ� �迭 ������ �ʰ��Ͽ� �޸𸮿� ������ �� �ֽ��ϴ�.
	 �迭�� ��� ���� ���ϱ� ���ؼ��� �迭�� ũ�⸦ ����� ũ��� ������� �մϴ�.
	*/


	while (true) {
		cout << "���ڸ� �Է��ϼ���" << endl;
		cout << "1. ���� �迭   2. ���� �迭  3.���尪 ���  0. ����" << endl;
		cin >> choice;

		if (choice == 1) {
			cout << "���� �迭 : " << endl;
			int i = 0;
			while (i < size) {
				printf("ary[%d] = %c\n", i, ary[i]);
				i++;
			}
		}
		else if (choice == 2) {
			cout << "���� �迭 : " << endl;
			int i = size - 1;
			while (i >= 0) {
				printf("ary[%d] = %c\n", i, ary[i]);
				re.push_back(ary[i]);
				i--;
			}
		}
		else if (choice == 3) {
			
			vector<char>::iterator iter;
			iter = re.begin(); // �ݺ��ڸ� ������ �������� ����
			while (iter != re.end()) {
				cout << "*iter: " << *iter << endl;
				++iter; // ���� ��ҷ� �̵�
			}


		}
		else if (choice == 0) {
			break;
		}
	}
/*
while (true) {
		cout << "���ڸ� �Է��ϼ���" << endl;
		cout << "1. ���� �迭   2. ���� �迭" << endl;
		cin >> choice;


		if (choice == 1) {
			cout << "���� �迭 : " << endl;

			for (int i = 0; i < size; i++) {
				printf("ary[%d] = %c\n", i, ary[i]);
			}
		}
		else if (choice == 2) {
			cout << "���� �迭 : " << endl;

			for (int i = size - 1; i >= 0; i--) {
				printf("ary[%d] = %c\n", i, ary[i]);
			}

		}

		else if (choice == 0) {
			break;
		}
	}

*/

	


	return 0;
}