#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    char ch = 'y';
    while (1)
    {
  
        switch (ch)
        {
        case 'y':
            printf("\033[0;31mEnter a num \033[0m\n");
            scanf("%d", &n);
            for (int i = 1; i <= 10; i++)
            {
                printf("\033[0;32m%d X %d = %d\033[0m\n", n, i, n * i);
            }

            break;
        case 'n':
            goto end;

            break;
        }
        getchar();
        printf("\x1b[33myou want to continue[y/n] :\x1b[0m ");
        scanf("%c", &ch);
      system("cls");
    }
end:
    printf("\x1b[36m\003\003\003Thanks\003\003\003\x1b[0m");

    return 0;
}