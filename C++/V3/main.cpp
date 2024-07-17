#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Car {
    int number;
    string model;
    string fuelType;
    double price;
    double mileage;
    string transmission;
    double tankCapacity;
    int seating;
    string airbags;

    // Constructor for initializing Car objects
    Car(int number, const string& model, const string& fuelType, double price, double mileage,
        const string& transmission, double tankCapacity, int seating, const string& airbags)
            : number(number), model(model), fuelType(fuelType), price(price), mileage(mileage),
              transmission(transmission), tankCapacity(tankCapacity), seating(seating), airbags(airbags) {}

    // Function to display car details formatted for readability
    void displayDetails() const {
        cout << "Number: " << number << endl;
        cout << "Model: " << model << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Showroom Price: " << fixed << setprecision(2) << price << " INR" << endl;
        cout << "Mileage: " << mileage << " kmpl" << endl;
        cout << "Transmission: " << transmission << endl;
        cout << "Tank Capacity: " << tankCapacity << " liters" << endl;
        cout << "Seating: " << seating << endl;
        cout << "Airbags: " << airbags << endl;
    }
};

vector<Car> cars;

void addCar() {
    // ... (code from previous response)
}

void retrieveCarData() {
    int choice;
    string searchTerm;
    double minPrice, maxPrice;

    cout << "Choose retrieval option:" << endl;
    cout << "1. Model name" << endl;
    cout << "2. Fuel type" << endl;
    cout << "3. Price range" << endl;
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter model name: ";
            getline(cin, searchTerm);
            transform(searchTerm.begin(), searchTerm.end(), searchTerm.begin(), ::tolower); // Case-insensitive search
            for (const Car& car : cars) {
                if (transform(car.model.begin(), car.model.end(), car.model.begin(), ::tolower()) == searchTerm) {
                    car.displayDetails();
                    cout << endl;
                }
            }
            break;
        case 2:
            cout << "Enter fuel type: ";
            cin >> searchTerm;
            transform(searchTerm.begin(), searchTerm.end(), searchTerm.begin(), ::tolower);
            for (const Car& car : cars) {
                if (transform(car.fuelType.begin(), car.fuelType.end(), car.fuelType.begin(), ::tolower()) == searchTerm) {
                    car.displayDetails();
                    cout << endl;
                }
            }
            break;
        case 3:
            cout << "Enter minimum price: ";
            cin >> minPrice;
            cout << "Enter maximum price: ";
            cin >> maxPrice;
            if (minPrice > maxPrice) {
                cout << "Invalid price range!" << endl;
                break;
            }
            for (const Car& car : cars) {
                if (car.price >= minPrice && car.price <= maxPrice) {
                    car.displayDetails();
                    cout << endl;
                }
            }
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
}

int main() {
    while (true) {
        int choice;

        cout << "\nCar Management System" << endl;
        cout << "1. Add Car" << endl;
        cout << "2. Retrieve Car Data" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addCar();
                break;
            case 2:
                retrieveCarData();
                break;
            case 3:
                cout << "Exiting" << endl;
                break;
            default:
                cout << "Incorrect Choice!" << endl;
                break;
        }
    }
}