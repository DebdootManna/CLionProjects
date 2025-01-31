#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

class library{
protected:
    long long unique_id;
    char type;
    string title;
    int stock;
    string DOI;

public:
    virtual void input() = 0;
    virtual void output() = 0;
};

class book : public library{
    long long isbn;

public:

    book() {}

    void input(){

        cout << " Add Book " << endl << endl;

        cout << setw(45) << left << "Enter the ID of the book" << ": ";
        cin >> unique_id;
        cout << setw(45) << left << "Enter the title of the book" << ": ";
        cin.ignore();
        getline(cin, title);
        cout << setw(45) << left << "Enter the ISBN number of the book" << ": ";
        cin >> isbn;
        do{

            cout << setw(45) << left << "Is the book in (E)copy or (h)ardbound" << ": ";
            cin >> type;

            if(type == 'H' || type == 'h'){
                cout << setw(45) << left << "Enter the books in stock" << ": ";
                cin >> stock;
                break;
            }
            else if(type == 'E' || type == 'e'){
                cout << setw(45) << left << "Enter the DOI of the book" << ": ";
                cin.ignore();
                getline(cin, DOI);
                break;
            }
            else{
                cout << "Enter the proper input." << endl;
            }

        }while(true);

    }

    void output(){

        if(type == 'H' || type == 'h') {
            cout << setw(10) << left << unique_id << setw(50) << left << title << setw(15) << left << isbn << stock << "copies" << endl;
        }
        else {
            cout << setw(10) << left << unique_id << setw(50) << left << title << setw(15) << left << isbn << DOI << endl;
        }

    }

};

class magazine : public library{
    long long issn;

public:

    magazine () {}

    void input(){
        cout << " Add Magazine " << endl << endl;

        cout << setw(45) << left << "Enter the ID of the magazine" << ": ";
        cin >> unique_id;
        cout << setw(45) << left << "Enter the title of the magazine" << ": ";
        cin.ignore();
        getline(cin, title);
        cout << setw(45) << left << "Enter the ISSN number of the magazine" << ": ";
        cin >> issn;
        do{

            cout << setw(45) << left << "Is the magazine in (E)copy or (h)ardbound" << ": ";
            cin >> type;

            if(type == 'H' || type == 'h'){
                cout << setw(45) << left << "Enter the magazines in stock" << ": ";
                cin >> stock;
                break;
            }
            else if(type == 'E' || type == 'e'){
                cout << setw(45) << left << "Enter the DOI of the magazine" << ": ";
                cin.ignore();
                getline(cin, DOI);
                break;
            }
            else{
                cout << "Enter the proper input." << endl;
            }

        }while(true);

    }

    void output(){

        if(type == 'H' || type == 'h') {
            cout << setw(10) << left << unique_id << setw(50) << left << title << setw(15) << left << issn << stock << "copies" << endl;
        }
        else {
            cout << setw(10) << left << unique_id << setw(50) << left << title << setw(15) << left << issn << DOI << endl;
        }

    }

};

int mainMenu(){
    int option;

    cout << " Main Menu " << endl;
    cout << "+" << setw(118) << right << "+" << endl;
    cout << setw(50) << left << "+" << "[1] Add book data." << setw(51) << right << "+" << endl;
    cout << setw(50) << left << "+" << "[2] Add magazine data." << setw(47) << right << "+" << endl;
    cout << setw(50) << left << "+" << "[3] List all books." << setw(50) << right << "+" << endl;
    cout << setw(50) << left << "+" << "[4] List all magazine." << setw(47) << right << "+" << endl;
    cout << setw(50) << left << "+" << "[5] Exit." << setw(60) << right << "+" << endl;
    cout << "+" << setw(118) << right << "+" << endl;

    cout << setw(30) << left << "Enter the option" << ": ";
    cin >> option;

    if(option >= 1 && option <= 5){
        return option;
    }
    else {
        cout << "Enter the proper input." << endl;

        mainMenu();
    }
}

int main(){

    system ("clear");

    vector <book> Book;

    vector <magazine> Magazine;

    char opt;

    int option;

    do {

        option = mainMenu();

        if(option == 5) {
            break;
        }

        switch (option) {
            case 1: {

                system("clear");

                book *temp;

                temp = new book();

                temp -> input();

                Book.push_back(*temp);

                delete temp;

                break;
            }

            case 2: {

                system("clear");

                magazine *temp;

                temp = new magazine();

                temp -> input();

                Magazine.push_back(*temp);

                delete temp;

                break;
            }

            case 3: {

                system("clear");

                cout << " List of Books " << endl << endl;

                cout << setw(10) << left << "I.D." << setw(50) << left << "Title" << setw(15) << left << "ISBN" << "No. of copies/DOI" << endl;

                for(book i : Book) {
                    i.output();
                }

                break;

            }

            case 4: {

                system("clear");

                cout << " List of Magazine " << endl << endl;

                cout << setw(10) << left << "I.D." << setw(50) << left << "Title" << setw(15) << left << "ISSN" << "No. of copies/DOI" << endl;

                for(magazine i : Magazine) {
                    i.output();
                }

                break;
            }
        }

        cout << setw(55) << left << "Enter (M) to goto main menu. Press any key to exit" << ": ";
        cin >> opt;

        if(opt == 'M' || opt == 'm') {
            system("clear");

            continue;
        }
        else {
            break;
        }

    } while (true);

    cout << "\n23CS043 Debdoot" << endl;
    return 0;
}