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
	 sizeof(ary)는 배열 ary의 전체 크기를 반환하며, 이 값은 배열의 요소 수가 아닙니다.
	 따라서 이 값을 사용하면 배열 범위를 초과하여 메모리에 접근할 수 있습니다.
	 배열의 요소 수를 구하기 위해서는 배열의 크기를 요소의 크기로 나누어야 합니다.
	*/


	while (true) {
		cout << "숫자를 입력하세요" << endl;
		cout << "1. 기존 배열   2. 역순 배열  3.저장값 출력  0. 종료" << endl;
		cin >> choice;

		if (choice == 1) {
			cout << "기존 배열 : " << endl;
			int i = 0;
			while (i < size) {
				printf("ary[%d] = %c\n", i, ary[i]);
				i++;
			}
		}
		else if (choice == 2) {
			cout << "역순 배열 : " << endl;
			int i = size - 1;
			while (i >= 0) {
				printf("ary[%d] = %c\n", i, ary[i]);
				re.push_back(ary[i]);
				i--;
			}
		}
		else if (choice == 3) {
			
			vector<char>::iterator iter;
			iter = re.begin(); // 반복자를 벡터의 시작으로 설정
			while (iter != re.end()) {
				cout << "*iter: " << *iter << endl;
				++iter; // 다음 요소로 이동
			}


		}
		else if (choice == 0) {
			break;
		}
	}
/*
while (true) {
		cout << "숫자를 입력하세요" << endl;
		cout << "1. 기존 배열   2. 역순 배열" << endl;
		cin >> choice;


		if (choice == 1) {
			cout << "기존 배열 : " << endl;

			for (int i = 0; i < size; i++) {
				printf("ary[%d] = %c\n", i, ary[i]);
			}
		}
		else if (choice == 2) {
			cout << "역순 배열 : " << endl;

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