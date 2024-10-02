/*
Program Headers
1.To check the number of 1’s in the binary equivalent of a given number.
2.Revision : To get the power function, header file math.h is used. while loop to get the iteration w.r.t the value decrease and if loop to check the number of 1's in the Binary Number
*/
#include <stdio.h>
#include <math.h>
/*
Function Header
1.Main Function
*/
void main()
{
    int n, bin = 0, rem, count = 0, temp, tempcount = 0, m; // Local Variables
    printf("Enter a Number : ");
    scanf("%d", &n);
    m = n;        // To store the value of n to m
    while (n > 0) // To iterate the process still  n=0
    {
        rem = n % 2;                        // To get the remainder from n(i.e. 0 or 1).
        bin = bin + (rem * pow(10, count)); // To get binary number :- bin is added with remainder which is multiplied by the power of 10 and count. When count increases the value of power of 10 also increases.
        n = n / 2;                          // To decrease the value of n by 2.
        count = count + 1;                  // To increase the count by 1. During each  iteration the count also increases by 1.
    }
    temp = bin;      // Temporarily stored the value of bin(Final Binary Number) to temp.
    while (temp > 0) // To iterate the process still temp=0
    {
        if (temp % 10 == 1) // To check the 1 is present in the Binary number.
        {
            tempcount++;    // To count the number of 1's in the Binary number.
        }
        temp = temp / 10;   // To decrease the value of temp by 10.
    }
    printf("Binary Number of %d = %d \n", m, bin);
    printf("Number of 1's in binary of %d = %d", m, tempcount);
}