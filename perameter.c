// find the wether the area of rectangle is greater than perimeter or not
#include <stdio.h>
int main()
{
    int a;
    printf("enter the 1st side triangle\n");
    scanf("%d", &a);
    int b;
    printf("enter the 2nd side of the triangle\n");
    scanf("%d", &b);
    int c;
    printf("enter the 3rd side of the triangle\n");
    scanf("%d", &c);
    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        printf("valied triangle\n");
    }
    else
    {
        printf("invalied triangle\n");
    }

    return 0;
}