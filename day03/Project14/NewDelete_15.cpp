// DATE : 20240223
// FILE : NewDelete_15.cpp

#include <iostream>
#include<string.h>


using namespace std;

char* MakeStrAdr(int len) {
    //char * str=(char*)malloc(sizeof(char)*len);
    char* str = new char[len];  //C++ �������� len ũ�⸸ŭ �޸� ���� �Ҵ� // ������ ������� ��ü�� �� ������ ��� ����� ������  //���� �������� ����Ʈ ������ �������t
    return str;
}

int main(void)
{
    char* str = MakeStrAdr(20);
    strcpy(str, "I am so happy");
    cout << str << endl;
    // free(str)
    delete[]str;    // C++ �Ҵ���� �޸𸮸� ��ȯ
    return 0;
}