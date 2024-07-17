#include <iostream>
#include <string>
#include <list>
using namespace std;

struct YoutubeChannel {
    string Name;
    int SubscribersCount;

    YoutubeChannel(string name, int subscriberscount) {
        Name = name;
        SubscribersCount = subscriberscount;
    }
    bool operator==(YoutubeChannel&channel) {
        return this->Name==channel.Name;
    }
};

ostream& operator<<(ostream& COUT, YoutubeChannel& ytchannel) {
    COUT << "Name: " << ytchannel.Name << endl;
    COUT << "Subscribers: " << ytchannel.SubscribersCount << endl;
    return COUT;
}

struct MyCollection {
    list<YoutubeChannel>myChannel;

    void operator+=(YoutubeChannel& Channel){
        this->myChannel.push_back(Channel);
    }
    void operator-=(YoutubeChannel& Channel){
        this->myChannel.remove(Channel);
    }
};

ostream& operator<<(ostream& COUT, MyCollection& myCollection) {
    for(YoutubeChannel Channel:myCollection.myChannel)
        COUT << Channel << endl;
    return COUT;
}

int main() {

    YoutubeChannel y1 = YoutubeChannel("The Messengers", 1000000000);
    YoutubeChannel y2 = YoutubeChannel("The Messengers of God", 2000000000);
    YoutubeChannel y3 = YoutubeChannel("The God of God", 1500000000);
//    cout << y1 << y2;
//    operator<<(cout, y3);
    MyCollection mycollection;
    mycollection += y1;
    mycollection += y2;
    cout << mycollection;

    return 0;
}