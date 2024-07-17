#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

class product {
protected:
    int product_id;
    string product_name, product_manufacturer;
    float product_price;

public:
    product(int Productid, string Productname, string Productmanufacturer, float Productprice) {
        product_id = Productid;
        product_name = Productname;
        product_manufacturer = Productmanufacturer;
        product_price = Productprice;
    }

    virtual void output() = 0;

};

class smartwatch : public product {
protected:
    float dial_size;

public:
    smartwatch(int Productid, string Productname, string Productmanufacturer, float Productprice, float Dialsize) : product(Productid, Productname, Productmanufacturer, Productprice) {
        dial_size = Dialsize;
    }

    void output() {

        cout << product_id << " : " << product_name << " : " << product_manufacturer << " : " << product_price << " : " << dial_size << endl;

    }

};

class bedsheet : public product {
protected:
    float width, height;

public:
    bedsheet(int Productid, string Productname, string Productmanufacturer, float Productprice, float Width, float Height) : product(Productid, Productname, Productmanufacturer, Productprice) {
        width = Width;
        height = Height;
    }

    void output() {

        cout << product_id << " : " << product_name << " : " << product_manufacturer << " : " << product_price << " : " << width << " : " << height << endl;

    }

};

int main() {

    int Productid, option;
    string Productname, Productmanufacturer;
    float Productprice, Dialsize, Width, Height;

    do {
        cout << " Main Menu " << endl;

        cout << setw(5) << left << "[1]" << "Smart watch." << endl;
        cout << setw(5) << left << "[2]" << "Bed sheet." << endl;

        cout << setw(25) << "Choose the option" << ": ";
        cin >> option;
        cout << option;

        if (option == 1 || option == 2) {
            break;
        }
        else {

            cout << setw(51) << "" << "Enter proper input." << endl;

        }

    } while (true);


    switch(option) {
        case 1: {

            cout << " Enter Smartwatch Data " << endl;

            cout << setw(35) << left << "Enter product I.D." << ": ";
            cin >> Productid;
            cout << setw(35) << left << "Enter product name" << ": ";
            cin >> Productname;
            cout << setw(35) << left << "Enter product manufacturer" << ": ";
            cin >> Productmanufacturer;
            cout << setw(35) << left << "Enter product price" << ": ";
            cin >> Productprice;
            cout << setw(35) << left << "Enter product dial size" << ": ";
            cin >> Dialsize;

            smartwatch *temp;

            temp = new smartwatch(Productid, Productname, Productmanufacturer, Productprice, Dialsize);

            temp -> output();

            delete temp;

            break;

        }
        case 2: {

            cout << " Enter Bedsheet Data " << endl;

            cout << setw(35) << left << "Enter product I.D." << ": ";
            cin >> Productid;
            cout << setw(35) << left << "Enter product name" << ": ";
            cin >> Productname;
            cout << setw(35) << left << "Enter product manufacturer" << ": ";
            cin >> Productmanufacturer;
            cout << setw(35) << left << "Enter product price" << ": ";
            cin >> Productprice;
            cout << setw(35) << left << "Enter product width" << ": ";
            cin >> Width;
            cout << setw(35) << left << "Enter product height" << ": ";
            cin >> Height;

            bedsheet *temp;

            temp = new bedsheet(Productid, Productname, Productmanufacturer, Productprice, Width, Height);

            temp -> output();

            delete temp;

            break;

        }
    }

    cout << "\n23CS043 Debdoot" << endl;
    return 0;
}