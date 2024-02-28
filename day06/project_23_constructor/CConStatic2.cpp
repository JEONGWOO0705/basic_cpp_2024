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
// cnt에 static으로 설정이 안되면 cnt 값이 +1되고 유지 되는 것이 아니라 
// 5행의 메모리 값으로 돌아간다!!