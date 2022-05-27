/*Program to print multiplication questions with features- User can select how many
questions he want and how many digits of numbers in it*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,num,a,b,c;
    printf ("How many multiplication questions you want?: ");
    scanf("%d",&b);
    printf("and How many digit numbers in it? :");
    scanf("%d",&c);
    //Only allows upto 4digit numbers so the default to set if loop below
    if (c>=5)
      {
        printf("Enter a choice less than 5");
      }
    for (i = 1; i <=b; i++)
    {
    //using switch to select how many digits operation to be done
    switch (c) 
    {
     case 1:
        //prints multiplication of 1 digit numbers
         num= rand() % 10; 
         a= rand()%10+1;
          { 
             printf ("\n%d.%d*%d = ?\n ",i,num, a);
          }    
        break;
     case 2:
         //prints multiplication of 2 digit numbers
         num= rand() % 80; 
         a= rand()% 90;
          { 
            if (num>10){if(a>10)
            {
               printf ("\n%d.%d*%d = ?\n ",i,num, a);
            }}
          }    
        break;
     case 3:
         //prints multiplication of 3 digit numbers
         num= rand() % 800; 
         a= rand()%900;
            { 
              if (num>99){if(a>99)
             {
              printf ("\n%d.%d*%d = ?\n ",i,num, a);
             }}
         }    
        break;
     case 4:
         //prints multiplication of 4 digit numbers
         num= rand() % 8000; 
         a= rand()%9000;
           { 
              if (num>999){if(a>999)
              {
                 printf ("\n%d.%d*%d = ?\n ",i,num, a);
              }}
           }    
        break;
    }
   }
   return 0;
 }
