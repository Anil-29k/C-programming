#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int phoninput(char phno[11])
{
    scanf("%10s", phno);
    if (strlen(phno) == 10)
    {
        for (int i = 0; i < 10; i++)
        {
            if (isdigit(phno[i]))
            {
            }
            else
            {
                goto a;
            }
        }
        return 1;
    }
    else
    {
    a:
        printf("Enter Valid phone num\n");
        return 0;
    }
}
int creatUser(char name[], char password[], char phonenum[], int sizeofname, int sizeofpass, int sizeofphon)
{
    int a, n;
    getchar();
    printf("Enter Name::-\n");
    fgets(name, sizeofname, stdin);
    printf("Enter Password::-\n");
    fgets(password, sizeofpass, stdin);
    printf("Enter Phone Number::-\n");
    do
    {
        a = phoninput(phonenum);
    } while (a == 0);

    printf("Account Created Succesfully!\n");
}
void printuserditels(char name[], char password[], char phonenum[], float blance)
{
    printf("Name: %s\n", name);
    printf("Password:%s\n", password);
    printf("Phone Number:%s\n", phonenum);
    printf("Balance :%f\n", blance);
}
void deposit(float amount, float *blance)
{
    *blance = *blance + amount;
}
void withdrow(float amount, float *blance)
{
    *blance = *blance - amount;
}
int login(char enteredname[], char actualname[], char enterpassword[], char actualpassword[])
{
    if (strcmp(enteredname, actualname) == 0 && strcmp(enterpassword, actualpassword) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    FILE *acc = NULL;
    char name[40];
    char password[16];
    char phonenum[11];
    static float blance = 0.0;
top:
{
    while (1)
    {
        printf("Wellcom to xyz_Bank");
        printf("Choose:\nSignup =1\nSignin=2\n Exit=3");
        int choice = 1;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            creatUser(name, password, phonenum, sizeof(name), sizeof(password), sizeof(phonenum));
            printuserditels(name, password, phonenum, blance);
        }
        break;
        case 2:
            goto login;
            break;
        case 3:
            goto exit;
        default:
            printf("Invalid choice\n");
        }
    }
}

login:
{
    getchar();
    printf("In login\n");
    char loginname[40];
    char loginpassword[16];
    printf("Enter Name:: ");
    fgets(loginname, sizeof(loginname), stdin);
    printf("Enter Password:: ");
    fgets(loginpassword, sizeof(loginpassword), stdin);
    int result = login(loginname, name, loginpassword, password);
    if (result == 1)
    {
        printf("Login Sucessfully\n");
    }
    else
    {
        printf("Invalid User Name Or Password\n");
        goto top;
    }
}
acc:
{
    int op;
    printf("Choose 1 for deposit \nChoose 2 for withdrow\nChoose 3 for logout");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
    {
        float depositamt;
        printf("Enter deposit amount\n");
        scanf("%f", &depositamt);
        deposit(depositamt, &blance);
        printf("balance is %f\n", blance);
    }
    break;
    case 2:
    {
        float withdrowamt;
        printf("Enter withdrow amount\n");
        scanf("%f", &withdrowamt);
        if (withdrowamt < blance)
        {
            withdrow(withdrowamt, &blance);
        }
        else
        {
            printf("Your balance is not sufficent for withdrow\n");
        }

        printf("balance is %f\n", blance);
    }
    break;
    case 3:
        goto top;

    default:
        printf("INVALID CHOICE!!!\n");
    }
}
    goto acc;
exit:
{
    acc = fopen("Account_ditles.txt", "a");
    fprintf(acc, "Name = %sPhone No= %sPasswors= %sBalance= %f\n", name, phonenum, password, blance);
    fclose(acc);
}
    return 0;
}
