/* Write a program to accept an integer and check if it reads the same 
backward as forward. For example, 121 is a palindrome*/

#include<stdio.h>
// int return type , main is function name, () is parameter
int main()
{
    int num, reverse = 0; // Variable to store number and reversed number

    printf("Enter a Number: "); // enter a number
    scanf("%d", &num); // Accept input from user

    int OriginalNum = num; // Store original number 

    // Loop until the number becomes 0
    while(num > 0)
    {
        int digit = num % 10; // last digit or remainder
        reverse = reverse * 10 + digit; // add digit to reverse num
        num /= 10; // Remove last digit from original number
    }

    // Compare original and reversed number
    if(reverse == OriginalNum)
    {
        printf("The number is a palindrome."); // Display palindrome
    }
    else
    {
        printf("The number is not a palindrome."); // Display not palindrome
    }
    return 0; // return a integer value (0 means no error)
}