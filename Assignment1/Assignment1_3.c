/*Write a program to accept an integer and determine whether it is even 
or odd*/

#include <stdio.h>
// int return type , main is function name, () is parameter
int main()
{
    int num; // Variable to store the number entered by the user

    printf("Enter a number: "); // enter a number
    scanf("%d", &num); // Accept input from user

    // Check whether the number is divisible by 2
    if (num % 2 == 0)
    {
        printf("The number is even"); // Display if number is even
    }
    else
    {
        printf("The number is odd"); // Display if number is odd
    }

    return 0; // return a integer value (0 means no error)
}