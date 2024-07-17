#include <iostream>
#include <string>

using namespace std;

class number{
    float num;
public:
    void input(){
        cin >> num;
    }

    int output(){
        return num;
    }
};

class millimeter : public number{
    float num_mm;
public:
    millimeter(){
        num_mm = 0;
    }

    millimeter(number &a){
        num_mm = (a.output() * 10);
    }

    int get_mm(){
        return num_mm;
    }
};

class centimeter : public number{
    float num_cm;
public:
    centimeter(){
        num_cm = 0;
    }

    centimeter (number &b){
        num_cm = (b.output() / 10);
    }

    int get_cm(){
        return num_cm;
    }
};

int main (){
    number Num;
    millimeter MM;
    centimeter CM;
    int type;

    do{
        cout << "Choose the option of the converstion :" << endl;
        cout << "[1] Millimeter to centimeter." << endl;
        cout << "[2] Centimeter to millimeter." << endl;
        cout << "[3] Exit." << endl;
        cout << "Enter your choice :";
        cin >> type;

        if (type == 1 || type == 2){
            cout << endl;
        }
        else if(type == 3){
            cout << "Exiting." << endl;
            break;
        }
        else{
            cout << "Enter proper input." << endl;
            continue;
        }

        switch (type){
            case 1:
                cout << "Enter the number to be converted :";
                Num.input();

                CM = Num;

                cout << "Measurement in cm : " << CM.get_cm() << "cm" << endl;

                break;
            case 2:
                cout << "Enter the number to be converted :";
                Num.input();

                MM = Num;

                cout << "Measurement in mm : " << MM.get_mm() << "mm" << endl;

                break;
        }

        cout << "Do you want to convert another number?, 1 if Yes else 0." << endl;
        cin >> type;

        if(type == 0){
            cout << "Exiting." << endl;
            break;
        }
        else{
            cout << endl;
        }

    }while(true);

    return 0;
}