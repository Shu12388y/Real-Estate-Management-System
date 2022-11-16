#include<stdio.h>

#include<conio.h>

#include<ctype.h>

#include<windows.h>

#include<stdlib.h>

#include<time.h>

#include<stdbool.h>

#include<string.h>



enum state{main_menu,login_system,signin_system};

enum state currentwindow=main_menu;



void title(void);  

void signup(void);

void signin(void);

void admin_login(void);

void add();

void list();

void search();

void cancel();

void book();

void view_booking();

void logout();

void exit_system();



char current_client[100];



void gotoxy(short x, short y)

{

COORD pos = {x, y};//sets co-ordinates in (x,y).

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}



/*--------------------------------------------------------------------------------------------*/

struct CustomerDetails   //STRUCTURE DECLARATION

{



               char cno[10];

               char name[20];

               char location[25];

               char home[15];

               char room[15];

               char homenow[20];

               char money[20];

               char size[20];

               char mno[11];

}s,h,c;



struct login

{

    char fname[30];

    char lname[30];

    char username[30];

    char password[20];

    char Contact_no[15];

};



/*---------------------------------------------------------------------------------------------*/

int main()

{



               int i=0;

               time_t t;

               time(&t);

               char name;

               char choice1,choice2,choice3;



               system("cls");

    system("COLOR 0E");



    printf("\n\n\n\n\n\n\t\t\t\t\t\tCurrent Date and Time : %s",ctime(&t));

                printf("\n\n\n\t\t\t\t\t\t*******************************************************\n");


               printf("\t\t\t\t\t\t*                                                     *\n");

               printf("\t\t\t\t\t\t*                                                     *\n");

               printf("\t\t\t\t\t\t*      ----------------------------------------       *\n");

               printf("\t\t\t\t\t\t*      WELCOME TO REAL ESTATE MANAGEMENT SYSTEM       *\n");

               printf("\t\t\t\t\t\t*      ----------------------------------------       *\n");

               printf("\t\t\t\t\t\t*                                                     *\n");

               printf("\t\t\t\t\t\t*                                                     *\n");

               printf("\t\t\t\t\t\t*                                                     *\n");

               printf("\t\t\t\t\t\t*******************************************************\n\n\n\n\n\n\n\n\n\n\n\n");



                              for(i=0;i<160;i++)

                              printf("-");

        system("COLOR 0E");



        printf(" \n\n\t\t\t\t\t\t Press --> ENTER key to Continue.....");

        getch();

        system("cls");



        while (1)      // INFINITE LOOP

        {

            system("cls");

            system("COLOR 0A");

            printf("\n\n");

            for(i=0;i<165;i++)

            printf("-");

            printf("\n");



            printf("\t\t\t\t\t ******************************  | MAIN  MENU |  ***************************** \n");

            for(i=0;i<165;i++)

            printf("-");

            printf("\n\t");

            system("COLOR 0A");



                if(currentwindow==main_menu)

                {



                        printf("\n\n\t\t\t\t\t\t\t\t1 --> USER SIGNUP \n\n\t\t\t\t\t\t\t\t2 --> USER SIGNIN\n\n\t\t\t\t\t\t\t\t3 --> ADMIN SIGNIN\n\n\t\t\t\t\t\t\t\t4 --> EXIT\n\n\t\t\t\t\t\t\t\tEnter your choice: ");

                        scanf("%d",&choice1);



                        switch(choice1)

                        {



                                case 1:

                                        signup();

                                        system("COLOR 0F");

                                        break;

                                case 2:

                                        signin();

                                        break;

                                case 3:

                                        admin_login();

                                        break;

                                case 4:

                                        exit_system();

                                        exit(0);

                                        break;

                                default:

                                        printf("\n Not a valid input at this stage\n");



                        }//end switch



                }//end if



                else if(currentwindow==login_system)

                {



                        system("CLS");

                        system("COLOR 0F");

                        title();

                        system("COLOR F");

                        printf("\n\n\t\t\t\t\t\t\t1 -> DISPLAY LIST \n\n\t\t\t\t\t\t\t2 -> SEARCH PROPERTY\n\n\t\t\t\t\t\t\t3 -> BOOK PROPERTY \n\n\t\t\t\t\t\t\t4 -> LOGOUT\n\n\t\t\t\t\t\t\tEnter Your Choice: ");

                        scanf("%d",&choice2);



                        switch(choice2)

                        {

                                case 1:

                                        list();

                                        printf("\n\n\n\tPress Any Key to go back to main menu");

                                        getch();

                                        system("cls");

                                        break;



                                case 2:

                                        search();

                                        printf("\n\n\n\tPress Any Key to go back to main menu");

                                        getch();

                                        system("cls");

                                        break;



                                case 3:

                                        book();

                                        printf("\n\n\n\tPress Any Key to go back to main menu");

                                        getch();

                                        system("cls");

                                        break;

                                case 4:

                                        logout();

                                        break;

                                default:

                                        printf("\n\tNot a valid input at this stage\n");



                                }//end switch



                }//end if else

                else if(currentwindow==signin_system)

                {

                        system("CLS");

                        system("COLOR F");

                        title();

                        system("COLOR F");

                        printf("\n\n\t\t\t\t\t\t\t1 -> ADD LIST \n\n\t\t\t\t\t\t\t2 -> VIEW LIST \n\n\t\t\t\t\t\t\t3 -> DELETE PROPERTY\n\n\t\t\t\t\t\t\t4 -> VIEW BOOKING\n\n\t\t\t\t\t\t\t5 -> LOGOUT\n\n\t\t\t\t\t\t\tEnter Your Choice: ");



                        scanf("%d",&choice3);

                        switch(choice3)

                        {

                                case 1:

                                         add();

                                         printf("\n\n\n\tPress Any Key to go back to main menu");

                                         getch();

                                         system("cls");

                                         break;



                                case 2:

                                        list();

                                        printf("\n\n\n\tPress Any Key to go back to main menu");

                                        getch();

                                        system("cls");

                                        break;

                                case 3:

                                        cancel();

                                        printf("\n\n\tPress Any Key to go back to main menu");

                                        getch();

                                        system("cls");

                                        break;

                                case 4:

                                        view_booking();

                                        printf("\n\tPress Any Key to go back to main menu");

                                        getch();

                                        system("cls");

                                        break;

                                case 5:

                                        logout();

                                        system("cls");

                                        break;



                                default:



                                        printf("Not a valid input at this stage\n");



                                }//end switch



                }//end if else



               }//end while

               return 0;



}



/*-----------------------------------------------------------------------------------------*/

void title(void)

{

        int i=0;

        printf("\n");

        for(i=0;i<165;i++)

        printf("=");

        printf("\n");

        printf("\t\t\t\t\t\t\t    REAL  ESTATE  MANAGEMENT  SYSTEM   \n");

        for(i=0;i<165;i++)

        printf("=");

        printf("\n");



}

/*--------------------------------------------------------------------------------------------*/

void admin_login(void)

{



        char uname[10],c=' ';

        char pword[10],code[10];

        int flag=0;

        int i=0;

        int a=0;

        int ch;

        char user[10]="admin";

        char pass[10]="pass";



         do

        {

                system("cls");

                title();

                printf(" \n\n\n\n\t\t\t\t\t\t\tENTER USERNAME:- ");

                scanf("%s", &uname);

                printf(" \n\n\t\t\t\t\t\t\tENTER PASSWORD:- ");

                while(i<10)

                {



                               pword[i]=getch();

                               c=pword[i];

                               if(c==13) break;

                               else printf("*");

                               i++;

                }

                pword[i]='\0';

                i=0;



                if(strcmp(uname,user)==0 && strcmp(pword,pass)==0)

                {



                               printf("  \n\n\n\n\t\t\t\t\t\t\tWELCOME !!!! LOGIN IS SUCCESSFUL....!!!!\n\n\n\t\t\t\t\t\t\t");

                               currentwindow=signin_system;

                               system("PAUSE");

                               break;

                }

                else

                {

                    printf("\n\n\t\t\t\t\t SORRY !!!!  LOGIN IS UNSUCESSFUL...!!!!\n");

                    system("PAUSE");

                    a++;

                    getch();



                }

        }//end do

        while(a<=2);

        if (a>2)

        {

            printf("\n\n\t\tSorry you have entered the wrong username and password for four times!!!");

            getch();



                              }

                              system("cls");



}

/*----------------------------------------------------------------------------------------------*/

void signup(void)

{



        char firstname[15];

        char username[30];

        char password[20],c;



        FILE *log;

        int i=0;

        int ch;

        int b;

        int valid=0;

        system("cls");

        title();

        log=fopen("user.txt","a+");

        if (log == NULL)

        {

                fputs("Error at opening File!", stderr);

                exit(1);



        }//

        struct login l;



        printf("\n\n\n\t\t\t\tWELCOME..!!! Enter some Details for Registration.\n\n");



        A:

        printf("\n\t\t\t\tEnter First Name: ");

        scanf("%s",l.fname);



        l.fname[0]=toupper(l.fname[0]);

        if(strlen(l.fname)>20||strlen(l.fname)<2)

        {

            printf("\n\t\t\t\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");

            goto A;

        }

        else

        {

            for (b=0;b<strlen(l.fname);b++)

            {

                if (isalpha(l.fname[b]))

                {

                    valid=1;

                }

                else

                {

                    valid=0;

                    break;

                }

            }

            if(!valid)

            {

                printf("\n\t\t\t\t First name contain Invalid character :(  Enter again :)");

                goto A;

            }

        }



        printf("\n\t\t\t\tEnter Surname   : ");

        scanf("%s",l.lname);



        B:

        l.lname[0]=toupper(l.lname[0]);

        if(strlen(l.lname)>20||strlen(l.lname)<2)

        {

            printf("\n\t\t\t\t Invalid :( \t The max range for last name is 20 and min range is 2 :)");

            goto B;

        }

        else

        {

            for (b=0;b<strlen(l.lname);b++)

            {

                if (isalpha(l.lname[b]))

                {

                    valid=1;

                }

                else

                {

                    valid=0;

                    break;

                }

            }

            if(!valid)

            {

                printf("\n\t\t\t\t Last name contain Invalid character :(  Enter again :)");

                goto B;

            }

        }



        do

        {

            D:

            printf("\n\t\t\t\tEnter Contact no: ");

            scanf("%s",l.Contact_no);

            if(strlen(l.Contact_no)>10||strlen(l.Contact_no)!=10)

            {

                printf("\n\t\t\t\t Sorry :( Invalid. Contact no. must contain 10 numbers. Enter again :)");

                goto D;

            }

            else

            {

                for (b=0;b<strlen(l.Contact_no);b++)

                {

                    if (!isalpha(l.Contact_no[b]))

                    {

                        valid=1;

                    }

                    else

                    {

                        valid=0;

                        break;

                    }

                }

                if(!valid)

                {

                    printf("\n\t\t\t\t Contact no. contain Invalid character :(  Enter again :)");

                    goto D;

                }

            }

        }while(!valid);



        printf("\n\n\t\t\t\tThank you!!!\n\t\t\t\tNow please choose a username and password as credentials for system login.\n\n");

        printf("\n\t\t\t\tEnter Username: ");

        scanf("%s",l.username);



        printf("\n\t\t\t\tEnter Password: ");

                //scanf("%s",l.password);



                for(i=0;i<20;i++)

                password[i]='\0';

                for(i=0;i<20;i++)

                {

                        ch=getch();

                        printf("*");

                        if(ch==13)break;

                        password[i]=(char)ch;

                }

                strcpy(l.password,password);

                fwrite(&l,sizeof(l),1,log);

                //fclose(log);



                printf("\n\n\n\t\t\t\tConfirming details...\n\t\t\t\t...\n\t\t\t\tWELCOME !!\n\n");

                printf("\n\n\t\t\t\tRegistration Successful!\n");

                printf("\n\t\t\t\tPress any key to continue...");

                getch();

                system("CLS");

                fclose(log);

}

/*----------------------------------------------------------------------------------------------*/

void signin(void)

{



        char username[30],password[20],c;

        FILE *log;

        int flag = 0;

        int i=0;

        int ch;



        system("cls");

        title();

        log = fopen("user.txt","r");

        if (log == NULL)

        {

                fputs("\n\tError at opening File!", stderr);

                exit(1);

        }

        struct login l;

        printf("\n\n\n\t\t\t\t\tPlease Enter your Signin credentials below");

        printf("\n\n\t\t\t\t\tUsername:  \t");

        fflush(stdin);

        gets(username);



        printf("\n\t\t\t\t\tPassword: \t");

        for(i=0;i<20;i++)

        password[i]='\0';

        for(i=0;i<20;i++)

        {

                ch=getch();

                printf("*");

                if(ch==13)break;

                password[i]=(char)ch;

        }

         while(fread(&l,sizeof(l),1,log)==1)

        {

               if(strcmp(username,l.username)==0 && strcmp(password,l.password)==0)

               {



                        printf("\n\t\t\t\tSuccessful Login");

                        flag = 1;

                        break;

                }

        }

        fclose(log);

        if(flag == 0)

        {

                printf("\n\t\t\t\tIncorrect Login Details\n\t\t\t\tPlease enter the correct credentials\n");

                //  getch();

        }

        else if(flag == 1)

        {

                currentwindow=login_system;



        }

        return;



}

/*---------------------------------------------------------------------------------------------*/

void add()

{



               FILE *f;

               char test;

               f=fopen("details.txt","a+");



    system("cls");

    title();

               int i=0;

               if(f==0)

               {

                              printf("\nPlease hold on while we set our database in your computer!!");

                              printf("\n Process completed press any key to continue!! ");

                              getch();

               }

               while(1)

               {



                              system("cls");

                              printf("\n\n\t ADD DETAILS :");

                              printf("\n\t************************************");

                              printf("\n\n\n\tEnter Property Id:\t");

                              scanf("\n%s",s.cno);



                              fflush(stdin);

                              printf("\n\tEnter Location      :\t");

                              scanf("%[^\n]s",s.location);



        fflush(stdin);

                              printf("\n\tEnter PropertyType  :\t");

                              scanf("%[^\n]s",s.home);



                              fflush(stdin);

                              printf("\n\tEnter Room Type     :\t");

                              scanf("%[^\n]s",s.room);



                              printf("\n\tEnter Home Situation:\t");

                              scanf("%s",s.homenow);



                              fflush(stdin);

        printf("\n\tEnter Size(sq)      :\t");

                              scanf("%[^\n]s",s.size);



        fflush(stdin);

        printf("\n\tEnter Price         :\t");

                              scanf("%[^\n]s",s.money);



                              fwrite(&s,sizeof(s),1,f);

                              fflush(stdin);

                              printf("\n\n\t Record saved successfully!!");

                              printf("\n\n\t Press --> ESC key to exit\n\n\tPress --> ENTER key to add another details: \n");



                              test=getche();

                              if(test==27)

                                             break;

               }



               fclose(f);

    getch();

}



/*---------------------------------------------------------------------------------------------*/

void list()

{

               FILE *f;

               int i;

    int row;

               if((f=fopen("details.txt","r+"))==NULL)

                              exit(0);



               system("cls");

    printf("\n\n\t\t\t\t\t**************** PROPERTY  LIST *************** ");

        //title();

    printf("\n\n\n\n");

               printf("\tPId:");

               printf("\tLOCATION ");

               printf("\t\tPROPERTY TYPE ");

               printf("\t\tROOM TYPE ");

               printf("\tHOMENOW ");

    printf("\tSIZE ");

               printf("\t\tPRICE ");

               printf("\n\n");



               for(i=0;i<140;i++)

               printf("-");

    printf("\n");



               while(fread(&s,sizeof(s),1,f)==1)

               {

                              printf("\n\n\n\t%s\t%s\t\t\t%s\t\t\t%s\t\t%s\t\t%s\t%s ",s.cno,s.location,s.home,s.room,s.homenow,s.size,s.money);



               }



               printf("\n\n");

               for(i=0;i<140;i++)

               printf("-");

    printf("\n\n\n\t");

               fclose(f);

               getch();

}



/*---------------------------------------------------------------------------------------------*/

void search()

{

    FILE *f;

               char cno[20];

               int flag=1;

               //title();

               f=fopen("details.txt","r+");

               system("cls");



               if(f==0)

               exit(0);

               fflush(stdin);

    printf("\n\n\n\tSEARCH RECORD");

    printf("\n\t******************************************");

               printf("\n\n\n\tEnter Property Id  to Search its Details: \n");

               scanf("%s",cno);

               while(fread(&s,sizeof(s),1,f)==1)

               {

            if(strcmp(s.cno,cno)==0)

            {

                flag=0;

                printf("\n\n\tRecord Found\n ");

                printf("\n\tPId           :\t%s",s.cno);

                printf("\n\tLocation      :\t%s",s.location);

                printf("\n\tPropertyType  :\t%s",s.home);

                printf("\n\tRoomType      :\t%s",s.room);

                printf("\n\tHomeSituation :\t%s",s.homenow);

                printf("\n\tSize(sq)      :\t%s",s.size);

                printf("\n\tPrice         :\t%s",s.money);



                flag=0;

                break;

            }



               }

               if(flag==1){

    printf("\n\n\tRequested Property could not be found!");



                       }



               else

               getch();

               fclose(f);

}

/*--------------------------------------------------------------------------------------------*/

void cancel()

{

        int n;

        int choice;

        char cno[20];

        enum state currentwindow=main_menu;

        FILE *f,*f1;

        system("cls");

        //title();

        int i=0;

        printf("\n\n\n\tDELETE RECORD");

        printf("\n\t******************************************");

        printf("\n\n\n\tEnter Property Id you want to delete: ");

        scanf("%s",cno);



        f=fopen("details.txt","r");

        int flag =1;

        while(fread(&s,sizeof(s),1,f)==1)

        {

                if(strcmp(s.cno,cno) == 0)

                {

                        flag=0;

                        printf("\n\n\tRecord Found \n ");

                        printf("\n\n\tPId         :\t%s",s.cno);

                        printf("\n\tLocation      :\t%s",s.location);

                        printf("\n\tPropertyType  :\t%s",s.home);

                        printf("\n\tRoomType      :\t%s",s.room);

                        printf("\n\tHomeSituation :\t%s",s.homenow);

                        printf("\n\tSize(sq)      :\t%s",s.size);

                        printf("\n\tPrice         :\t%s",s.money);

                        flag=0;

                        break;



                }//end if



        }//end while



        if (flag==1)

        {

                printf("\n\t Record Not found");

                getch();

                fclose(f);

                return;

        }//

        printf("\n\n\n\tAre you Sure? You want to Delete it y/n: \n\t");

        choice=getch();

        if(choice=='y' || choice=='Y')

        {



                rewind(f);

                f1=fopen("replace.txt","w+");

                while(fread(&s,sizeof(s),1,f)==1)

                {

                        if(strcmp(s.cno,cno) != 0)

                        {

                                fwrite(&s,sizeof(s),1,f1);

                        }//end if



                }//end while

                fclose(f);

                fclose(f1);



                remove("details.txt");

                rename("replace.txt","details.txt");

                printf("\n\n\tThe Record has been Deleted Successfully!!!");

                getch();

         }

         else if(choice=='n' || choice=='N')

         {

                currentwindow=main_menu;



         }



}//

/*------------------------------------------------------------------------------------------*/

void book()

{

    FILE *f,*f2;

               char cno[20];

               char last_cno[20];

    char name[20];

               int flag=1;

               char choice;

    int b;

    int valid=0;

               f=fopen("details.txt","r+");

               //f2=fopen("tempr.txt","a+");

               system("cls");



               if(f==0)

                              exit(0);



        fflush(stdin);

        printf("\n\n\n\tBOOK PROPERTY");

        printf("\n\t******************************************");

        printf("\n\n\n\tEnter Property Id you want to Book: \n\t");

        scanf("%s",cno);



        while(fread(&s,sizeof(s),1,f)==1)

        {

            if(strcmp(s.cno,cno)==0)

            {

                flag=0;

                printf("\n\n\tRecord Found \n ");

                printf("\n\n\tPId         :\t%s",s.cno);

                printf("\n\tLocation      :\t%s",s.location);

                printf("\n\tPropertyType  :\t%s",s.home);

                printf("\n\tRoomType      :\t%s",s.room);

                printf("\n\tHomeSituation :\t%s",s.homenow);

                printf("\n\tSize(Sq)      :\t%s",s.size);

                printf("\n\tPrice         :\t%s",s.money);



            }//if



         }//while

         if(flag==1)

        {

            printf("\n\n\tRequested Property Id could not be found!");

            getch();

            fclose(f);

            return;

        }



        fflush(stdin);

        printf("\n\n\tWould You Like to Confirm Booking y/n..?\n\t");

        choice=getch();

        if(choice=='y' ||choice=='Y')

        {



                    f2 = fopen("tempr.txt","r");

                    while(fread(&s,sizeof(s),1,f2)==1)

                    {

                                if(strcmp(s.cno,cno) == 0)

                                {



                                            printf("\n\tSORRY!! This Property has already booked");

                                            fclose(f2);

                                            return;

                                }



                    }

                    fclose(f2);

                    f2=fopen("tempr.txt","a+");

                    rewind(f);

                    while(fread(&s,sizeof(s),1,f)==1)

                    {

                            if(strcmp(s.cno,cno) == 0)

                            {

                                    fwrite(&s,sizeof(s),1,f2);



                            }//end if



                    }//end while

                    printf("\n\n\tThe record has been booked Successfully!!!!");

                    fclose(f);

                    fclose(f2);

                    getch();

                                             }

                                             else if(choice='n' || choice=='N')

            {

                    currentwindow=login_system;

                    //return;

            }

}

/*--------------------------------------------------------------------------------------------*/

void view_booking()

{



        FILE *f2;

        char last_cno[20];

        int i;

        int row;



        if((f2=fopen("tempr.txt","r+"))==NULL)

                              exit(0);

        system("cls");

        printf("\n\n\tBOOKED PROPERTY");

        printf("\n\t******************************* ");

        //title();

        printf("\n\n\n");

        printf("\t\tThe booked Property Id: ");

        while(fread(&s,sizeof(s),1,f2)==1)

        {

            printf("\n\n\t\t%s",s.cno);

        }

        printf("\n\n");

        fclose(f2);

        getch();

}



/*--------------------------------------------------------------------------------------------*/

void logout()

{

        if(strcmp(current_client,"\0")==0)

        {

                printf("\n\n\n\n\t\t\t\t\t\t\tYou must be logged in to logout\n\n\t\t\t\t\t\t\t");

                strcpy(current_client,"\0");

                system("PAUSE");

                currentwindow=main_menu;

                return;



        }

        printf("\n\n\t\t\t\t\t\t\tYou have been successfully logged out\n");

}

/*--------------------------------------------------------------------------------------------*/

void exit_system()

{

    system("COLOR 0F");

    printf("\n\n\n\n\t\t\t\t\t\t\t\tExiting...\n\n\n\t\t\t\t\t\t\t\tTHANKYOU !!!\n\n\t\t\t\t\t\t\t\tHAVE A NICE DAY...\n\n\n\n\t\t\t\t\t\t\t\tPress -> ENTER to exit");

    char exitprog;

    fflush(stdin);

    scanf("%c",&exitprog);



}
