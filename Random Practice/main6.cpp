#include <iostream>
using namespace std;

class instrument {

public:
    virtual void makesound () = 0;
//    {
//        cout << "Instrument Playing..." << endl;
//    }
};

class piano : public instrument {
    void makesound () {
        cout << "Piano Playing..." << endl;
    }
};

class guitar: public instrument {
    void makesound () {
        cout << "Guitar Playing..." << endl;
    }
};

int main() {

//    instrument i1;
//    i1.makesound();

    instrument* i1 = new piano;
//    i1->makesound();
    instrument* i2 = new guitar;
//    i2->makesound();

    instrument* Instruments[2] = {i1,i2};
    for (int i = 0; i < 2; i++) {
        Instruments[i]->makesound();
    }

    return 0;
}