#include <iostream>
#include <string>
using namespace std;

class STUDENT{

public:
    string name="xiao ming";
    int age=0;

};


int main() {
    cout << "Hello, World!" << endl;

    STUDENT student;
    cout<<student.name<<" "<<student.age<<endl;
    return 0;
}
