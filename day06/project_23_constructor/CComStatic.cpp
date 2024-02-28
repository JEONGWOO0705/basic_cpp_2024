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
	//cnt--; 함수내에 static이 설정되어 있기 때문에 지역 변수 특성때문에 다른 함수안에서 변수 선언이 불가!! 
}	
		return 0;
	
}