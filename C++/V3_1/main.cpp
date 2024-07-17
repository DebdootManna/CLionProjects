#include <iostream>
using namespace std;
class car{
public:
    string mn,ft,tr,a;
    float price,mil,tc;
    int sc;
    void input_credentials(){
        cout<<"Enter the model name ";
        cin>>mn;
        cout<<"Enter the fuel type ";
        cin>>ft;
        cout<<"Enter the price ";
        cin>>price;
        cout<<"Enter Mileage ";
        cin>>mil;
        cout<<"Enter the transmission type ";
        cin>>tr;
        cout<<"Enter the tank capacity ";
        cin>>tc;
        cout<<"Enter the seating capacity ";
        cin>>sc;
        cout<<"Airbags present ";
        cin>>a;
    }
    void display_data(){
        cout<<"Model : "<<mn;
        cout<<"\tFuel : "<<ft;
        cout<<"\tPrice (Lakhs) : Rs."<<price;
        cout<<"\tMileage(km/L) : "<<mil;
        cout<<"\tTransmission : "<<tr;
        cout<<"\tTank Capacity(Liters) : "<<tc;
        cout<<"\tSeating Capacity : "<<sc;
        cout<<"\tAirbags :  "<<a;
    }
};
int main(){
    const int maxcar=10;
    int n;
    car A[maxcar];
    cout<<"Enter no. of cars : ";
    cin>>n;
    if(n>maxcar){
        cout<<"You can only enter details upto 10 Cars";
        return 0;
    }
    for(int i=0;i<n;i++){
        cout<<"Enter the car details"<<endl;;
        A[i].input_credentials();
    }
    cout<<"\nWELCOME TO TATA MOTORS"<<endl;
    cout<<"GET THE CAR DETAILS AS PER YOUR PREFERENCE"<<endl;
    cout<<"(1) Model Name   (2) Fuel Type  (3) Price Range  (4) Exit"<<endl;;
    int ch;
    while(1){
        cout<<"\nEnter  your choice : ";
        cin>>ch;
        switch(ch){
            case 1: cout<<"Enter model name : ";
                char mnu[100];
                cin>>mnu;
                for(int j=0;j<n;j++){
                    if(A[j].mn==mnu){
                        A[j].display_data();
                        break;
                    }
                }
                break;

            case 2: cout<<"Enter fuel type : ";
                char ftu[20];
                cin>>ftu;
                for(int j=0;j<n;j++){
                    if(A[j].ft==ftu){
                        A[j].display_data();
                        cout<<"\n";
                    }
                }
                break;

            case 3: cout<<"Enter price range : ";
                float p;
                cin>>p;
                for(int j=0;j<n;j++){
                    if(A[j].price<=p){
                        A[j].display_data();
                        cout<<"\n";
                    }
                }
                break;

            case 4: exit(0);
        }
    }
    return 0;
}