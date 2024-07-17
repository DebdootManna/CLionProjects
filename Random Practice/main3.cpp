#include <iostream>
#include <list>
using namespace std;

class youtubechannel {
private:
    string name;
    string ownername;
    int subscribers;
    list<string> videos;
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
        if (subscribers>0){
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



int main() {

    youtubechannel y("The Messengers", "Debdoot Manna");
    youtubechannel z("Mrignayni Dance Academy", "Kasturi Manna");
    y.forvideos("Hello");
    y.forvideos("World");
    z.forvideos("How are you?");

//    y.subscribe();
//    z.unsubscribe();

    y.output();
    z.output();

    return 0;
}
