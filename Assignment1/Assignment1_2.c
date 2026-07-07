/*Write a program to accept the length and breadth as input and calculate 
the area of the rectangle*/

#include<stdio.h>
// int return type , main is function name, () is parameter
int main()
{
    int length, breadth, area; // Variables to store length, breadth and area

    printf("Enter the length: "); // enter length
    scanf("%d", &length); // Accept length from user

    printf("Enter the breadth: "); // enter breadth
    scanf("%d", &breadth); // Accept breadth from user

    area = length * breadth; // Calculate area of rectangle
    printf("Area of rectangle: %d", area); // Display calculated area

    return 0; // return a integer value (0 means no error)
}