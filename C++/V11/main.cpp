#include <iostream>

using namespace std;

class experiance{
    int year, month;
public:
    void input(){
        cout << "Enter the employee experience in years and months :" << endl;
        cout << "Years : ";
        cin >> year;
        cout << "Months : ";
        cin >> month;
    }

    operator float(){
        float temp;
        temp = (year + (month/12.0));
        return temp;
    }

};

int main(){
    experiance exp;
    float time;

    exp.input();

    time = exp;

    cout << "Employee experience is : " << time << endl;

    return 0;
}