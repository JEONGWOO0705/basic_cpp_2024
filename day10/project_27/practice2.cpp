#include <iostream>
#include <cstring>

using namespace std;

class Grade {
private:
    char* name;
    int kr;
    int math;
    int english;

public:
    Grade(const char* mname, int mkr, int mmath, int menglish) : kr(mkr), math(mmath), english(menglish) {
        int len = strlen(mname) + 1;
        name = new char[len];
        strcpy(name, mname);
    }

    // Destructor
    ~Grade() {
        delete[] name;
    }

    // Member function to display student information
    void displayInformation() {
        cout << "Name: " << name << endl;
        cout << "Korean Score: " << kr << endl;
        cout << "Math Score: " << math << endl;
        cout << "English Score: " << english << endl;
    }
};

int main() {
    char mname[100];
    int mkr, mmath, menglish;

    // Input student information
    cout << "Enter student name: ";
    cin.getline(mname, 100);

    cout << "Enter Korean score: ";
    cin >> mkr;

    cout << "Enter Math score: ";
    cin >> mmath;

    cout << "Enter English score: ";
    cin >> menglish;

    // Create Grade object and display information
    Grade grade1(mname, mkr, mmath, menglish);
    grade1.displayInformation();

    return 0;
}
