//Define structure circle and create two circles with their radius. Calculate their area and perimeter.	

#include <stdio.h>


struct circle {
    float radius;
};


float calculateArea(struct circle c) {
    return 3.14 * c.radius * c.radius;
}

float calculatePerimeter(struct circle c) {
    return 2 * 3.14 * c.radius;
}

int main() {

    struct circle c1 = {5.0}; 
    struct circle c2 = {7.0}; 

    float area1 = calculateArea(c1);
    float perimeter1 = calculatePerimeter(c1);

    float area2 = calculateArea(c2);
    float perimeter2 = calculatePerimeter(c2);


    printf("Circle 1:\n");
    printf("Radius: %.2f\n", c1.radius);
    printf("Area: %.2f\n", area1);
    printf("Perimeter: %.2f\n\n", perimeter1);

    printf("Circle 2:\n");
    printf("Radius: %.2f\n", c2.radius);
    printf("Area: %.2f\n", area2);
    printf("Perimeter: %.2f\n", perimeter2);

    return 0;
}
