#include <iostream>
#include <string>

using namespace std;

const float PI = 22/7;

private:
    int r;
    static int c;

public:
    area(){
        radius = 1;
        cout << "The circle with radius " << radius << " has area " << PI * radius * radius << "." << endl;
        count ++;
    }

    area(float r1){
        r = r1;
        cout << "The circle with radius " << r << " has area " << PI * r * r << "." << endl;
        count ++;
    }

    area(area &r1){
        r = r1.r;
        cout << "The circle with radius " << r << " has area " << PI * r * r << "." << endl;
        count ++;
    }

    ~area(){// Destructor
        cout << "Object has been deleted." << endl;
        cout << "Total archive objects are " << (count --) - 1 << endl;

    return 0;
}

int area :: count;

int main(){
    area a1;
    area a2(20);
    area a3(a1);

    return 0;
}
