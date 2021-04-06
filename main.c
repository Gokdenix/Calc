#include <stdio.h>
#include "scicalculator.h"

void operations(int operation, int operator);

void operations(int operation, int operator);
int main(void)
{
    int operation, operator;
    puts("Calculation subjects:\n1.Simple Arithmetics\t2.Roots and powers\t3.Circles\n4.Sequences\t5.Conversion\nEnter one");
    scanf("%d", &operation);
    switch (operation)
    {
    case 1:
        puts("Choose one:\n 1.Addition 2.Substraction 3.Multiplication 4.Division 5.factorial");
        scanf("%d",&operator);
        break;
    case 2:
        puts("1.Squareroot 2.Square");
        scanf("%d", &operator);
        break;
    case 3:
        puts("1. Circumference of circle using radius 2.Circumference of circle using diameter 3.Area of circle 4.Lenght of ar c of a sector");
        scanf("%d",&operator);
        break;
    case 4:
        puts("1.Arithmetic Sequence generator 2.Geometric Sequence Generator 3. Sequence Solver");
        scanf("%d", &operator);
        break;
    case 5:
        puts("1.Celsius to Fahrenheit 2.Fahrenheit to Celsius");
        scanf("%d", &operator);
        break;
    default:
       puts("Invalid input.");
   }
   
       
   operations(operation,operator);
    return 0;
}
void operations(int operation, int operator)
{
    float num, num1, num2, result;
    if (operation == 1)
    {
        if (operator== 1)
        {
            puts("Enter first number:");
            scanf("%f", &num1);
            puts("Enter second number:");
            scanf("%f", &num2);
            result = sumoftwo(num1, num2);
            printf("Result is %f", result);
        }
        else if (operator== 2)
        {
            puts("Enter first number:");
            scanf("%f", &num1);
            puts("Enter second number:");
            scanf("%f", &num2);
            ;
            result = differenceoftwo(num1, num2);
            printf("Result is %f", result);
        }
        else if (operator== 3)
        {
            puts("Enter first number:");
            scanf("%f", &num1);
            puts("Enter second number:");
            scanf("%f", &num2);
            result = productoftwo(num1, num2);
            printf("Result is %f", result);
        }
        else if (operator== 4)
        {
            puts("Enter first number:");
            scanf("%f", &num1);
            puts("Enter second number:");
            scanf("%f", &num2);
            result = divisionoftwo(num1, num2);
            printf("Result is %f", result);
        }
        else if (operator== 5)
        {
            puts("Enter number:");
            scanf("%f", &num);
            factorial(num);
        }
        else
        {
            puts("Invalid input");
        }
    }
    else if (operation == 2)
    {
        if (operator== 1)
        {
            puts("Enter a number:");
            scanf("%f", &num);
            result = squareroot(num);
            printf("%0.2f", result);
        }
        else if (operator== 2)
        {
            puts("Enter a number:");
            scanf("%f", &num);
            result = square(num);
            printf("%f", result);
        }

        else
        {
            puts("Invalid input");
        }
    }
    else if (operation == 3)
    {
        float diameter, radius, angle, result;
        if (operator== 1)
        {
            puts("Enter radius:");
            scanf("%f", &radius);
            result = cofcirclewithr(radius);
            printf("%.5f", result);
        }
        else if (operator== 2)
        {
            puts("Enter diameter:");
            scanf("%f", &diameter);
            result = cofcirclewithd(diameter);
            printf("%.5f", result);
        }
        else if (operator== 3)
        {
            puts("Enter radius:");
            scanf("%f", &radius);
            result = areaofcircle(radius);
            printf("%.5f", result);
        }
        else if (operator== 4)
        {
            puts("Enter Angle:");
            scanf("%f", &angle);
            puts("Enter radius");
            scanf("%f", &radius);
            arclenght(radius, angle);
        }
        else
        {
            puts("Invalid input");
        }
    }
    else if (operation == 4)
    {
        float firstterm, commondifference, initialdifference, changeindifference;
        int termcount;
        if (operator== 1)
        {
            puts("Enter first term:\n");
            scanf("%f", &firstterm);
            puts("Enter common difference between terms:\n");
            scanf("%f", &commondifference);
            puts("Enter term number:\n");
            scanf("%d", &termcount);
            arithmeticsequencegenerator(firstterm, termcount,commondifference);
        }
        else if (operator== 2)
        {
            puts("Enter first term of sequence:\n");
            scanf("%f", &firstterm);
            puts("Enter term count:\n");
            scanf("%d", &termcount);
            puts("Enter initial difference between term:\n");
            scanf("%f", &initialdifference);
            puts("Enter change in difference");
            scanf("%f", &changeindifference);
            geometricsequencegenerator(firstterm, termcount, initialdifference, changeindifference);
        }
        else if (operator== 3)
        {
            float a, d;
            int n;
            puts("Enter first term:\n");
            scanf("%f", &a);
            puts("Enter common difference between terms:\n");
            scanf("%f", &d);
            puts("Enter term number:\n");
            scanf("%d", &n);
            valueofn(a, d, n);
        }
        else
        {
            puts("Invalid input");
        }
    }
    else if (operation==5)
    {
        float fahrenheit, celsius,result;
        if(operator==1)
        {
            puts("Enter temperatur in celsius:");
            scanf("%f", &celsius);
            result=C_to_F(celsius);
            printf("Fahrenheit value of your celsius input is %f", result);            
         }
         else if (operator==2)
         {
              puts("Enter temperatur in fahrenheit:");
              scanf("%f", &fahrenheit);
              result=F_to_C(fahrenheit);
              printf("Celsius value of your fahrenheit input is %f", result);
         }
    }
}