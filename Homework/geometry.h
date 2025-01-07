#ifndef GEOMETRY_H
#define GEOMETRY_H

#include <cmath>

// Function to calculate the volume of a sphere
double VolSphere(double diameter) {
    double radius = diameter / 2.0;
    return (4.0 / 3.0) * M_PI * pow(radius, 3);
}

// Function to calculate the surface area of a sphere
double AreaSphere(double diameter) {
    double radius = diameter / 2.0;
    return 4.0 * M_PI * pow(radius, 2);
}

// Function to calculate the volume of a cone
double VolCone(double height, double diameter) {
    double radius = diameter / 2.0;
    return (1.0 / 3.0) * M_PI * pow(radius, 2) * height;
}

// Function to calculate the surface area of a cone
double AreaCone(double height, double diameter) {
    double radius = diameter / 2.0;
    double slantHeight = sqrt(pow(radius, 2) + pow(height, 2));
    return M_PI * radius * (radius + slantHeight);
}

// Function to calculate the volume of a cylinder
double VolCylinder(double height, double diameter) {
    double radius = diameter / 2.0;
    return M_PI * pow(radius, 2) * height;
}

// Function to calculate the surface area of a cylinder
double AreaCylinder(double height, double diameter) {
    double radius = diameter / 2.0;
    return (2.0 * M_PI * pow(radius, 2)) + (2.0 * M_PI * radius * height);
}

// Function to calculate the volume of a torus (donut)
double VolDonut(double R, double r) {
    return 2.0 * M_PI * M_PI * R * r * r;
}

#endif
