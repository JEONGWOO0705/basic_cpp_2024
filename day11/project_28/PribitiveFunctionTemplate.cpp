#include<iostream>
using namespace std;

template<class T1, class T2>
void ShowData(double num) {
	cout << (T1)num << ", " << (T2)num << endl;
}

int main(void) {

	ShowData<char, int>(65);
	ShowData<char, int>(65);
	ShowData<char, double>(68.9);
	ShowData<short, double>(69.9);
	ShowData<short, double>(70.9);

	return 0;
}