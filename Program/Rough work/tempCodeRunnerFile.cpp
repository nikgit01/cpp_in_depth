#include<iostream>
using namespace std;

float calculateTriangleArea(float base, float height) {
    // Formula for the area of a triangle: (1/2) * base * height
    float area = 0.5 * base * height;
    return area;
}

int main() {
    float base, height;

    cout << "Enter the base of the triangle: ";
    cin >> base;

    cout << "Enter the height of the triangle: ";
    cin >> height;

    // Call the function to calculate the area
    float triangleArea = calculateTriangleArea(base, height);

    // Display the result
    cout << "The area of the triangle is: " << triangleArea << endl;

    return 0;
}

