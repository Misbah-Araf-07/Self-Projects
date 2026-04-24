#include <stdio.h>
#include <windows.h>
#include <string.h>

const char* TIME_SLOTS[] = {"EMPTY","8.30-10.00 AM","10.10-11.40 AM","11.50-1.20 PM","1.30-3.00 PM","3.10-4.40 PM","4.50-6.20 PM"};
const char* DAY_SLOTS[] = {"EMPTY","A","S","M","T","W","TR","F"};

typedef struct
{
    char name[45];
    char id[25];
    char number[15] ;
    char Routine[8][8];
} infotable ;



int main()
{
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD dwMode = 0;

    GetConsoleMode(hOut, &dwMode);
    SetConsoleMode(hOut, dwMode | 0x0004);

    char Password[25] = {};
    int day, time;
    char in ='1' , in_2 ;


    printf("\tEnter Password: \t\033[2;32m");
    scanf("%s", Password);
    while (strcmp(Password, "itsallen") != 0)
    {
        printf("\033[0m\t\033[1;31mWrong Password!\033[0m Try again: \t\033[2;32m");
        scanf("%s", Password);
    }
    system("cls");
    printf("\033[0mAccess Granted.\n\n");



// ALL DATA

//Araf Data Input
    infotable Myplan =
    {
        .name =  "Misbah Ahmed Araf",
        .id = "2025-2-60-182",
        .number = "01991851249",
        .Routine =
        {
            [1][1] = 1,
            [2][2] = 2, [2][3] = 3, [2][4] = 4,
            [4][2] = 2, [4][3] = 3, [4][4] = 4,
            [6][4] = 4
        }

    };
//Ianur Data Input
    infotable Ianurplan =
    {
        .name =  "Mohiuddin Seikh Ianur",
        .id = "2025-3-60-144",
        .number = "01945177044",
        .Routine =
        {
            [2][2] = 2, [2][3] = 3,[2][4] = 4,
            [3][3] = 3,
            [4][4] = 4,
            [5][3] = 3,
            [6][4] = 4, [6][5] = 5
        }

    };
//Apurbo Data Input
    infotable Apurboplan =
    {
        .name =  "Shahriar Hasan Apurbo",
        .id = "2025-2-60-328",
        .number = "01753959198",
        .Routine =
        {
            [2][5] = 5,
            [3][2] = 2,
            [4][5] = 5,[4][6] = 5,
            [5][2] = 2,
            [6][4] = 4, [6][6] = 6
        }

    };

//Rumman Shajarat Hridi Data Input
    infotable Hridiplan =
    {
        .name =  "Rumman Shajarat Hridi",
        .id = "2025-2-60-396",
        .number = "X",
        .Routine =
        {
            [3][1] = 1, [3][6] = 6, //Mon
            [4][4] = 4, [4][6] = 6, //Tues
            [5][1] = 1, [5][2] = 2, // Wed
            [6][4] = 4  //Thur
        }
    };

//Nirjara Chutiya Lady Bro Data Input
    infotable Nirjaraplan =
    {
        .name =  "Nirjara Reza",
        .id = "2025-2- ",
        .number = "X",
        .Routine =
        {
            [2][1] = 1,
            [3][2] = 2, [3][6] = 6,
            [4][1] = 1,
            [5][2] = 2, [5][6] = 6,
            [6][6] = 6
        }

    };
//Borna Data Input
    infotable Bornaplan =
    {
        .name =  "Mymuna Akter Borna",
        .id = "2025-2-60-238",
        .number = "01868160592",
        .Routine =
        {
            [2][3] = 3, [2][6] = 6, //Sun
            [3][1] = 1, [3][6] = 6, //Mon
            [4][3] = 3, [4][6] = 6, //Tues
            [5][1] = 1, [5][4] = 4, [5][6] = 6, // Wed
            [6][6] = 6  //Thur
        }

    };

        printf("Please Select a Mode:\n");

 while (in !=0 )
    {

        printf("\t A-> Find Friends on day\n");
        printf("\t B-> See Friends' Routine\n");
        printf("\t C-> Check your Routine\n");
        printf("\t    Press 0 to Exit\n\n");
        scanf(" %c",&in);


        if (in=='0') break;

        else if (in=='A' || in=='a')
        {
            char input[10] = {} ;
            printf("\t\033[1;32mWhat Day is it ?  :\033[0m\t");
            scanf("%s",&input);

            if (strcmp(input, "Sat")==0||strcmp(input, "SATURDAY")==0||strcmp(input, "A")==0||strcmp(input, "saturday")==0||strcmp(input, "Saturday")==0 ) day=1;
            else if (strcmp(input, "Sun")==0||strcmp(input, "SUNDAY")==0||strcmp(input, "S")==0||strcmp(input, "sunday")==0||strcmp(input, "Sunday")==0 )day=2;
            else if  (strcmp(input, "Mon")==0||strcmp(input, "MONDAY")==0||strcmp(input, "M")==0||strcmp(input, "monday")==0||strcmp(input, "Monday")==0 )day=3;
            else if  (strcmp(input, "Tues")==0||strcmp(input, "TUESDAY")==0||strcmp(input, "T")==0||strcmp(input, "tuesday")==0||strcmp(input, "Tuesday")==0 )day=4;
            else if  (strcmp(input, "Wed")==0||strcmp(input, "WEDNESDAY")==0||strcmp(input, "W")==0||strcmp(input, "wednesday")==0 ||strcmp(input, "Wednesday")==0)day=5;
            else if  (strcmp(input, "Thu")==0||strcmp(input, "THURSDAY")==0||strcmp(input, "R")==0||strcmp(input, "thursday")==0||strcmp(input, "Thursday")==0 )day=6;
            else if  (strcmp(input, "Fri")==0||strcmp(input, "FRIDAY")==0||strcmp(input, "F")==0||strcmp(input, "friday")==0 ||strcmp(input, "Friday")==0)day=7;
            if (day == 0)
            {
            printf("Invalid Day!\n");
            continue;
            }

            printf("\n");
//ianur

            if(Ianurplan.Routine[day]!= 0)
            {
                printf("\tIanur: ");
                for(time=1; time<8; time++)
                {
                    if (Ianurplan.Routine[day][time] != 0) printf("\t\t \033[1;36m->\033[0m%s\n",TIME_SLOTS[time]);
                }
            }



////Nirjara
//
        if(Nirjaraplan.Routine[day]!= 0)
        {   printf("\n");
            printf("\tNirjara: ");
            for(time=1; time<8; time++)
            {
                if (Nirjaraplan.Routine[day][time] != 0) printf("\t \033[1;36m->\033[0m%s\n",TIME_SLOTS[time]);
            }
        }


//Hridi

            if(Hridiplan.Routine[day]!= 0)
            {
                printf("\n");
                printf("\tHridi: ");
                for(time=1; time<8; time++)
                {
                    if (Hridiplan.Routine[day][time] != 0) printf("\033[1;36m->\033[0m%s\n\t\t",TIME_SLOTS[time]);
                }
            }



//Apurbo

            if(Apurboplan.Routine[day]!= 0)
            {
                printf("\n");
                printf("\tApurbo: ");
                for(time=1; time<8; time++)
                {
                    if (Apurboplan.Routine[day][time] != 0) printf("\t\t \033[1;36m->\033[0m%s\n",TIME_SLOTS[time]);
                }
            }






        }









        else if (in=='B' || in=='b')
        {
            char subj[20];
            printf("\n\tName of The Subject  ?\t:  ");
            scanf("%s",&subj);
            printf("\n\n\n");

//DATA SCAN



//ME
            if (strcmp(subj,"Araf")==0 || strcmp(subj,"araf")==0 || strcmp(subj,"ARAF")==0)
            {


                printf("\t\t\t\033[2;34m\\______________________________________________/\033[0m\n");
                printf("\t\t\t\033[2;34m|                                              |\033[0m\n");
                printf("\t\t\t\tName: %s\n",Myplan.name);
                printf("\t\t\t\033[2;34m|                                              |\033[0m\n");
                printf("\t\t\t\tID: %s\n",Myplan.id);
                printf("\t\t\t\033[2;34m|                                              |\033[0m\n");
                printf("\t\t\t\tNumber: %s\n",Myplan.number);
                printf("\t\t\t\033[2;34m|                                              |\033[0m\n\n");
                printf("\t\t\t \033[2;34m\\      ______       ________     ______      /\033[0m\n");
                printf("\n\n\n");


                for (day=1 ; day<8 ; )
                {
                    for(time=1; time<8 ; time++)
                    {
                        if (Myplan.Routine[day][time] == 0) printf("\033[3;32m \033[0m   ");
                        else  printf("\n\t%s \033[2;31m|\033[0m %s ", DAY_SLOTS[day], TIME_SLOTS[time]);
                    }
                    day++;
                    printf("\n");
                }
            }


//IANUR

            if (strcmp(subj,"Ianur")==0 || strcmp(subj,"IANUR")==0 || strcmp(subj,"ianur")==0)
            {


                printf("\t\t\t\033[2;34m\\______________________________________________/\033[0m\n");
                printf("\t\t\t\033[2;34m|                                              |\033[0m\n");
                printf("\t\t\t\tName: %s\n",Ianurplan.name);
                printf("\t\t\t\033[2;34m|                                              |\033[0m\n");
                printf("\t\t\t\tID: %s\n",Ianurplan.id);
                printf("\t\t\t\033[2;34m|                                              |\033[0m\n");
                printf("\t\t\t\tNumber: %s\n",Ianurplan.number);
                printf("\t\t\t\033[2;34m|                                              |\033[0m\n\n");
                printf("\t\t\t \033[2;34m\\      ______       ________     ______      /\033[0m\n");
                printf("\n\n\n");


                for (day=1 ; day<8 ; )
                {
                    for(time=1; time<8 ; time++)
                    {
                        if (Ianurplan.Routine[day][time] == 0) printf("\033[3;32m \033[0m   ");
                        else  printf("\n\t%s \033[2;31m|\033[0m %s ", DAY_SLOTS[day], TIME_SLOTS[time]);
                    }
                    day++;
                    printf("\n");
                }

                printf("\n\t\033[1;36mMy Routine\033[0m :\n\t");
                printf("\033[1;33mA: 8.00 AM-10.00 AM\n\t");
                printf("S: 10.10-11.40 AM -> 11.50-1.20 PM - > 1.30-3.30 PM\n\t");
                printf("M: \033[2;35m--\033[1;33m \n\t");
                printf("T: 10.10-11.40 AM -> 11.50-1.20 PM - > 1.30-3.30 PM\n\t");
                printf("W: \033[2;35m--\033[1;33m \n\t");
                printf("R: 1.30-3.30 PM \033[0m\n\t");
            }



//Apurbo
            if (strcmp(subj,"APURBO")==0 || strcmp(subj,"apurbo")==0 || strcmp(subj,"Apurbo")==0)
            {


                printf("\t\t\t\033[2;34m\\______________________________________________/\033[0m\n");
                printf("\t\t\t\033[2;34m|                                              |\033[0m\n");
                printf("\t\t\t\tName: %s\n",Apurboplan.name);
                printf("\t\t\t\033[2;34m|                                              |\033[0m\n");
                printf("\t\t\t\tID: %s\n",Apurboplan.id);
                printf("\t\t\t\033[2;34m|                                              |\033[0m\n");
                printf("\t\t\t\tNumber: %s\n",Apurboplan.number);
                printf("\t\t\t\033[2;34m|                                              |\033[0m\n\n");
                printf("\t\t\t \033[2;34m\\      ______       ________     ______      /\033[0m\n");
                printf("\n\n\n");


                for (day=1 ; day<8 ; )
                {
                    for(time=1; time<8 ; time++)
                    {
                        if (Apurboplan.Routine[day][time] == 0) printf("\033[3;32m \033[0m   ");
                        else  printf("\n\t%s \033[2;31m|\033[0m %s ", DAY_SLOTS[day], TIME_SLOTS[time]);
                    }
                    day++;
                    printf("\n");
                }

                printf("\n\t\033[1;36mMy Routine\033[0m :\n\t");
                printf("\033[1;33mA: 8.00 AM-10.00 AM\n\t");
                printf("S: 10.10-11.40 AM -> 11.50-1.20 PM - > 1.30-3.30 PM\n\t");
                printf("M: \033[2;35m--\033[1;33m \n\t");
                printf("T: 10.10-11.40 AM -> 11.50-1.20 PM - > 1.30-3.30 PM\n\t");
                printf("W: \033[2;35m--\033[1;33m \n\t");
                printf("R: 1.30-3.30 PM \033[0m\n\t");
            }



//Nirjara Chutiya
            if (strcmp(subj,"Nirjara")==0 || strcmp(subj,"NIRJARA")==0 || strcmp(subj,"nirjara")==0 || strcmp(subj,"LadyBro")==0 )
            {


                printf("\t\t\t\033[2;34m\\______________________________________________/\033[0m\n");
                printf("\t\t\t\033[2;34m|                                              |\033[0m\n");
                printf("\t\t\t\tName: %s\n",Nirjaraplan.name);
                printf("\t\t\t\033[2;34m|                                              |\033[0m\n");
                printf("\t\t\t\tID: %s\n",Nirjaraplan.id);
                printf("\t\t\t\033[2;34m|                                              |\033[0m\n");
                printf("\t\t\t\tNumber: %s\n",Nirjaraplan.number);
                printf("\t\t\t\033[2;34m|                                              |\033[0m\n\n");
                printf("\t\t\t \033[2;34m\\      ______       ________     ______      /\033[0m\n");
                printf("\n\n\n");


                for (day=1 ; day<8 ; )
                {
                    for(time=1; time<8 ; time++)
                    {
                        if (Nirjaraplan.Routine[day][time] == 0) printf("\033[3;32m \033[0m   ");
                        else  printf("\n\t%s \033[2;31m|\033[0m %s ", DAY_SLOTS[day], TIME_SLOTS[time]);
                    }
                    day++;
                    printf("\n");
                }

                printf("\n\t\033[1;36mMy Routine\033[0m :\n\t");
                printf("\033[1;33mA: 8.00 AM-10.00 AM\n\t");
                printf("S: 10.10-11.40 AM -> 11.50-1.20 PM - > 1.30-3.30 PM\n\t");
                printf("M: \033[2;35m--\033[1;33m \n\t");
                printf("T: 10.10-11.40 AM -> 11.50-1.20 PM - > 1.30-3.30 PM\n\t");
                printf("W: \033[2;35m--\033[1;33m \n\t");
                printf("R: 1.30-3.30 PM \033[0m\n\t");
            }



//Borna
            if (strcmp(subj,"BORNA")==0 || strcmp(subj,"Borna")==0 || strcmp(subj,"borna")==0)
            {


                printf("\t\t\t\033[2;34m\\______________________________________________/\033[0m\n");
                printf("\t\t\t\033[2;34m|                                              |\033[0m\n");
                printf("\t\t\t\tName: %s\n",Bornaplan.name);
                printf("\t\t\t\033[2;34m|                                              |\033[0m\n");
                printf("\t\t\t\tID: %s\n",Bornaplan.id);
                printf("\t\t\t\033[2;34m|                                              |\033[0m\n");
                printf("\t\t\t\tNumber: %s\n",Bornaplan.number);
                printf("\t\t\t\033[2;34m|                                              |\033[0m\n\n");
                printf("\t\t\t \033[2;34m\\      ______       ________     ______      /\033[0m\n");
                printf("\n\n\n");


                for (day=1 ; day<8 ; )
                {
                    for(time=1; time<8 ; time++)
                    {
                        if (Bornaplan.Routine[day][time] == 0) printf("\033[3;32m \033[0m   ");
                        else  printf("\n\t%s \033[2;31m|\033[0m %s ", DAY_SLOTS[day], TIME_SLOTS[time]);
                    }
                    day++;
                    printf("\n");
                }

                printf("\n\t\033[1;36mMy Routine\033[0m :\n\t");
                printf("\033[1;33mA: 8.00 AM-10.00 AM\n\t");
                printf("S: 10.10-11.40 AM -> 11.50-1.20 PM - > 1.30-3.30 PM\n\t");
                printf("M: \033[2;35m--\033[1;33m \n\t");
                printf("T: 10.10-11.40 AM -> 11.50-1.20 PM - > 1.30-3.30 PM\n\t");
                printf("W: \033[2;35m--\033[1;33m \n\t");
                printf("R: 1.30-3.30 PM \033[0m\n\t");
            }



//Rumman Shajarat Hridi
            if (strcmp(subj,"Hridi")==0 || strcmp(subj,"HRIDI")==0 || strcmp(subj,"hridi")==0)
            {


                printf("\t\t\t\033[2;34m\\______________________________________________/\033[0m\n");
                printf("\t\t\t\033[2;34m|                                              |\033[0m\n");
                printf("\t\t\t\tName: %s\n",Hridiplan.name);
                printf("\t\t\t\033[2;34m|                                              |\033[0m\n");
                printf("\t\t\t\tID: %s\n",Hridiplan.id);
                printf("\t\t\t\033[2;34m|                                              |\033[0m\n");
                printf("\t\t\t\tNumber: %s\n",Hridiplan.number);
                printf("\t\t\t\033[2;34m|                                              |\033[0m\n\n");
                printf("\t\t\t \033[2;34m\\      ______       ________     ______      /\033[0m\n");
                printf("\n\n\n");


                for (day=1 ; day<8 ; )
                {
                    for(time=1; time<8 ; time++)
                    {
                        if (Hridiplan.Routine[day][time] == 0) printf("\033[3;32m \033[0m   ");
                        else  printf("\n\t%s \033[2;31m|\033[0m %s ", DAY_SLOTS[day], TIME_SLOTS[time]);
                    }
                    day++;
                    printf("\n");
                }

                printf("\n\t\033[1;36mMy Routine\033[0m :\n\t");
                printf("\033[1;33mA: 8.00 AM-10.00 AM\n\t");
                printf("S: 10.10-11.40 AM -> 11.50-1.20 PM - > 1.30-3.30 PM\n\t");
                printf("M: \033[2;35m--\033[1;33m \n\t");
                printf("T: 10.10-11.40 AM -> 11.50-1.20 PM - > 1.30-3.30 PM\n\t");
                printf("W: \033[2;35m--\033[1;33m \n\t");
                printf("R: 1.30-3.30 PM \033[0m\n\t");
            }




        }

        else if (in=='C' || in=='c')
        {

            printf("\nClass Based [C] or Day based[D] ?\n\n");
            scanf(" %c", &in_2);

            if (in_2 == 'C' || in_2 == 'c')
            {

                printf("\t \033[1;31m_______________________________________________________________________________ \n");
                printf("\t/ \033[0mPhy109-Lab        Che109         Mat104       Che109-Lab        Phy109        \033[1;31m\\ \033[0m \n");
                printf("\t\033[1;31m---------------------------------------------------------------------------------\033[0m \n");

//A
                printf("     \033[1;32mA:\033[0m | 8.00-10.00          .              .               .               .  \t|\n");
                printf("\t| \033[2;34m460 Phy Lab\033[0m \t\t\t\t\t\t\t\t\t|");
                printf("\n\t---------------------------------------------------------------------------------\n");
//S
                printf("     \033[1;32mS:\033[0m |        .        10.10-11.40     11.50-1.20    1.30-3.30            .\t\t|\n");
                printf("\t|                   \033[2;34mFUB-801\033[0m        \033[2;34mFUB-702\033[0m        \033[2;34mFUB-804\033[0m \t\t\t|");
                printf("\n\t---------------------------------------------------------------------------------\n");
//M
                printf("     \033[1;32mM:\033[0m |        .              .               .             .              .  \t|\n");
                printf("\t| \t\t\t\t\t\t\t\t\t\t|");
                printf("\n\t---------------------------------------------------------------------------------\n");
//T
                printf("     \033[1;32mT:\033[0m |        .        10.10-11.40     11.50-1.20                     1.30-3.30      |\n");
                printf("\t|                   \033[2;34mFUB-801\033[0m        \033[2;34mFUB-702\033[0m                        \033[2;34mFUB-801\033[0m       |");
                printf("\n\t---------------------------------------------------------------------------------\n");
//W
                printf("     \033[1;32mW:\033[0m |        .              .               .             .              .  \t|\n");
                printf("\t| \t\t\t\t\t\t\t\t\t\t|");
                printf("\n\t---------------------------------------------------------------------------------\n");
//TR

                printf("    \033[1;32mTR:\033[0m |        .              .               .             .           1.30-3.30     |\n");
                printf("\t| \t\t\t\t\t\t\t\t   \033[2;34mFUB-801\033[0m      |");
                printf("\n\t---------------------------------------------------------------------------------\n");

                printf("\n\n\tAdditional Info: \n\t\t\ti) Mat104 : DAKD [Section 12]\n\t\t\tii) Che109 : DTMA [Section 6] \n\t\t\tiii) Phy109 : DMBB [Section 16]\n");
            }
            else if (in_2 == 'D' || in_2 == 'd')
            {

                printf("\n\t\033[1;35mMy Routine\033[0m :\n\tA: 8.00 AM-10.00 AM\n\t");
                printf("S: 10.10-11.40 AM -> 11.50-1.20 PM - > 1.30-3.30 PM\n\t");
                printf("M: \033[2;36m--\033[0m \n\t");
                printf("W: 10.10-11.40 AM -> 11.50-1.20 PM - > 1.30-3.30 PM\n\t");
                printf("W: \033[2;36m--\033[0m \n\t");
                printf("Tr: 1.30-3.30 PM \n\t");


            }

        }



        printf("\n\n\n\t  \033[4;35m< Session Repeated >\033[0m\n\n\n");
    }

    return 0;
}
