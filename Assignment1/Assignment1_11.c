 /*Accepts marks of six subjects and calculate the total percentage of the 
given marks*/

#include<stdio.h>
// int return type , main is function name, () is parameter
int main()
{
    int s1, s2, s3, s4, s5, s6; // Variables to store marks of 6 subjects

    printf("Enter the marks of 6 subjects: "); // Ask user to enter marks
    scanf("%d %d %d %d %d %d", &s1, &s2, &s3, &s4, &s5, &s6); // Accept marks

    int total = 600; // Total marks 
    int sum = s1 + s2 + s3 + s4 + s5 + s6; // Calculate obtained marks

    float percentage = (sum * 100.0) / total; // Calculate percentage
    printf("Percentage: %f", percentage); // Display percentage

    return 0; // return a integer value (0 means no error)
}