/*
Write a program to print the pattern:

input :5

output:

*********
**** ****
***   ***
**     **
*       *
**     **
***   ***
**** ****
*********

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: "); scanf("%d",&n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j <= n; j++)
        {
            if(j == 1) printf("");
            else printf("*");
        }
        for(int j = 3; j <= 2*i - 1; j++)
        {
            printf(" ");
        }
         for(int j = i; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i = n - 1; i >= 1; i--)
    {
        for(int j = i; j <= n; j++)
        {
            if(j == 1) printf("");
            else printf("*");
        }
        for(int j = 3; j <= 2*i - 1; j++)
        {
            printf(" ");
        }
        for(int j = i; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}