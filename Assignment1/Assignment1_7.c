/*Write a program to accept a number as input and print its reverse. For 
example, input 123 should output 321*/
#include<stdio.h>
// int return type , main is function name, () is parameter
int main()
{
    int num; // Variable to store the number

    printf("Num: "); // enter a number
    scanf("%d", &num); // Accept input from user

    int reverse = 0; // Variable to store reversed number

    // Loop until the number becomes 0
    while(num > 0)
    {
        int digit = num % 10; // last digit or remainder 
        reverse = reverse * 10 + digit; // Add digit to reversed number
        num /= 10; // Remove last digit from original number
    }

    printf("Reverse: %d", reverse); // Display reversed number

    return 0; // return a integer value (0 means no error)
}