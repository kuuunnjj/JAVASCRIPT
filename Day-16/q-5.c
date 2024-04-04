// 5. Write a C program to calculate the factorial of a number entered by the user.
#include<stdio.h>
int main(){
    int a,fac=1;
    printf("Enter value :");
    scanf("%d",&a);
    for (int i = 1; i <= a; i++)
    {
        fac*=i;
    }
    printf("Factorial is %d",fac);
    
}