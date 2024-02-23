#include <iostream>
#include<stdlib.h>
using namespace std;

class Simple {
public:
    Simple() {  // 클래스와 이름이 같으면 생성자다 !!
        cout<< "I 'm simple constructor!" << endl;
    }
};

int main(void) {
    cout << "case 1: ";
    Simple* sp1 = new Simple;   // new 연산자를 통한 객체 생성
    //Aaa *ap = new Aaa;

    cout << "case2: ";
    Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1);

    cout << endl << "end of main" << endl;
    delete sp1;     // 객체를 반환한다
    free(sp2);
    return 0;
}