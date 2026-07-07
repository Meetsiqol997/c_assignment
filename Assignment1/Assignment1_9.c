/*Write a program to accept an integer and calculate the sum of its digits. 
For example, input 123 should give 1 + 2 + 3 = 6 */

#include<stdio.h>
// int return type , main is function name, () is parameter
int main()
{
    int num; // Variable to store the entered number

    printf("Enter a number: "); // enter a number
    scanf("%d", &num); // Accept input from user

    int sum = 0; // Variable to store sum of digits

    // Loop until the number becomes 0
    while(num > 0)
    {
        int digit = num % 10; //  last digit or remainder 
        sum += digit; // Add digit to sum
        num /= 10; // Remove last digit from original number
    }

    printf("Sum of digit: %d", sum); // Display sum of digits

    return 0; // return a integer value (0 means no error)
}