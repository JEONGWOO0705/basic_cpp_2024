#include <iostream>
#include <vector>
using namespace std;






int main(void) {

	int n;
	int avr;
	double sum = 0;
	vector<int>num;
	while (true) {
		
		cout << "������ �Է��ϼ���" << endl;
		cout << "0�� �Է��ϸ� ����˴ϴ�." << endl;
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
			cout << "���: " << avr << "\n";
		}		
	}
}