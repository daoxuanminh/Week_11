#include<stdio.h>

int main(){
    float a,b,c;
    printf("Enter three numbers: ");
    scanf("%llf%llf%llf", &a,&b,&c);
    float *p;
    p = &a;
    printf("%d\n", p);
    *p+=100;
     printf("%d\n", p);
     p = &b;
    printf("%d\n", p);
    *p+=100;
     printf("%d\n", p);
     p = &c;
    printf("%d\n", p);
    *p+=100;
     printf("%d\n", p);
    }