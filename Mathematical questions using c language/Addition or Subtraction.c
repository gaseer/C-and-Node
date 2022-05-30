/*Program to print Addition or Substraction questions with features- User can select which kind of question he wants (addition or substraction)
How many number of questions and also how many digits in that question*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    char a;
    int b, c, d, e, i;
    printf("\tProgram to create Addition or Substraction Questions\n\n");
    printf("Do you want addition or substraction Ques? (press + or -) : ");
    scanf("%c", &a);
    printf("You pressed \"%c\" \nHow many Questions you want for \"%c\" operation?  :", a, a);
    scanf("%d", &b);
    printf("and how many digits in it? :");
    scanf("%d", &c);
    // There is only upto 3 digit choices
    if (c > 3)
    {
        printf("Enter a choice less than 4 ");
    }
    // Using this for to iterate how many questions the user wants
    for (i = 1; i <= b; i++)
    {
        // using switch to select how many digits operation to be done
        switch (c)
        {
        case 1:
            d = rand() % 10;
            e = rand() % 10 + 1;
            switch (a)
            {
            case '+':
                printf("\n%d. %d+%d = ? \n", i, d, e);
                break;

            case '-':
                printf("\n%d. %d-%d = ?\n", i, d, e);
                break;
            }
            break;

        case 2:
            d = rand() % 80 + 9;
            e = rand() % 90 + 9;
            {
                switch (a)
                {
                case '+':
                    printf("\n%d. %d+%d = ?\n", i, d, e);
                    break;
                case '-':
                    printf("\n%d. %d-%d = ?\n", i, d, e);
                    break;
                }
            }
            break;

        case 3:
            d = rand() % 700 + 100;
            e = rand() % 800 + 100;
            {
                switch (a)
                {
                case '+':
                    printf("\n%d. %d+%d = ?\n ", i, d, e);
                    break;
                case '-':
                    printf("\n%d. %d-%d = ? \n", i, d, e);
                    break;
                }
            }
        }
    }
    return 0;
}