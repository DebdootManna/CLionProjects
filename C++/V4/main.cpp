#include <iostream>

using namespace std;

float area (float a) {
    const float PI = 22/7;
    return PI * a * a;
}

float area (float a, float b) {
    return a * b;
}

float area (float a, float b, float c) {
    return 2(a * b + b * c + c * a);
}

int main() {

    int a,b,c;
    int o;

    do {
        cout << "Enter what you want to calculate from this shitty computer:-" << endl;
        cout << "<1> Circle's area...." << endl;
        cout << "<2> Rectangle's area...." << endl;
        cout << "<3> Cuboid's area...." << endl;
        cout << "Get Out" << endl;
        cout << "Enter your option number: ";
        cin >> o;

        if(o == 1){
            cout << "Enter the radius: ";
            cin >> a;

            cout << "Area of the circle: " << area(a);
        }

        if(o == 2){
            cout << "Enter the length:" << endl;
            cin >> a;

            cout << "Enter the breath:" << endl;
            cin >> b;

            cout << "Area of the rectangle: " << area(a, b);
        }

        if(o == 3){
            cout << "Enter the length: " << endl;
            cin >> a;

            cout << "Enter the breath: " << endl;
            cin >> b;

            cout << "Enter the height: " << endl;
            cin >> c;

            cout << "Area of the cuboid:" << area(a, b, c);
        }

    } while( o!=4 );

    return 0;
}
