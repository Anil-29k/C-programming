#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    char choice = 'y';
    while (1)
    {
        switch (choice)
        {
        case 'y':
        {

            int n = rand() % 100, num, i = 1;
            printf("Gauss the num between 1 to 100\n");
            scanf("%d", &num);
            while (n != num)
            {
                if (num < n)
                {
                    printf("Enter Bigger num\n");
                }
                else
                {
                    printf("Enter Smaller num\n");
                }

                scanf("%d", &num);
                i++;
            }
            printf("You Guess it in %d times\n", i);
        }
        break;
        case 'n':
            goto end;
        }
        getchar();
        printf("You want to continue [y/n]:");
        scanf("%c",&choice);
        system("cls");
    }
end:
    printf("Thanks");
    return 0;
}