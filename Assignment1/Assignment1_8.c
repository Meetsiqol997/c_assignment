/*Write a program to accept a year and determine if it is a leap year. A year 
is a leap year if it is divisible by 4 but not divisible by 100, unless it is also 
divisible by 400*/

#include<stdio.h>
// int return type , main is function name, () is parameter
int main()
{
    int year; // Variable to store the entered year

    printf("Enter a year: "); //  enter a year
    scanf("%d", &year); // Accept input from user

    // Check leap year condition
    if(year % 4 == 0 && year % 100 != 0)
    {
        printf("Leap year"); // Display year is leap year
    }

    // Check if year is divisible by 400
    else if(year % 400 == 0)
    {
        printf("Leap year"); // Display year is leap year
    }

    // If above conditions are false
    else
    {
        printf("Not a leap year"); // Display year is not leap year
    }

    return 0; // return a integer value (0 means no error) 
}