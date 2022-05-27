/*Program to print Division questions with features- User can select how many
questions he want and how many digits of dividends in it*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c, d = 2;
    printf("\tProgram to create Division Questions\n\n");
    printf("Enter the number of division problems you need : ");
    scanf("%d", &a);
    printf("and how many digit dividends in it :");
    scanf("%d", &b);
    for (int i = 1; i <= a; i++)
    {
        if (b == 1)
        {
            c = rand() % 9;
            printf("\n%d. %d/%d = ? ", i, c, d);
        }
        else if (b == 2)
        {
            c = rand() % 80;

            if (c > 10)
            {
                printf("\n%d. %d/%d = ?", i, c, d);
            }
        }
        else if (b == 3)
        {
            c = rand() % 800;

            if (c > 99)
            {
                printf("\n%d. %d/%d = ?", i, c, d);
            }
        }

        else
        {
            printf("Enter number less than 4");
        }
    }
    return 0;
}
