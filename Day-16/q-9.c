// 9. Write a C program to calculate the area of a circle given its radius.
#include<stdio.h>
int main(){
    const float pi = 3.14;
    int r,a;
    printf("Enter value :");
    scanf("%d",&r);
    
    a = pi*(r*r);

    printf("%d",a);

}
