#include <stdio.h>
#define SIZE 10
#include <string.h>


void login_h(void)
{
    int flag = 0;
    char u[SIZE];
    char p[SIZE];
    char x[SIZE];

    printf("\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t                 HA Corp\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t__________________________________________\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t                  Login\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\n");

    printf("\t\t\t\t\t\t\t\t\t\t\t\t\tUsername : ");
    scanf("%s", &u);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPassword : ");
    scanf("%s", &p);

    FILE*login = fopen("Header/login.txt", "r");
    int status = fscanf(login,"%s", x);

    while(status == 1)
    {
        if(strcmp(u, x) == 0)
        {
            status = fscanf(login,"%s", x);
            if(strcmp(p, x) == 0)
            {
                flag = 1;
            }
        }
            status = fscanf(login,"%s", x);
    }

    if(flag == 1)
    {
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tLogging in!");
    }
    else if(flag == 0)
    {
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\tLogin not succesful!");
        login_h();
    }
    sleep(3);
    system("cls");

}
