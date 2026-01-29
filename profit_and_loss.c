// write a program to check selling price and cost price also check how much seller made profit or loss,
// Program to check profit or loss and calculate the amount
#include <stdio.h>

int main()
{
    int cp, sp, amt;

    printf("Enter cost price:\n");
    scanf("%d", &cp);

    printf("Enter selling price:\n");
    scanf("%d", &sp);

    if (sp > cp)
    {
        amt = sp - cp;
        printf("Profit\n");
        printf(" seller made Profit amount = %d\n", amt);
    }
    else if (sp < cp)
    {
        amt = cp - sp;
        printf("Loss\n");
        printf("seller made Loss amount = %d\n", amt);
    }
    else
    {
        printf("seller made No profit and no loss\n");
    }

    return 0;
}
