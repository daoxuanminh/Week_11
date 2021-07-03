#include<stdio.h>

void rotate(int *a, int *b, int *c){
    int tmp = *a;
    *a = *b;
    *b= *c;
    *c = tmp;
}
int main(){
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    rotate(&a,&b,&c);
    printf("After rotates: %d %d %d", a,b,c);
    return 0;
}