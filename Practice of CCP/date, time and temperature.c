#include <stdio.h>

// Define a structure to store date, time and temperature
struct temp_record {
  int day;
  int month;
  int year;
  int hour;
  int minute;
  float temp;
};

// Define a function to display the list of temperatures
void display_list(struct temp_record list[], int size) {
  printf("Date\t\tTime\t\tTemperature\n");
  printf("----------------------------------------\n");
  for (int i = 0; i < size; i++) {
    printf("%02d/%02d/%04d\t%02d:%02d\t\t%.2f\n", list[i].day, list[i].month, list[i].year, list[i].hour, list[i].minute, list[i].temp);
  }
  printf("----------------------------------------\n");
}

// Main function
int main() {
  // Declare an array of structures to store the temperature records
  // You can change the size of the array as per your requirement
  struct temp_record list[24];

  // Initialize the array with some sample data
  // You can input the data from the user or from a file
  for (int i = 0; i < 24; i++) {
    list[i].day = 7;
    list[i].month = 11;
    list[i].year = 2023;
    list[i].hour = i;
    list[i].minute = 0;
    list[i].temp = 25 + i * 0.5; // Some random temperature values
  }

  // Display the list of temperatures
  display_list(list, 24);

  return 0;
}
