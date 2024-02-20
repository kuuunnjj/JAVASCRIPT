// 10. Write a C program to convert temperature from Celsius to Fahrenheit or vice versa based on user input.
#include<stdio.h>
int main(){
    int c,f;
    printf("Enter Celcies :");
    scanf("%d",&c);

    f = (c * 9/5  )+32;
    printf("%d Degree",f);
}   