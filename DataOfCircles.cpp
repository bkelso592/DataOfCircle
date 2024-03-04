#include <iostream>
#include <cmath>

double calcDistance(double x1, double y1, double x2, double y2);
double calcRadius(double centerX, double centerY, double x, double y);
double calcCircumference(double radius);
double calcArea(double radius);

double calcDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double calcRadius(double centerX, double centerY, double x, double y) {
    return calcDistance(centerX, centerY, x, y);
}

double calcCircumference(double radius) {
    return 2 * 3.1416 * radius;
}

double calcArea(double radius) {
    return 3.1416 * pow(radius, 2);
}

int main() {
    double centerX, centerY, x, y;
    std::cout << "Enter the coordinates of the center of the circle (x y): ";
    std::cin >> centerX >> centerY;
    std::cout << "Enter the coordinates of a point on the circumference of the circle (x y): ";
    std::cin >> x >> y;

    double radius = calcRadius(centerX, centerY, x, y);
    double circumference = calcCircumference(radius);
    double area = calcArea(radius);

    std::cout << "Radius of the circle: " << radius << std::endl;
    std::cout << "Circumference of the circle: " << circumference << std::endl;
    std::cout << "Area of the circle: " << area << std::endl;

    return 0;
}