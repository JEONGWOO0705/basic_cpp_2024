
#include <iostream>

class Person{};

class Student : public Person{};
class Partimestudent : public Student{};

int main()
{
    return 0;
}

Person* ptr;        //Person 타입의 객체 포인터 선언
                    // 부모타입의 객체 포인터는 자식 타입의 객체도 선언 가능 but 반대는 불가!!
Person *ptr = new Person(); // o

// Person p = new Person(); // x

Person* ptr = new Student();
Person* ptr2 = new Partimestudent();

// Studnet *ptr = new Person(); // x

