#include <iostream>
using namespace std;

class smartphone {
public:
    virtual void selfie() = 0;
    virtual void call() = 0;
};

class android: public smartphone{
public:
    void selfie() {
        cout << "Android Selfie\n";
    }
    void call() {
        cout << "Android Call\n";
    }
};

class iphone:public smartphone {
public:
    void selfie() {
        cout << "iPhone Selfie\n";
    }
    void call() {
        cout << "iPhone Call\n";
    }
};

int main () {

    smartphone* s1 = new android();
    s1->selfie();
    s1->call();
    smartphone* s2 = new iphone();
    s2->selfie();
    s2->call();

    return 0;
}