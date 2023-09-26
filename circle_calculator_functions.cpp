
/**
* Filename: circle_calculator_functions.cpp
* Written by: Adam Frisch
* Written on: 12/1/22
* Purpose: C++ program to calculate
* the diameter, area, and circumference of a circle
*/

#include <iostream>
// Include for printf
#include <cstdio>
// Include for thousands separator
#include <locale.h>
// TODO: Create function headers

void programTitle();
double setRadius();
double getDiameter(double radius);
double getArea(double radius);
double getCircumference(double radius);
void displayResults(double radius, double diameter, double area, double circumference);

// 
const double PI{3.14159265358979323846};

int main()
{
    setlocale(LC_ALL, "");
    
    // TODO: Create variables and call all functions from main    
    double radius;
    double diameter;
    double area;
    double circumference;
    char again;

    programTitle();
    while (true)
    { 
        radius = setRadius();
        diameter = getDiameter(radius);
        area = getArea(radius);
        circumference = getCircumference(radius);
        displayResults(radius, diameter, area, circumference);
        std::cout << "\nDo you wish to go again? (y/n): ";
        std::cin >> again;
        if (again == 'y')
        {
            continue;
        }
        else if (again == 'n')
        {
            break; 
        }
    }
    
    return 0;
}

// TODO: programTitle() Print creative program title
void programTitle()
{
    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "|        Circe's Circle Calculator in C++          |" << std::endl;
    std::cout << "| Calculate the area and circumference of a Circle |" << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
}

// TODO: setRadius() Get user input for radius as float
double setRadius(){
    double radius;
    std::cout << "\nEnter radius: ";
    std::cin >> radius;
    return radius;
}
// TODO: getDiameter() Calculate diameter of circle
// formula: d = 2r, where r = radius
double getDiameter(double radius)
{
    double diameter;
    diameter = 2 * radius;
    return diameter;
}
// TODO: getArea() Calculate area of circle
// formula: a = πr2, where r = radius

double getArea(double radius)
{
    double area;
    area = PI * (radius * radius);
    return area;
}
// TODO: Calculate circumference of circle
// TODO: getCircumference() formula: c = 2πr, where r = radius
double getCircumference(double radius)
{
    double circumference;
    circumference = 2 * PI * radius;
    return circumference;
}
// TODO: displayResults()
void displayResults(double radius, double diameter, double area, double circumference)
{
    // Use printf to format numbers %,.2f\n
    printf("Diameter:      %'.2f", diameter);
    printf("\nArea:          %'.2f", area);
    printf("\nCircumference: %'.2f", circumference);

}

