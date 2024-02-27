/*
메모리 동적할당 : new 연산자 사용
	- 프로그램 실행 중에 메모리를 할당 받는다
*/

#include <iostream>
using namespace std;






int main() {

	cout << "int size : "<< sizeof(int) << endl;
	int *pi  = new int; //int type으로 메모리를 할당 받았다. --> 힙 영역에 4byte 크기 만큼 할당 받았다 
						// 할당 받은 메모리의 주소를 리턴 시켜준다
						// 메모리 주소값(new int)을 저장하기 때문에 포인터 변수에 저장해야한다

	// 포인터 변수에 값을 지정 할때는 
	*pi = 10; // pi = 10; 은 안됨!!!

	cout << "pi가 가르키는 곳에 저장된 값은 :  " << *pi << endl;

	delete pi;			// 힙영역에 메모리 공간을 할당 받았을 경우 반드시 소멸자를 통해 할당된 메모리 공간 반환하기!!
						// 할거 다했으면 다시 공간을 내놔라!!

	int* pary = new int[10];	// 힙영역에 배열 형태로 할당!!
	*pary = 10000;
	for (int i = 0; i < 10; i++) {
		pary[i] = i + 10;	// 배열의 각 방에 원소 (데이터) 값을 집어 넣는다. ex) pary[0] = 10
	}

	for (int i = 0; i < 10; i++) {
		printf("pary[%d] : %d \n", i, pary[i]);

	}

	delete []pary;		// 배열로 동적할당한 메모리를 반환한다.


	


	return 0;
}