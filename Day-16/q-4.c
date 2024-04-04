// 4. Write a C program to find the largest number among three numbers entered by the user.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter Value :");
    scanf("%d",&a);
    printf("Enter Value :");
    scanf("%d",&b);
    printf("Enter Value :");
    scanf("%d",&c);

    if (a>b&&a>c)
    {
        printf("%d is max",a);
    }else{
        if (b>c&&b>a)
        {
            printf("%d is max",b);
        }else{
            printf("%d is max",c);
        }
        
    }
    
}
