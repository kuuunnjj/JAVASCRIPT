// 8. Write a C program to find the Fibonacci series up to a given number of terms.
#include<stdio.h>
int main(){
    int a,b=0,c=1;
    printf("Enter value :");
    scanf("%d",&a);

    for (int i = 0; i <= a; i++)
    {
        a = b+c;
        b=c;
        c=a;
        
    }
    printf("%d",a);
}