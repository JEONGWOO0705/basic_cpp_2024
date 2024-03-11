#include <iostream>
#include <vector>
using namespace std;






int main(void) {

	int n;
	int avr;
	double sum = 0;
	vector<int>num;
	while (true) {
		
		cout << "정수를 입력하세요" << endl;
		cout << "0을 입력하면 종료됩니다." << endl;
		cin >> n;
		if (n == 0) {
			break;
		}
		else {
			num.push_back(n);

			for (int i = 0; i < num.size(); i++) {

				sum += num[i];
			}
			avr = sum / num.size();
			cout << "평균: " << avr << "\n";
		}		
	}
}