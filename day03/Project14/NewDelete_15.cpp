// DATE : 20240223
// FILE : NewDelete_15.cpp

#include <iostream>
#include<string.h>


using namespace std;

char* MakeStrAdr(int len) {
    //char * str=(char*)malloc(sizeof(char)*len);
    char* str = new char[len];  //C++ 힙영역에 len 크기만큼 메모리 공간 할당 // 앞으로 만들어질 객체는 힙 영역에 모두 만들어 질거임  //스텍 영역에서 포인트 변수를 만들어아햠
    return str;
}

int main(void)
{
    char* str = MakeStrAdr(20);
    strcpy(str, "I am so happy");
    cout << str << endl;
    // free(str)
    delete[]str;    // C++ 할당받은 메모리를 반환
    return 0;
}