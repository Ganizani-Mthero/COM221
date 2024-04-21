#include <iostream>
#include <cmath>
using namespace std;

//calculate the area of a triangle
float calculateTriangleArea(float base, float height) {
    return 0.5 * base * height;
}

//calculate the area of a rectangle
float calculateRectangleArea(float length, float width) {
    return length * width;
}

//  calculate the area of a square
float calculateSquareArea(float side) {
    return side * side;
}

int main() {
    int choice;
    float area = 0.0;

    do {
        // Display menu and prompt user for choice
        cout << "Please select the area of the shape to calculate." << endl;
        cout << "1. Square" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Triangle" << endl;
        cout << "4. Quit the program" << endl;
        cout << "\nEnter selection:\n";

        cin >> choice;

        switch (choice) {
            case 3: // Triangle
                float base, height;
                cout << "Enter the base length of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                area = calculateTriangleArea(base, height); 
                cout << "The area of the triangle is: " << area << "\n" << endl;
                break;
            case 2: // Rectangle
                float length, width;
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                area = calculateRectangleArea(length, width);
                cout << "The area of the rectangle is: " << area << "\n" << endl;
                break;
            case 1: // Square
                float side;
                cout << "Enter the side length of the square: ";
                cin >> side;
                area = calculateSquareArea(side);
                cout << "The area of the square is: " << area << "\n" << endl;
                break;
            case 4: // Quit
                cout << "Exiting the program.\n" << endl;
                break;
            default:
                cout << "Your input was: " << choice << " which is an invalid input \nPlease enter a valid input!!!\n" << endl;
        }
    } while (choice != 4);

    return 0;
}
