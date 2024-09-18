#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    int n;
    printf("Enter n");
    scanf("%d",&n);
for (float i = 0; i < n; i+=0.005)
{
    printf("\033[0;32m%f\n\033[0m",i);
    fflush(stdout);
    sleep(0.991);
    system("cls");
}

return 0;
}