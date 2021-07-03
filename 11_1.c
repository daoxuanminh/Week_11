#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a,&b,&c);
    int *p ;
    p = &a;
    printf("%d\n", p);
    p = &b;
    printf("%d\n", p);
    p = &c;
    printf("%d\n", p);
}