#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    printf("enter a velue of a :\n");
    scanf("%d", &a);

    printf("enter a velue of b :\n");
    scanf("%d", &b);

    printf("enter a velue of c :\n");
    scanf("%d", &c);

    printf("enter a velue of d :\n");
    scanf("%d", &d);

    //e=a+b+c-d;
    //printf("value of e is : %d\n",e);

    if (a < b && c < b && d < b)
    {
        printf("b greater then a,d and c");
    }
    else if (a > b && a > c && a > d)
    {
        printf("a greater then b,d and c");
    }
    else if (c > a && c > b && c > d)
    {
        printf("c greater then b,d and a");
    }

    else if (d > a && d > b && d > c)
    {
        printf("d greater then a,b and c");
    }


return 0;}
