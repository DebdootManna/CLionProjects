#include "iostream"
using namespace std;

class EquilateralTriangle {
private:
    float a;
    float circumference;
    float area;

public:
    void setA(float length) {
        a = length;
        circumference = a + a + a;
        area = (1.732 * a * a) / 4;
    }

    friend void PrintResults(EquilateralTriangle);
};

void PrintResults(EquilateralTriangle et) {
    cout << "circumference = " << et.circumference << endl;
    cout << "area = " << et.area << endl;
}

int main() {

    EquilateralTriangle et;
    et.setA(10);

    PrintResults(et);

    return 0;
}