#include <iostream>
#include <cmath> // For mathematical functions

class Circle {
private:
    float Radius;

public:
    static int CircleCount; // Total number of circle objects created

    Circle() : Radius(1.0) {
        CircleCount++; // Increment the count
    }

    Circle(float r) : Radius(r) {
        CircleCount++; // Increment the count
    }

    void setRadius(float r) {
        Radius = r;
    }

    float getRadius() {
        return Radius;
    }

    float getArea() {
        return 3.14 * Radius * Radius; // Area = π * r^2
    }
};

int Circle::CircleCount = 0; // Initialize the static member

int main() {
    // Example usage:
    Circle circle1; // Default constructor (radius = 1)
    Circle circle2(5.0); // Parameterized constructor (radius = 5)

    // Copy radius from circle2 to circle1
    circle1.setRadius(circle2.getRadius());

    // Display area of both circles
    std::cout << "Area of circle1: " << circle1.getArea() << std::endl;
    std::cout << "Area of circle2: " << circle2.getArea() << std::endl;

    // Display total number of circle objects created
    std::cout << "Total circle objects created: " << Circle::CircleCount << std::endl;

    // When a circle object is deleted, decrement the count
    // (Not explicitly shown here, but you can handle it in your program)

    return 0;
}
