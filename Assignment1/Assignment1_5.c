/*Write a program to calculate Simple Interest*/
#include<stdio.h>
// int return type , main is function name, () is parameter
int main()
{
    float p, r, t, si; // Variables for principal, rate, time and simple interest

    printf("Amount: "); // enter principal amount
    scanf("%f", &p); // Accept principal amount

    printf("Rate: "); // enter rate of interest
    scanf("%f", &r); // Accept rate

    printf("Time: "); // enter time period
    scanf("%f", &t); // Accept time

    // Calculate simple interest 
    si = (p * r * t) / 100;

    printf("Simple Interest: %f", si); // Display calculated simple interest

    return 0; // return a integer value (0 means no error)
}