#include <stdio.h>

int main ()
{
    printf("Your Routine: \n\n");
    printf("_________________________________________________\n");
    printf("| Day |    Time   | Subject | Faculty | Section |\n");
    printf("_________________________________________________\n");
    printf("|  S  | 4.50~6.20 |  ENG102 |    HP   |    29   |\n");
    printf("-------------------------------------------------\n");


    char TF;

    printf("\n\n\nTime (T) or Friend (F)?\n");
    scanf("%c",&TF);

    if (TF=='T')
        printf("What Day is it ? (S/M/T/W/R)");


    else if (TF=='F')
    {
        char bud[10];
        printf("Name ?\n");

         if(bud=='Ianur')
         {
            printf("\n");

         }
    }



    return 0;
}

