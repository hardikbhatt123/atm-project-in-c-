//write a program to number from the user and varible a and varible respectively and swap them without using 3rd variable.
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the number:\n");
    
    scanf("%d %d",&a,&b);    
    a = a + b;
    b = a - b; 
    a = a - b;
    printf("after swaping the number, here is your answer is :%d\n %d\n",a,b);
    return 0;
}

