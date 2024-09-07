#include <stdio.h>
#include <math.h>


#define PI 3.14159


double calculateDistance() {
    double x1;
    double x2;
    double y1;
    double y2;

    printf("Enter x1: ");
    scanf("%lf", &x1);

    printf("Enter x2: ");
    scanf("%lf", &x2);

    printf("Enter y1: ");
    scanf("%lf", &y1);

    printf("Enter y2: \n");
    scanf("%lf", &y2);

    printf("Point #1 entered: x1 = %g; y1 = %g\n", x1, y1);
    printf("Point #2 entered: x2 = %g; y2 = %g\n", x2, y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("The distance between the two points is %.3lf\n", distance);
    
    
    
    return distance;
}

double calculatePerimeter() {

    double distance = calculateDistance();

    double perimeter = (distance * PI);

    printf("The perimeter of the city encompassed by your request is %.3lf\n", perimeter);

    return 1.0;

}
 
double calculateArea() {

    double distance = calculateDistance();

    double area = pow((distance/2), 2) * PI;
    
    printf("The area of the city encompassed by your request is %.3lf\n", area);

    return 1.0;

}

double calculateWidth() {
    double distance = calculateDistance();

    printf("The width of the city encompassed by your request is %.3lf\n", distance);

    return 1.0;
}

double calculateHeight() {
    double distance = calculateDistance();

    printf("The height of the city encompassed by your request is %.3lf\n", distance);

    return 1.0;
}

int main(int argc, char **argv) {

    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}