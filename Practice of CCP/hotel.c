#include <stdio.h>
#include <string.h>

struct Hotel {
    char name[100];
    int grade;
    char address[100];
    double room_charge;
    int num_rooms;
};

void print_hotels_by_grade(struct Hotel hotels[], int num_hotels, int grade) {
    struct Hotel temp;
    for (int i = 0; i < num_hotels; i++) {
        for (int j = i + 1; j < num_hotels; j++) {
            if (hotels[i].room_charge > hotels[j].room_charge) {
                temp = hotels[i];
                hotels[i] = hotels[j];
                hotels[j] = temp;
            }
        }
    }
    for (int i = 0; i < num_hotels; i++) {
        if (hotels[i].grade == grade) {
            printf("%s %d %s %lf %d\n", hotels[i].name, hotels[i].grade,
                   hotels[i].address, hotels[i].room_charge, hotels[i].num_rooms);
        }
    }
}

void print_hotels_by_charge(struct Hotel hotels[], int num_hotels, double max_charge) {
    struct Hotel temp;
    for (int i = 0; i < num_hotels; i++) {
        for (int j = i + 1; j < num_hotels; j++) {
            if (hotels[i].room_charge > hotels[j].room_charge) {
                temp = hotels[i];
                hotels[i] = hotels[j];
                hotels[j] = temp;
            }
        }
    }
    for (int i = 0; i < num_hotels; i++) {
        if (hotels[i].room_charge <= max_charge) {
            printf("%s %d %s %lf %d\n", hotels[i].name, hotels[i].grade,
                   hotels[i].address, hotels[i].room_charge, hotels[i].num_rooms);
        }
    }
}

int main() {
    struct Hotel hotels[3] = {
        {"Hotel A", 3, "Address A", 50.0, 10},
        {"Hotel B", 4, "Address B", 80.0, 20},
        {"Hotel C", 3, "Address C", 70.0, 15},
    };
    int num_hotels = 3;
    int grade = 3;
    double max_charge = 75.0;
    print_hotels_by_grade(hotels, num_hotels, grade);
    printf("\n");
    print_hotels_by_charge(hotels, num_hotels, max_charge);
    return 0;
}
