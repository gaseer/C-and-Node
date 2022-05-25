//Program to print 20 random multiplication questions with 2 digit numbers
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, num,a; 
    printf ("\tPrint 20 Multiplication Questions ! \n");
    for (i = 1; i <= 20; i++)
    {
        //rand() selects the random numbers
        num= rand() % 100 + 1; \
        a= rand()%50;
        //printing only 2digit numbers using nested if 
        if (num>10)
        { 
          if (a>10)
          printf ("\n%d.%d*%d = ?\n ",i,num, a);
         }    
     }
        return 0;
}
