#include <stdio.h>

void cycle(int *x, int *y, int *z);

int main(void)
{
    int x, y, z, option;
    printf("Enter 3 numbers:\n");
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);
    printf("z = ");
    scanf("%d", &z);
    printf("\n");
    int *p = &x, *q = &y, *r = &z;

    printf("1. Print with labels the values of x, y, z, p, q, r, *p, *q, *r\n");
    printf("2. Rotate values of x, y, z. Print with labels the values of x, y, z, p, q, r, *p, *q, *r\n");
    printf("3. Rotate values of p, q, r. Print with labels the values of x, y, z, p, q, r, *p, *q, *r\n");
    printf("Enter your option: ");
    scanf("%d", &option);
    printf("\n");
    if (option == 1);
    else if (option == 2)
        cycle(&x, &y, &z);
    else if (option == 3)
        cycle(&p, &q, &r);
    else
    {
        printf("Invalid option\n");
        return 1;
    }

    printf("x = %d, y = %d, z = %d\n", x, y, z);
    printf("p = %p, q = %p, r = %p\n", p, q, r);
    printf("*p = %d, *q = %d, *r = %d\n", *p, *q, *r);

    return 0;
}

void cycle(int *x, int *y, int *z)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = *z;
    *z = tmp;
}