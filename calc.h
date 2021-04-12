#ifndef CALCULATOR_H
#define CALCULATOR_H
/*BEGINNING*/
#include <stdio.h>
/*DEFINITION*/
#define PI 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196442881097566593344612847564823378678316527120190914564856692346034861045432664821339360726024914127372458700660631558817488152092096282925409171536436789259036001133053054882046652138414695194151160943305727036575959195309218611738193261179310511854807446237996274956735188575272489122793818301194912
#define KPM 1.609344 
/*FUNCTIONS*/
/*SIMPLE ARITHMETICS*/
float sumoftwo(float num1, float num2)
{
    num1 += num2;
    return num1;  
}
float differenceoftwo(float num1, float num2)
{
    num1 -= num2;
    return num1;
}
float productoftwo(float num1, float num2)
{
    num1 *= num2;
    return num1;
}
float divisionoftwo(float num1, float num2)
{
    num1 /= num2;
    return num1;
}
void factorial(float number)
{
    int i;
    float result=1;
    for(i=1;i<=number;i++)
    {
        result*=i;
        printf("%d*",i);
        if(i==number)
        {
            printf("%d.\t",i);
        }
    }
    printf("\n%f",result);
}
/*ROOTS AND POWERS*/
float square(float num)
{
    num *= num;
    return num;
}
float squareroot(float num)
{
    float i;
    for (i = 0.01; i*i < num; i += 0.01);
    return i;
}
float powerofany(float num,int power)
{
    int i;
    float sum=1;
    for(i=0;i<power;i++)
    {
        sum*=num;
    }
    return sum;
}
float powerofany(float num,int power);
float rootofany(float num,float root)
{
    float ii;
    for(ii=0.01;powerofany(ii,root)<num;ii+=0.01);
    ii+=00.01;
    return ii;
}
/*CIRCLE*/
float cofcirclewithr(float r)
{
    float area;
    area= 2*PI*r;
    return area; 
}
float cofcirclewithd(float d)
{
    float area;
    area =PI*d;
    return area; 
}
float areaofcircle(float radius)
{
    float   area;
    
    area = PI*(radius*radius);
    return area;
}
float arclenght(float radius,float angle)
{
  float result;
  
  result  = (angle/360)*2*PI*radius; 
  printf("%f", result);
  return result;
}

/*SEQUENCES*/
void arithmeticsequencegenerator(float firstterm, int termcount,float commondifference)
{
    int i =0;
    printf("%f,", firstterm);
    while(i<termcount-1)
    {
        firstterm+=commondifference;
        printf("%f,", firstterm);
        if(i == termcount)
        {
            printf("%f.",firstterm);
        }
        i++;
    }    
}
void geometricsequencegenerator(float firstterm, int termcount,float initialdifference, float changeindifference )
{
float difference=0,result= firstterm;
    int i = 0;

    for (; i < termcount; i++)
    {
       if(i==0)
       {
           printf("%f,", result);
        } 
        else if (i==1)
        {
            result+=initialdifference;
            printf("%f,", result);
        }
        else if (i<termcount-1&&i>=1)
        {
            result=firstterm+initialdifference;
            difference+=(i)*changeindifference;
            result+=difference;
            printf("%f,", result);
         }     
     }
}
void valueofn(float a ,float d, int n)
{
   float result; 
   result = a+(n-1)*d;
   printf("value of term %d is %.2f", n,result);
}
/*Conversion*/
float C_to_F(float celsius)
{
    float fahrenheit;
    fahrenheit=(1.8*celsius)+32;
    return fahrenheit; 
}
float F_to_C(float fahrenheit)
{
   float celsius;
   celsius=(fahrenheit-32)/1.8;
   return celsius;  
}
float Mile_to_KM(float mile)
{
    float KM;
    KM=mile/KPM;
    return KM;
}
float KM_to_Mile(float KM)
{
    float mile;
    mile=KM*KPM;
    return mile;
}
/*END*/
#endif