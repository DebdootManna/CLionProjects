#include <iostream>
#include <list>
using namespace std;

class youtubechannel {
public:
    string name;
    string ownername;
    int subscribers;
    list<string> videos;
};

int main() {

    youtubechannel y;
    y.name="The Messengers";
    y.ownername="Debdoot Manna";
    y.subscribers= 2000000;
    y.videos= {"Song 1", "Song 2", "Song 3"};

    cout << "Name: " << y.name << endl;
    cout << "Owner: " << y.ownername << endl;
    cout << "Subscribers: " << y.subscribers << endl;
    cout << "Videos: " << endl;
    for (string songs : y.videos) {
        cout << songs << endl;
    }

    return 0;
}
