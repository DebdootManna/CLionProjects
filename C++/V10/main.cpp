#include <iostream>

using namespace std;

class experience{
    int year, month;
public:
    experience(){
        year = month = 0;
    }

    experience(float &a){
        year = (int)a;
        month = (a - (int)a) * 12;
    }

    void output(){
        cout << "Employee experiance is " << year << " years and " << month << " months." << endl;
    }
};

int main(){
    experience exp;
    float time;

    cout << "Enter employee experience : ";
    cin >> time;

    exp = time;

    exp.output();

    return 0;
}