#include <iostream>
using namespace std;


inline float areaSquare(float side) {
    return side * side;
}

inline float areaRectangle(float length, float breadth) {
    return length * breadth;
}

inline float areaCircle(float r) {
    return 3.14159 * r * r;
}

int main() {
    float side, length, breadth, radius;

    cout << "Enter side of square: ";
    cin >> side;
    cout << "Area of square = " << areaSquare(side) << endl;

    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;
    cout << "Area of rectangle = " << areaRectangle(length, breadth) << endl;

    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of circle = " << areaCircle(radius) << endl;


}
