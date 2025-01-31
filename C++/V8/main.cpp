#include <iostream>
#include <string>
#include <iomanip>
#define MAX_EMPLOYEE 9999

using namespace std;

class employee{
private:
    long long emp_contact;
    float emp_exp;
    string emp_name;
    string emp_qual;
    static float total_exp;
    int emp_num;

protected:
    void input(){
        // asking the new ID
        cout << "Enter the employee ID : " << endl;
        cin >> emp_num;

        cin.ignore();

        cout << "Enter the employee name : " << endl;
        getline(cin, emp_name);
        cout << "Enter the employee qualification : " << endl;
        getline(cin, emp_qual);
        cout << "Enter the employee exprience : " << endl;
        cin >> emp_exp;
        cout << "Enter the employee contact no. : " << endl;
        cin >> emp_contact;
        total_exp = total_exp + emp_exp;
    }

    void output(){
        // Printing the data.
        cout << left << setw(30) << "Employee name" << ": " << emp_name << endl;
        cout << left << setw(30) << "Qualification" << ": " << emp_qual << endl;
        cout << left << setw(30) << "Experience" << ": " << emp_exp << " years" << endl;
        cout << left << setw(30) << "Contact number" << ": " << emp_contact << endl;
    }

    int searchemp(){
        return emp_num;
    }

public:
    void avg(int total_emp){

        cout << "The average experience of the employees is : " << (total_exp) / total_emp << endl;

    }
};

class TeachingEmployee : public employee{
private:
    string Designation, Spec, Pay_scale;

public:
    void tempinput(){
        input();

        cin.ignore();

        cout << "Enter the employee designation :" << endl;
        getline(cin, Designation);
        cout << "Enter the employee specialization :" << endl;
        getline(cin, Spec);
        cout << "Enter the employee pay scale :" << endl;
        getline(cin, Pay_scale);
    }

    void tempoutput(){
        output();

        cout << left << setw(30) << "Designation" << ": " << Designation << endl;
        cout << left << setw(30) << "Specialization" << ": " << Spec << endl;
        cout << left << setw(30) << "Pay scale" << ": " << Pay_scale << "th pay" << endl;
    }

    int tempsearchemp(){
        return searchemp();
    }
};

class NonTeachingEmployee : public employee{
private:
    int salary;

public:
    void tempinput(){
        input();

        cout << "Enter employee salary :" << endl;
        cin >> salary;
    }

    void tempoutput(){
        output();

        cout << left << setw(30) << "Salary" << ": " << salary << endl;
    }

    int tempsearchemp(){
        return searchemp();
    }
};

float employee::total_exp = 0;

int main(){
    employee Average;
    TeachingEmployee T_emp[MAX_EMPLOYEE];
    NonTeachingEmployee NT_emp[MAX_EMPLOYEE];
    int count = 0, type, i = 0, j = 0;
    char flag;

    while (true){
        while (true){
            cout << "Choose the type of the employee :" << endl;
            cout << "[1] Teaching employee" << endl;
            cout << "[2] Non-Teaching employee" << endl;
            cout<< "Enter your option : ";
            cin >> type;

            if (type == 1 || type == 2){
                break;
            }

            cout << "Enter proper option." << endl;
            continue;
        }

        if (type == 1){
            T_emp[i].tempinput();

            for (int k = 0; k < count; k++){
                if (T_emp[k].tempsearchemp() == T_emp[i].tempsearchemp()){
                    cout << "--------------------------------------------------------------" << endl;

                    cout << "Entered employee ID already exist.Please enter a new employee ID" << endl;

                    cout << "--------------------------------------------------------------" << endl;

                    T_emp[i].tempinput();
                }
            }

            i++;
        }
        else{
            NT_emp[j].tempinput();

            for (int l = 0; l < count; l++){
                if (NT_emp[l].tempsearchemp() == NT_emp[j].tempsearchemp()){
                    cout << "--------------------------------------------------------------" << endl;

                    cout << "Entered employee ID already exist.Please enter a new employee ID" << endl;

                    cout << "--------------------------------------------------------------" << endl;

                    NT_emp[j].tempinput();
                }
            }

            j++;
        }

        cout << "Do you want add another employee if yes the press 'Y' else 'N' for no :" << endl;
        cin >> flag;

        if (flag == 'N' || flag == 'n'){
            count++;
            break;
        }

        count++;

        if (count == MAX_EMPLOYEE){
            cout << "Exiting." << endl;
            break;
        }
    }

    cout << "--------------------------------------------------------------" << endl;

    while (true){
        int num, k = 0, l = 0, flag2;

        cout << "Enter the ID of the employee : " << endl;
        cin >> num;

        while (true){
            cout << "Choose the type of the employee :" << endl;
            cout << "[1] Teaching employee" << endl;
            cout << "[2] Non-Teaching employee" << endl;
            cout<< "Enter your option : ";
            cin >> type;

            if (type == 1 || type == 2){
                break;
            }

            cout << "Enter proper option." << endl;
            continue;
        }

        if (type == 1){
            while (T_emp[k].tempsearchemp() != num)
            {
                k++;
                if (k == (MAX_EMPLOYEE))
                {
                    flag2 = 1;
                    break;
                }
            }

            if (flag2 == 1)
            {
                cout << "The entered employee ID doesn't exist in the data" << endl;

                cout << "Do you want to add the Employee ID?,If yes then enter '1' otherwise '0' : " << endl;
                cin >> flag2;

                if (flag2 == 1)
                {
                    T_emp[i].tempinput();
                }
                else
                {
                    cout << "Exiting." << endl;
                    break;
                }
            }
            else{
                T_emp[k].tempoutput();

                cout << "Do you want get information of another employee if yes the press 'Y' else 'N' for no :" << endl;
                cin >> flag;

                if (flag == 'N' || flag == 'n')
                {
                    cout << "Exiting." << endl;
                    break;
                }
            }
        }
        else{
            while (NT_emp[l].tempsearchemp() != num)
            {
                l++;
                if (l == (MAX_EMPLOYEE))
                {
                    flag2 = 1;
                    break;
                }
            }

            if (flag2 == 1)
            {

                cout << "The entered employee ID doesn't exist in the data" << endl;

                cout << "Do you want to add the Employee ID?,If yes then enter '1' otherwise '0' : " << endl;
                cin >> flag2;

                if (flag2 == 1)
                {
                    NT_emp[j].tempinput();
                }
                else
                {
                    cout << "Exiting." << endl;
                    break;
                }
            }
            else{
                NT_emp[l].tempoutput();

                cout << "Do you want get information of another employee if yes the press 'Y' else 'N' for no :" << endl;
                cin >> flag;

                if (flag == 'N' || flag == 'n')
                {
                    cout << "Exiting." << endl;
                    break;
                }
            }
        }
    }

    Average.avg(count);

    return 0;
}