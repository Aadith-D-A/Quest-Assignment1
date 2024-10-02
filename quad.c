/*
Program Headers
1.to evaluate the quadratic equation with coefficients captured from the user.
2.Revision : To get the squareroot function, header file math.h is used. if loop to check some conditions.
*/
#include <stdio.h>
#include <math.h>
/*
Function Header
1.Main Function
*/
void main()
{
    float a, b, c, sq, x, x1, x2, square;   //Local variables
    printf("Enter the Coefficients a,b,c for a quadratic equation a(x^2)+b(x^1)+c : \na: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);
    if (a == 0 && b == 0)   //If condition to check if the coefficients of a and b are 0 or not.
    {
        printf("Error in the Coefficients\n\n");
    }
    else if (a == 0)    //Else If condition to check if the coefficients of a is 0 or not, since the first if condition gone false.
    {
        x = ((-1) * c) / b; //To calculate the root value x :- Multiplied c with -1 and divided that value by b.
        printf("Root of the given Quadratic Expression of %.2f(x^2)+%.2f(x^1)+%.2f :\n", a, b, c);
        printf("X = %.2f\n", x);
    }
    else    //Else condition(since all other conditions are false)
    {
        sq = (b * b) - (4 * a * c); //To find the value of sq :- Multiplied b*b inorder to get the square of b and subtracted it with the multiplied value of 4,a and c.
        if (sq < 0) //If condition to check whether the value of sq is less than 0 or a negative value.
        {
            sq = sq * (-1); //Changed the value of sq to positive value.
            square = sqrt(sq);  //To find the square root of sq.
            x = ((-1) * b) / (2 * a);   //To calculate the root value x :- Multiplied b with -1 and divided it by the multiplied value of 2 and a.
            printf("Root of the given Quadratic Expression of %.2f(x^2)+%.2f(x^1)+%.2f :\n", a, b, c);
            printf("X1 = %.2f+%.2fi\n", x, square);
            printf("X2 = %.2f-%.2fi\n", x, square);
        }
        else
        {
            square = sqrt(sq);  //To find the square root of sq.
            x1 = (((-1) * b) + square) / (2 * a);   //To calculate the first root value x1 :- Multiplied b with -1 and added that value to square and divided it by the multiplied value of 2 and a.
            x2 = (((-1) * b) - square) / (2 * a);   //To calculate the first root value x1 :- Subtracted square from the multiplied value of b and -1 and divided it by the multiplied value of 2 and a.
            printf("Root of the given Quadratic Expression of %.2f(x^2)+%.2f(x^1)+%.2f :\n", a, b, c);
            printf("X1 = %.2f\n", x1);
            printf("X2 = %.2f\n", x2);
        }
    }
}