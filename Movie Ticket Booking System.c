#include <stdio.h>
#include <stdlib.h>

void otherNmbr();
void ErrorPsw();
void user();
void otherNmbr2();
void editmvimnsp();
void editmviup();
void editmvi();
void upcomingmv();
void MnSpMvi();
void moviesuser();
void movies();
void addorremve();
void Adminlog();
void admin();
void UsrOthrNm();
void bookings();
void bookread();

int main()
{

int s1;
system("cls");
printf("|============================================================|\n");
printf("|                   WELCOME TO KAU MOVIES                    |\n");
printf("|============================================================|\n");
printf("|                                                            |\n");
printf("|      [1]Admin                               [2]User        |\n");
printf("|                                                            |\n");
printf("|============================================================|\n");
printf("                Press [1] or [2] for Select:");
scanf(" %d",&s1);



if(s1==1)
	{
		Adminlog();

	}
else
	{
		if(s1==2)
			{
			user();
			}
		else
			{
			otherNmbr();
			}
	}


return 0;
}

void otherNmbr()

{
int gbck;

system("cls");
printf("|========================================================|\n");
printf("|                                                        |\n");
printf("|               PLEASE ENTER CORRECT NUMBER!             |\n");
printf("|                                                        |\n");
printf("|========================================================|\n");
printf("\n");
printf("	           Press [1] to go Back: ");
scanf(" %d",&gbck);

if(gbck==1)
    main();
else
    otherNmbr();


}

void user()

{
system("cls");
int usrchoi;

printf("|============================================================|\n");
printf("|                      Hello User                            |\n");
printf("|============================================================|\n");
printf("|                                                            |\n");
printf("|          [1]Book a Movie                                   |\n");
printf("|          [2]Upcoming Movie                                 |\n");
printf("|          [3]Monthly Special movie                          |\n");
printf("|          [4]Exit to main menu                              |\n");
printf("|                                                            |\n");
printf("|============================================================|\n");
printf("            Enter your Choice:");
scanf("%d",&usrchoi);
switch(usrchoi)

{
case 1:moviesuser();
    break;
case 2:upcomingmv();
        break;
case 3:MnSpMvi();
        break;
case 4:main();
    break;
default:UsrOthrNm();
}

}

void UsrOthrNm()
{


int gbck;

system("cls");
printf("|========================================================|\n");
printf("|                                                        |\n");
printf("|               PLEASE ENTER CORRECT NUMBER!             |\n");
printf("|                                                        |\n");
printf("|========================================================|\n");
printf("\n");
printf("  	           Press [1] to go Back: ");
scanf(" %d",&gbck);

if(gbck==1)
    user();
else
    UsrOthrNm();
}

void Adminlog()
{
int psw;
system("cls");
printf("|============================================================|\n");
printf("|                  Admin Login                                |\n");
printf("|============================================================|\n");
printf("\n");
printf("               Please Enter your password: ");
scanf("%d",&psw);

if(psw==123)
	{
		admin();
	}
else	{
		ErrorPsw();
	}

}

void ErrorPsw()

{
system("cls");

int cho1pswerr;


system("cls");
printf("|============================================================|\n");
printf("|                 Incorrect password!                        |\n");
printf("|                                                            |\n");
printf("|     [1]Try again                       [2]Exit             |\n");
printf("|                                                            |\n");
printf("|============================================================|\n");
printf("                 Please Enter [1] or [2]: ");

scanf("%d",&cho1pswerr);

if(cho1pswerr==1)
	{
		Adminlog();
	}
else
	{
		if(cho1pswerr==2)
			{
				main();
			}
		else
			{
              otherNmbr2();
			}
	}

}
void admin()
{

system("cls");
int cho;

printf("|============================================================|\n");
printf("|                      Hello KRU                             |\n");
printf("|============================================================|\n");
printf("|                                                            |\n");
printf("|          [1]Bookings                                       |\n");
printf("|          [2]Edit Movies                                    |\n");
printf("|          [3]Exit to main menu                              |\n");
printf("|============================================================|\n");
printf("            Enter your Choice:"                                  );
scanf("%d",&cho);

switch (cho)
{


    case 1:bookread();
    break;
    case 2: addorremve();
    break;
    case 3:main();
    default:admin();
}

}


void otherNmbr2()

{
    int wrng;
system("cls");
printf("|=================================================================|\n");
printf("|              Please Enter Correct Number !                      |\n");
printf("|=================================================================|\n");
printf("\n");
printf("               Press [1] to continue\n");
scanf("%d",&wrng);
if(wrng==1)
        {
            ErrorPsw();
        }
else
        {
            otherNmbr2();
        }

}

void addorremve()

{
system("cls");

int choi;

printf("|============================================================|\n");
printf("|                      ADD OR REMOVE MOVIES                  |\n");
printf("|============================================================|\n");
printf("|                                                            |\n");
printf("|          [1]Movies                                         |\n");
printf("|          [2]Upcoming Movies                                |\n");
printf("|          [3]Monthly Special                                |\n");
printf("|          [4]Exit to Admin page                             |\n");
printf("|                                                            |\n");
printf("|============================================================|\n");
printf("            Enter your Choice:  "                                 );

scanf("%d",&choi);
switch (choi)
	{
		case 1:editmvi();
		break;
		case 2:editmviup();
		break;
		case 3:editmvimnsp();
		break;
		case 4:admin();
		break;
		default:addorremve();
	}


}

void movies()

{
int i=1;
int ed;
char names[30];
system("cls");

FILE *mvi;
mvi=fopen("C:\\Users\\DarkShadow\\Desktop\\Project 11223\\data files\\Movies.txt","r");

printf("|============================================================|\n");
printf("|                      ADD OR REMOVE MOVIES                  |\n");
printf("|============================================================|\n");
printf("\n");
printf("|  Movies Currently Playing:                                 |\n");
printf("\n");
printf("|           Movie               Time                         |\n");
for (i=1;i<=3;i++)
{

	fgets(names,30,mvi);
	printf("|   Movie %d ",i);
	puts(names);
}

printf("|============================================================|\n");
fclose(mvi);
printf("Press [1]| to edit movies\n");
scanf("%d",&ed);
if("ed==1")
{
   // editmvi();
}
else{
    movies();
}
}

void moviesuser()

{
int i=1;
int j;
char names[30];
system("cls");

FILE *mvi;
mvi=fopen("C:\\data files\\Movies.txt","r");

printf("|============================================================|\n");
printf("|                         Movies                             |\n");
printf("|============================================================|\n");
printf("|                                                            |\n");
printf("|  Movies Currently Playing:                                 |\n");
printf("|                                                            |\n");
printf("|               Name            Time                         |\n");
printf("|------------------------------------------------------------|\n");

for (i=1;i<=3;i++)
{

	fgets(names,30,mvi);
printf("    Movie [%d] ",i);
	puts(names);
}
printf("\n");
fclose(mvi);
printf("|------------------------------------------------------------|\n");
printf("|Press [1] to Go back:                                       |\n");
printf("|Press [2] to Book the Movie:                                |\n");
printf("|Press [3] to Edit(Admin only):                              |\n");
printf("|------------------------------------------------------------|\n");
printf("              Enter the Number: ");
scanf("%d",&j);
switch(j)
{
    case 1:user();
        break;
    case 2:bookings();
        break;
    case 3:Adminlog();
        break;
        default:main();
}
}

void MnSpMvi()
{
int j;
int i=1;
char names[30];
system("cls");

FILE *upmvi;
upmvi=fopen("C\\data files\\Monthly_Special.txt","r");

printf("|============================================================|\n");
printf("|                     Month Special                          |\n");
printf("|============================================================|\n");
printf("|                                                            |\n");
printf("\n");
printf("            Name                    Month                |\n");
printf("\n");
	fgets(names,30,upmvi);
	printf("|   Movie %d ",i);
	puts(names);


printf("|============================================================|\n");
fclose(upmvi);
printf("                 Press [1] to go back: ");
scanf("%d",&j);


switch(j)
{
    case 1:user();
        break;
    default:MnSpMvi();
        break;
}
}

void upcomingmv()
{
int j;
int i=1;
char names[30];
system("cls");

FILE *upmvi;
upmvi=fopen("C:\\data files\\Upcoming_Movies.txt","r");

printf("|============================================================|\n");
printf("|                    Upcoming Movies                         |\n");
printf("|============================================================|\n");
printf("|                                                            |\n");
printf("|            Name                Time                        |\n");
printf("\n");

for (i=1;i<=2;i++)
{

	fgets(names,30,upmvi);
	printf("   Movie %d ",i);
	puts(names);
}

printf("|============================================================|\n");
fclose(upmvi);

printf("               Press [1] to go back: ");

scanf("%d",&j);
switch(j)
{
    case 1:user();
        break;
    default:upcomingmv();


}
}

void editmvi()

{
    system("cls");
char newm[30];
int i;

    FILE *mvi;
mvi=fopen("C:\\data files\\Movies.txt","w+");
rewind(mvi);
printf("\n");
printf("|============================================================|\n");
printf("|                     Edit Movies                            |\n");
printf("|============================================================|\n");
printf("\n");
printf("              Enter New Movies and Timeslots:                 \n");
printf("\n");
printf("---------Please Enter Name and Time Seperatlely---------------\n");
printf("\n");
printf("  Name            Time                                        \n");


for (i=1;i<=3;i++)
{

	gets(newm);
	fputs(newm,mvi);
	fprintf(mvi,"\n");

}
printf("\n");
printf("|============================================================|\n");
fclose(mvi);
printf("         Press [1] to Re enter/Press [2] to Go back");
scanf("%d",&i);
switch (i){
    case 1:
        system("cls");
        editmvi();
    break;
    case 2:addorremve();
    default:main();

}
}

void editmviup()
{


system("cls");
char newm[30];
int i;

    FILE *mvi;
mvi=fopen("C:\\data files\\Upcoming_Movies.txt","w+");
rewind(mvi);
printf("\n");
printf("|============================================================|\n");
printf("|                     Edit Movies                            |\n");
printf("|============================================================|\n");
printf("\n");
printf("              Enter New Movies and Timeslots:                 \n");
printf("\n");
printf("---------Please Enter Name and Time Seperatlely---------------\n");
printf("\n");
printf("  Name            Time                                        \n");


for (i=1;i<=3;i++)
{

	gets(newm);
	fputs(newm,mvi);
	fprintf(mvi,"\n");

}
printf("\n");
printf("|============================================================|\n");
fclose(mvi);
printf("         Press [1] to Re enter/Press [2] to Go back: ");
scanf("%d",&i);
switch (i){
    case 1:
        system("cls");
        editmviup();
    break;
    case 2:addorremve();
    default:main();

}
}

void editmvimnsp()

{
system("cls");
char newm[30];
int i=0;

    FILE *mvi;
mvi=fopen("C:\\data files\\Monthly_Special.txt","w+");
rewind(mvi);
printf("\n");
printf("|============================================================|\n");
printf("|                     Edit Movies                            |\n");
printf("|============================================================|\n");
printf("\n");
printf("              Enter New Movies and Timeslots:                 \n");
printf("\n");
printf("---------Please Enter Name and Time Seperatlely---------------\n");
printf("\n");
printf("  Name            Time                                        \n");


while (i<2)
{
    printf(" ");
	gets(newm);
	fputs(newm,mvi);
	fprintf(mvi,"\n");
    ++i;
}
printf("\n");
printf("|============================================================|\n");
fclose(mvi);
printf("         Press [1] to Re enter/Press [2] to Go back");
scanf("%d",&i);
switch (i){
    case 1:
        system("cls");
        editmvimnsp();
    break;
    case 2:addorremve();
    break;
    default:main();


}
}

void bookings()
{

int mvinm;
char name[100];

struct book{
		int seats;
		int nicno;
	   }customers;

    FILE *mvi;
mvi=fopen("C:\\data files\\Bookings.txt","a+");

printf("\n");
printf("|============================================================|\n");
printf("|                     Bookings                               |\n");
printf("|============================================================|\n");
printf("\n");
printf("|Enter Movie you want to book[1][2][3]:                      |\n");
scanf("%d",&mvinm);
printf("Enter your name:");
scanf(" %s",name);
printf("How many seats:");
scanf("%d",&customers.seats);
printf("Payment info:");
printf("Card no:");
printf("\n");
scanf("%d",&customers.nicno);

fprintf(mvi,"%d\nCustomer name = ",mvinm);
fputs(name,mvi);
fprintf(mvi,"\n");
fprintf(mvi,"Customer seats = %d \n",customers.seats);
fprintf(mvi,"Customer NIC no = %d",customers.nicno);
fprintf(mvi,"\n");
printf("\n");
printf("|                 Your data is stored                        |\n");
printf("|                Thank you come again !                      |\n");
printf("|============================================================|\n");
fclose(mvi);
printf("Press [1] to book again/Press [2] to go back: ");
scanf("%d",&mvinm);

switch(mvinm)
{
    case 1:bookings();
    break;
    case 2:user();
    break;
    default:main();
}
}

void bookread()
{
    system("cls");
int k=0;
char c;


    FILE *mvi;
mvi=fopen("C:\\data files\\Bookings.txt","r");

printf("|============================================================|\n");
printf("|                     Bookings                               |\n");
printf("|============================================================|\n");
printf("\n");
printf("|-----------------------All bookings-------------------------|\n");
while(1){
c=fgetc(mvi);
if(feof(mvi)){break;
}
printf("%c",c);

}
printf("\n|============================================================|\n");
fclose(mvi);
printf("\n            Press [1] to go back: ");
scanf("%d",&k);
if(k==1)
{
   admin();
}
else{
    system("cls");
    main();
}
}


