#include <iostream>
#include <list>
using namespace std;

class youtubechannel {
public:
    string name;
    string ownername;
    int subscribers;
    list<string> videos;

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
};



int main() {

    youtubechannel y("The Messengers", "Debdoot Manna");
    y.videos.push_back("Hello");
    y.videos.push_back("World");
    youtubechannel z("Mrignayni Dance Academy", "Kasturi Manna");
    //z.videos.push_back("How are you?");

    y.output();
    z.output();

    /*y.name="The Messengers";
    y.ownername="Debdoot Manna";
    y.subscribers= 2000000;
    y.videos= {"Song 1", "Song 2", "Song 3"};*/

    /*cout << "Name: " << y.name << endl;
    cout << "Owner: " << y.ownername << endl;
    cout << "Subscribers: " << y.subscribers << endl;
    cout << "Videos: " << endl;
    for (string songs : y.videos) {
        cout << songs << endl;
    }*/

    /*z.name="Mrignayni Dance Academy";
    z.ownername="Kasturi Manna";
    z.subscribers= 1000000;
    z.videos= {"Dance 1", "Dance 2", "Dance 3"};*/

    /*cout << "Name: " << z.name << endl;
    cout << "Owner: " << z.ownername << endl;
    cout << "Subscribers: " << z.subscribers << endl;
    cout << "Videos: " << endl;
    for (string songs : z.videos) {
        cout << songs << endl;
    }*/

    return 0;
}
