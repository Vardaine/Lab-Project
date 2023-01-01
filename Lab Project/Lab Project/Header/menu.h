#include <stdio.h>
#define SIZE 10

void menu(void)
{
    printf("\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t      *** Main Menu ***\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t____________________________");
    printf("\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t      1. Add Record");
    printf("\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t      2. List Record");
    printf("\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t      3. Exit");
    printf("\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tYour Choice : ");

    char g = getch();
    char x[SIZE];

    while(g != '3')
   {
        if(g == '1')
    {
        addrec();
        getch();
        system("cls");
        menu();
        return 0;
    }
    else if(g == '2')
    {
        List();
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPRESS ANY KEY TO CONTINUE");
        getch();
        system("cls");
        menu();
        return 0;
    }
    else
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tInvalid entry!");
        g = getch();
   }
   return 0;
}

void List(void)
{
    char x[SIZE];

    FILE * login = fopen("Header/menu.txt", "r");
    int status = fscanf(login,"%s", x);

    while(status == 1)
    {
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tName : ");
        printf("%s", x);
        status = fscanf(login,"%s", x);
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tSalary : ");
        printf("%s", x);
        status = fscanf(login,"%s", x);
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tShift : ");
        printf("%s", x);
        status = fscanf(login,"%s", x);
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAge : ");
        printf("%s", x);
        status = fscanf(login,"%s", x);
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t");
    }

}

void addrec(void)
{
    char x[100];
    char name[10];
    char salary[6];
    char shift[10];
    char age[2];

    FILE * menu = fopen("Header/menu.txt", "r+");
    int status = fscanf(menu,"%s", x);

    while(status != EOF)
     {
         status = fscanf(menu,"%s", x);
     }
     printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tName       : ");
     scanf("%s",&name);
     fprintf(menu,"%s ",name);

     printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tSalary       : ");
     scanf("%s",&salary);
     fprintf(menu,"\n%s ",salary);

     printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tShift        : ");
     scanf("%s",&shift);
     fprintf(menu,"\n%s ",shift);

     printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tAge       : ");
     scanf("%s",&age);
     fprintf(menu,"\n%s ",age);

     printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAdd another employee?Y/N\n\n");
     char a = getch();

     if(a == 'Y' || a == 'y')
     {
         fclose(menu);
         addrec();
         return 0;
     }

    else{
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tPRESS ANY KEY TO CONTINUE\n");
    }
    fclose(menu);
}
