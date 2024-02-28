#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    char* name;
    int age;


public:
    Person(const char* myname, int myage) {

        int len = strlen(myname) + 1;
        name = new char[len];
        strcpy(name, myname);
        age = myage;

    }

    void ShowPersonInfo() const{

        cout << "이름 : " << name << endl;
        cout << "나이 : " << age << endl;
    }

    ~Person() {
        delete[]name;
        cout << "called destructor!" << endl;
    }
       

};

int main(void)
{
    Person man1("Lee dong woo", 29);
    Person man2 = man1;
    man1.ShowPersonInfo();
    man2.ShowPersonInfo();

    return 0;

    // 얇은복사 --> 소멸자가 한번밖에 생성이 안됨
    // man2 의 소멸자가 실행되기전에 man1이 소멸자가 실행되면서, man 1의 문자열이 삭제 되고
    // 문자열을 가르키고 있던 man2는 소멸할게 없어졌기 때문!!



}


