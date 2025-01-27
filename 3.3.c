#include <stdio.h>
#include <math.h>



void fahToCel(float temp){
    float cel = ((temp - 32)) * (5.0 / 9.0);
    printf("Temperature of %.2f Fahrenheit is %.2f Celcius\n", temp, cel);
}

void findArea(int width, int height){
    int area = width * height;
    printf("The area is %d with a width of %d and a height of %d\n", area, width, height);
}

void findRadius(int radius){
    float pi = 3.1415928;
    float area = pi * radius * radius;
    printf("The area of a circle with a radius of %d, is %.2f\n", radius, area);
}

void main(){
    fahToCel(90.0);
    findArea(20, 12);
    findRadius(3);
}


       
