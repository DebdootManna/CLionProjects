#include <iostream>
#include <list>
using namespace std;

class youtubechannel {
private:
    string name;
    int subscribers;
    list<string> videos;
protected:
    string ownername;
public:
    youtubechannel(string n, string on) {
        name=n;
        ownername=on;
        subscribers = 0;
    }

    void output() {
        cout << "Name: " << name << endl;
        cout << "Owner: " << ownername << endl;
        cout << "Subscribers: " << subscribers << endl;
        cout << "Videos: " << endl;
        for (string songs: videos) {
            cout << songs << endl;
        }
    }

    void subscribe () {
        if (subscribers>=0){
            subscribers++;
        }
    }

    void unsubscribe () {
        subscribers--;
    }

    void forvideos (string heading) {
        videos.push_back(heading);
    }
};

class cooking: public youtubechannel {
public:
    cooking(string n, string on): youtubechannel(n, on) {
    }

    void practice() {
        cout << ownername <<" practicing cooking and music :)" << endl;
    }
};

int main() {

    cooking y("Debdoot's Kitchen", "Debdoot Manna");
    cooking z("Meghdoot's Kitchen, "Meghdoot Manna");
//    y.forvideos("Hyderabadi Chicken Biryani");
//    y.forvideos("Mutton Korma");
//    y.subscribe();
//    y.subscribe();
//    y.unsubscribe();
    y.output();
    y.practice();
    z.practice();

    return 0;
}
