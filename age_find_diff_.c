#include<stdio.h>
int main()
{
    int ram,shyam,ajay,age;
    printf("enter the age of ram\n");
    scanf("%d",&ram);
    printf("enter the age of shyam\n");
    scanf("%d",&shyam);
    printf("enter the age of ajay\n");
    scanf("%d",&ajay);
    if(ram>shyam && ram>ajay)
    {
        printf("ram is elder than shyam and ajay\n");
    }
    else if (ram>shyam && ram>ajay)
    {
        printf("shyam is elder than ram and ajay\n");
    }
    else if(ram==shyam && ram==ajay)
    {
        printf("shyam and ajay are the same age\n");
    }
    else
    {
        printf("ajay is elder than ram and shyam\n");
    }
    age = ram-shyam;
    if(age>0)
    {
    printf("ram is %d year older than shyam\n",age);
    }
    else if(age<0)
    {
        printf("shyam is %d year older than ram\n",-age);
    }
    else
    {
        printf("ram and shyam are of the smae age\n");
    }
    age = shyam - ajay;
    if(age>0)
    {
        printf("shyam is %d year elder than ajay\n");
        
    }
    else if (age<0)
    {
        printf("ajay is %d year elder than shyam\n");
    }
    else
    {
        printf("shyam and ajay are the same age\n");
    }     
}