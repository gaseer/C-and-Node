/*Program to print Division questions with features- User can select how many
questions he want and how many digits of numbers in it*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i, num, a, b, c;
    printf("\tProgram to create Division Questions\n\n");
    printf("Enter the number of division problems you need : ");
    scanf("%d", &b);
    printf("and how many digit Divisor and Dividends in it : ");
    scanf("%d", &c);
    // Only allows upto 4digit numbers so the default to set if user enter above 4 the below given loop will execute
    if (c >= 5)
    {
        printf("Enter a choice less than 5");
    }
    for (i = 1; i <= b; i++)
    {
        // using switch to select how many digits operation to be done, upto 4 digit
        switch (c)
        {
        case 1:
            num = rand() % 10;
            a = rand() % 10 + 1;
            {
                printf("\n%d. %d/%d = ? ", i, num, a);
            }
            break;
            
        case 2:
            num = rand() % 80;
            a = rand() % 90;
            {
                if (num > 10)
                {
                    if (a > 10)
                    {
                        printf("\n%d.%d/%d = ?", i, num, a);
                    }
                }
            }
            break;
            
        case 3:
            num = rand() % 800;
            a = rand() % 900 + 1;
            {
                if (num > 99)
                {
                    if (a > 99)
                    {
                        printf("\n%d. %d/%d = ?", i, num, a);
                    }
                }
            }
            break;
            
        case 4:
            num = rand() % 8000;
            a = rand() % 9000;
            {
                if (num > 999)
                {
                    if (a > 999)
                    {
                        printf("\n%d. %d/%d = ?", i, num, a);
                    }
                }
            }
            break;
        }
    }
    return 0;
}
