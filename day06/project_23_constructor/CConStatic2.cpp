#include <iostream>
using namespace std;

void Counter() {
	int cnt = 0;
	cnt++;
	cout << "Current cnt : " << cnt << endl;
}

int main(void) {
	for (int i = 0; i < 10; i++) {
		Counter();
		
	}
	return 0;

}
// cnt�� static���� ������ �ȵǸ� cnt ���� +1�ǰ� ���� �Ǵ� ���� �ƴ϶� 
// 5���� �޸� ������ ���ư���!!