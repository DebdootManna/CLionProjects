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
    int content;
public:
    youtubechannel(string n, string on) {
        name=n;
        ownername=on;
        subscribers = 0;
        content = 0;
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

    void analytics() {
        if(content < 5) {
            cout << name << " has really bad videos." << endl;
        }
        else {
            cout << name <<" has really good videos." << endl;
        }
    }
};

class cooking: public youtubechannel {
public:
    cooking(string n, string on): youtubechannel(n, on) {
    }

    void practice() {
        cout << ownername <<" practicing cooking and music :)" << endl;
        content++;
    }
};
class singing: public youtubechannel {
public:
    singing(string n, string on): youtubechannel(n, on) {
    }

    void practice() {
        cout << ownername <<" practicing singing :)" << endl;
        content++;
    }
};

int main() {

    cooking y("Debdoot's Kitchen", "Debdoot Manna");
    singing sy("The Messengers", "Debdoot Manna");

    y.practice();
    sy.practice();
    sy.practice();
    sy.practice();
    sy.practice();
    sy.practice();
    sy.practice();
    sy.practice();
    sy.practice();
    sy.practice();

    youtubechannel *yt1 = &y;
    youtubechannel *yt2 = &sy;

    yt1->analytics();
    yt2->analytics();

    return 0;
}
