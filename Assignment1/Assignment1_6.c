/*Write a program to accept a number and generate its multiplication table 
up to 10*/
#include<stdio.h>
// int return type , main is function name, () is parameter
int main(void)
{
    int num; // Variable to store the number 

    printf("Enter a num: "); //  enter a number
    scanf("%d", &num); // Accept input 

    // Loop to print table from 1 to 10
    for(int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i); // display multiplication Table
    }

    return 0; // return a integer value (0 means no error)
}