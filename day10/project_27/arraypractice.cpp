#include<iostream>
using namespace std;



















int main() {

	int arr[5] = { 1,2,3,4,5 };		// int형 배열 선언
	int *parr = arr;				// 배열의 이름은 주소이다!!!!


	printf("arr 주소 : %p \n", arr);
	printf("arr 크기 : %d \n", sizeof(arr));// 4 x 5 = 20 byte
	cout << "****************" << endl;

	printf("arr[0] 주소 : %p \n", &arr[0]);
	printf("arr[1] 주소 : %p \n", &arr[1]);
	printf("arr+1 : %p \n", arr+1);	// == arr[1] 위와 비교해보면 주소가 같다!!
	cout << "****************" << endl;

	printf("parr 주소 : %p \n", &parr);
	printf("parr 데이터 : %p \n", parr);	// parr 의 주소는 arr과 다르지만 parr의 데이터는 arr의 주소를 저장하고 있다.
	printf("parr +1 : %p \n", parr + 1);
	printf("parr[0] : %d \n  *parr: %d\n  arr[0] : %d", parr[0], *parr, arr[0]);

	return 0;
}