#include <stdio.h>
#include <stdlib.h>
int main()
{
    char dess = 'y';
    while (1)
    {
        switch (dess)
        {
        case 'y':
            goto begin;
        case 'n':
            goto quit;
            break;

        default:
            break;
        }
    start:
        getchar();
        printf("\x1b[32mDo you want to continue[y/n]:\x1b[0m");
        scanf("%c", &dess);
        system("cls");
    }

begin:
{

    int sum = 0, row1, col1, row2, col2;
    printf("\x1b[33mEnter number of Row and column  of matrix A\n\x1b[0m");
    scanf("%d%d", &row1, &col1);
    printf("\x1b[33mEnter number of Row and column of matrix B\n\x1b[0m");
    scanf("%d%d", &row2, &col2);
    int mata[row1][col1];
    int matb[row2][col2];
    int result[row1][col2];
    if (col1 == row2)
    {
        goto calck;
    }
    else
    {
        printf("\x1b[31mMatrix can not be multiplay\x1b[0m");
        goto end;
    }
calck:
{

    printf("\x1b[32m Enter matrix A\x1b[0m\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            scanf("%d", &mata[i][j]);
        }
    }
    printf("\x1b[32m Enter matrix B\x1b[0m\n");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            scanf("%d", &matb[i][j]);
        }
    }
    system("cls");
    printf("MATRIX A\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            printf("\x1b[31m %d \x1b[0m ", mata[i][j]);
        }
        printf("\n");
    }

    printf("\n\nMATRIX B\n");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("\x1b[31m %d \x1b[0m ", matb[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            for (int k = 0; k < row2; k++)
            {
                sum += mata[i][k] * matb[k][j];
            }

            result[i][j] = sum;
            sum = 0;
        }
    }
    printf("\n\n");
     printf("A X B \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("\x1b[34m %d \x1b[0m", result[i][j]);
        }
        printf("\n");
    }
}
end: printf("");
    printf("\nEnd\n");
    goto start;
}

quit:
    printf("  Thanks ");
    return 0;
}