#include <iostream>
using namespace std;

void Counter() {
	static int cnt;
	cnt++;
	cout << "Current cnt : " << cnt << endl;
}

int main(void) {
	for (int i = 0; i < 10; i++) {
	Counter();
	//cnt--; �Լ����� static�� �����Ǿ� �ֱ� ������ ���� ���� Ư�������� �ٸ� �Լ��ȿ��� ���� ������ �Ұ�!! 
}	
		return 0;
	
}