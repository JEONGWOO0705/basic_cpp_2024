// DATE : 20240223
// FILE : MemMalFree_14.cpp

#include <iostream>
#include<string.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

char* MakeStrAdr(int len) {
    char * str = (char*)malloc(sizeof(char) * len); // C: heap영역에 20 Byte 크기로 메모리 할당
    printf("char size : %llu\n", sizeof(char));
    return str;
}

int main(void)
{
    char * str = MakeStrAdr(20);
    strcpy(str, "I am so happy");
    cout << str << endl;
    free(str);
    return 0;
}


// _CRT_SECURE_NO_WARNINGS
