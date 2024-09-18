// full pyramid star partten
#include <stdio.h>
void fullpiramid(int row)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = i; j <= row; j++)
    {
      printf(" ");
    }

    for (int k = 0; k < 2 * i + 1; k++)
    {
      printf("\x1b[32m*\x1b[0m");
    }
    printf("\n");
  }
}
int main()
{
  char choice = 'y';
  while (1)
  {
    int row;
    switch (choice)
    {
    case 'y':
    {
      printf("Enter Row:");
      scanf("%d", &row);
      fullpiramid(row);
      break;
    }
    case 'n':
    {
      goto exit;
      break;
    }
    default:
      printf("\x1b[31mInvalid Choise\n\x1b[0m");
    }
    getchar();
    printf("\x1b[34mDo you want to continue[y/n]:\x1b[0m");
    scanf("%c", &choice);
    system("cls");
  }
exit:
  printf("\nEnd.......");
  return 0;
}