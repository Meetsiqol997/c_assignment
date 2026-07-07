/*Write a program to accept three integers and print the largest number 
among them*/
#include<stdio.h>
// int return type , main is function name, () is parameter
int main()
{
    int a, b, c; // Variables to store three numbers

    printf("Enter the numbers: "); // enter three numbers
    scanf("%d %d %d", &a, &b, &c); // Accept input from user

    // Check if a is greater than both b and c
    if(a > b && a > c)
    {
        printf("The larger num: %d", a); // Display a as largest
    }
    // Check if b is greater than both a and c
    else if(b > a && b > c)
    {
        printf("The larger num: %d", b); // Display b as largest
    }
    // upper 2 conditions are false then c is largest
    else
    {
        printf("The larger num: %d", c); // Display c as largest
    }
    return 0; // return a integer value (0 means no error)
}