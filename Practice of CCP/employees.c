#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to store employee details
struct employee {
  char name[50];
  int id;
  float salary;
  struct employee *next;
};

// Create a global pointer to the head of the list
struct employee *head = NULL;

// A function to create a new employee node and return its address
struct employee *create_employee(char *name, int id, float salary) {
  struct employee *new_employee = (struct employee *)malloc(sizeof(struct employee));
  if (new_employee == NULL) {
    printf("Memory allocation failed\n");
    exit(1);
  }
  strcpy(new_employee->name, name);
  new_employee->id = id;
  new_employee->salary = salary;
  new_employee->next = NULL;
  return new_employee;
}

// A function to insert a new employee node at the end of the list
void insert_employee(char *name, int id, float salary) {
  struct employee *new_employee = create_employee(name, id, salary);
  if (head == NULL) {
    // The list is empty, make the new node as the head
    head = new_employee;
  } else {
    // The list is not empty, find the last node and link the new node
    struct employee *current = head;
    while (current->next != NULL) {
      current = current->next;
    }
    current->next = new_employee;
  }
}

// A function to print the list of employees
void print_employees() {
  struct employee *current = head;
  printf("List of employees:\n");
  printf("Name\tID\tSalary\n");
  while (current != NULL) {
    printf("%s\t%d\t%.2f\n", current->name, current->id, current->salary);
    current = current->next;
  }
}

// A function to free the memory allocated for the list
void free_employees() {
  struct employee *current = head;
  struct employee *temp;
  while (current != NULL) {
    temp = current;
    current = current->next;
    free(temp);
  }
  head = NULL;
}

// A main function to test the program
int main() {
  // Insert some employees
  insert_employee("Alice", 101, 50000.00);
  insert_employee("Bob", 102, 60000.00);
  insert_employee("Charlie", 103, 70000.00);

  // Print the list of employees
  print_employees();

  // Free the memory
  free_employees();

  return 0;
}
