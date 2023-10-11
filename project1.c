#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>

struct Flight_Booking
{
	
   char passport_no[30],email[30];
   char bording[30],destination[30];
   char name[20],phoneNo[30];
   char date[20];
   int  age,price;   
}b;
void menu();
void Booking();
void Find_ticket();
void View_all_icket();
void Cancel_ticket();

int main()
{    
    
	system("COLOR 0E");
	char character;
	printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                  WELCOME                  =");
    printf("\n\t\t\t        =                     TO                    =");
    printf("\n\t\t\t        =               Airline Ticket              =");
    printf("\n\t\t\t        =               Booking  SYSTEM             =");
    printf("\n\t\t\t        =                                           =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    
    printf("\n\t\t\t Press any key to continue :");
   // Beep(300,2000);
    getch();
    
    system("cls");
    menu();
    return 0;
}
    void menu()
	{
	
    int ch;
	do{
		    
	system("COLOR F5");

    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =      1.            Booking                =");
    printf("\n\t\t\t        =      2.            Find Ticket            =");
   	printf("\n\t\t\t        =      3.            View All Ticket        =");
 	printf("\n\t\t\t        =      4.            Cancel Ticket          =");
   	printf("\n\t\t\t        =      5.            Exit                   =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

   	printf("\n\t\t\t\tEnter your Choice From (1-5):");
   	scanf("%d",&ch);
   	system("cls");

	   
   	switch(ch)
   	{
   		case 1:
   	    printf("\n\t\t\t  ##-##-##-##-##-##-##-##-##-##-##-##-##-##-##-##-##-##-##\n");
		printf("\t\t\t\t\tENTER YOUR DETAILS FOR BOOKING:");
   	    printf("\n\t\t\t  ##-##-##-##-##-##-##-##-##-##-##-##-##-##-##-##-##-##-##\n");
   		Booking();
   
   		break;
  		case 2:
  		printf("\n\t\t\t  ##-##-##-##-##-##-##-##-##-##-##-##-##-##-##-##-##-##-##\n");
		printf("\t\t\t\t\t\t FIND YOUR TICKET");
   	    printf("\n\t\t\t  ##-##-##-##-##-##-##-##-##-##-##-##-##-##-##-##-##-##-##\n");

 		Find_ticket();
		break;
  		case 3:
  		printf("\n\t\t\t  ##-##-##-##-##-##-##-##-##-##-##-##-##-##-##-##-##-##-##\n");
		printf("\t\t\t\t\t\t BOOKED TICKET");
   	    printf("\n\t\t\t  ##-##-##-##-##-##-##-##-##-##-##-##-##-##-##-##-##-##-##\n");
  		printf("\nPassportNo\tname\tage\tphoneNo\t\tEmailId\t\tdate\t\tbording\t\tdestination");
  		printf("\n------------------------------------------------------------------------------------------------------------");
  		View_all_icket();

   		break;
   		case 4:
   		printf("\n\t\t\t  ##-##-##-##-##-##-##-##-##-##-##-##-##-##-##-##-##-##-##\n");
		printf("\t\t\t\t\t\t CANCEL YOUR TICKET");
   	    printf("\n\t\t\t  ##-##-##-##-##-##-##-##-##-##-##-##-##-##-##-##-##-##-##\n");
   		Cancel_ticket();
   		break;
        case 5:
        exit(0);	
        break;
   		default:
   		printf("\n\t\t\t\tEnter the number from(1-5) :");	

   		break;
	}
}while(ch!=5);

}
void Booking()
{
	int m;
	system("COLOR E1");
	struct Flight_Booking b;
	FILE *fp;
	fp=fopen("flight_ticket.txt","a");
    printf("\n\t\t\t\tEnter Passport number :  ");
	scanf("%s",&b.passport_no);
	printf("\n\t\t\t\tEnter  passenger name :  ");
	scanf("%s",&b.name);
	printf("\n\t\t\t\tEnter  Age :  ");
	scanf("%d",&b.age);
	printf("\n\t\t\t\tEnter  Phone Number :  ");
	scanf("%s",&b.phoneNo);
	printf("\n\t\t\t\tEnter Email Id :  ");
	scanf("%s",&b.email);
    printf("\n\t\t\t\tEnter  Date in format(dd/mm/yyyy):  ");
	scanf("%s",b.date);
	printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
	printf("\t\t\t\t Enter the Bording and Destination For your Flight");
	printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    
	printf("\n\t\t\t\tBoarding from :");
    scanf("%s",&b.bording);
    printf("\n\t\t\t\tDestination :");
    scanf("%s",&b.destination);
    system("cls");

    int c,s;
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\t\t\t\tEnter your Class 1.Economy  2.Business\n");
    printf("\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\t\t\t\tEnter your choice(1-2):");
    scanf("%d",&c);
    if(c==1){
	
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
	printf("\t\t\t\t\tAvailable Flight");
	printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t\t\t Flight Nmae \t Arrival \t Duration \t Price ");
    printf("\n\t\t\t  --------------------------------------------------------\n");
    printf("\n\t\t\t1. Air India \t 20:00-22:10 \t 02h 10m \t 4,800");
    printf("\n\t\t\t  _________________________________________________________\n");
    printf("\n\t\t\t2. Air India \t 10:00-12:35 \t 02h 35m \t 5,800");
    printf("\n\t\t\t  _________________________________________________________\n");
    printf("\n\t\t\t3. Indigo \t 11:55-13:55 \t 02h 00m \t 5,799");
    printf("\n\t\t\t  _________________________________________________________\n");
    printf("\n\t\t\t4. Indigo \t 17:00-19:05 \t 02h 05m \t 4,799");
    printf("\n\t\t\t  _________________________________________________________\n");
    printf("\n\t\t\t5. vistara \t 15:30-17:40 \t 02h 10m \t 5,010");
    printf("\n\t\t\t  _________________________________________________________\n");
    //printf("\n\t\t\tEnter the Price of Ticket for which you want to select the flight :");
    //scanf("%d",&b.price);
    printf("\n\t\t\tSelect your Flight from(1-6) :");
    scanf("%d",&s);
    
        

    switch(s)
    {
    	case 1:
    	if(fp == NULL)
	{
		printf("FIle not Found");
	}
	else
	{
	//	fprintf(fp,"\nPassport \t\t Passenger name \t Age \t\t Phone_no. \t Email Id \t DOJ \t Bording \t Destination\n ");
		fprintf(fp,"\n%s \t %s \t\t %d \t %s \t %s \t %s \t %s \t %s\n",b.passport_no,b.name,b.age,b.phoneNo,b.email,b.date,b.bording,b.destination);
		//fprintf(fp,"Flight Nmae \t Arrival \t Duration \t Price\n ");
        //fprintf(fp,"Air India \t 20:00-22:10 \t 02h 10m \t 4,800");
        printf("\n\t\t\tCongratulations,Booking successfull");

	}
		printf("\n");
	fclose(fp);
    break;
    case 2:
    	if(fp == NULL)
	{
		printf("FIle not Found");
	}
	else
	{
		fprintf(fp,"\n%s \t %s \t\t %d \t %s \t %s \t %s \t %s \t %s\n",b.passport_no,b.name,b.age,b.phoneNo,b.email,b.date,b.bording,b.destination);
        printf("\n\t\t\tCongratulations,Booking successfull");

	}
		printf("\n");
	fclose(fp);
    break;
    case 3:
    	if(fp == NULL)
	{
		printf("FIle not Found");
	}
	else
	{
		fprintf(fp,"\n%s \t %s \t\t %d \t %s \t %s \t %s \t %s \t %s\n",b.passport_no,b.name,b.age,b.phoneNo,b.email,b.date,b.bording,b.destination);
        printf("\n\t\t\tCongratulations,Booking successfull");

	}
		printf("\n");
	fclose(fp);
    break;
     case 4:
    	if(fp == NULL)
	{
		printf("FIle not Found");
	}
	else
	{
		fprintf(fp,"\n%s \t %s \t\t %d \t %s \t %s \t %s \t %s \t %s\n",b.passport_no,b.name,b.age,b.phoneNo,b.email,b.date,b.bording,b.destination);
        printf("\n\t\t\tCongratulations,Booking successfull");

	}
		printf("\n");
	fclose(fp);
    break;
     case 5:
    	if(fp == NULL)
	{
		printf("FIle not Found");
	}
	else
	{
		fprintf(fp,"\n%s \t %s \t\t %d \t %s \t %s \t %s \t %s \t %s\n",b.passport_no,b.name,b.age,b.phoneNo,b.email,b.date,b.bording,b.destination);
        printf("\n\t\t\tCongratulations,Booking successfull");

	}
		printf("\n");
	fclose(fp);
    break;
		}
	}
	else if(c==2)
	{
	printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
	printf("\t\t\t\tAvailable Flight");
	printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t\t\t Flight Nmae \t Arrival \t Duration \t Price ");
    printf("\n\t\t\t  --------------------------------------------------------\n");
    printf("\n\t\t\t1.Air India \t 06:00-08:00 \t 02h 00m \t 13,182");
    printf("\n\t\t\t  _________________________________________________________\n");
    printf("\n\t\t\t2.TruJet \t 18:55-21:15 \t 02h 20m \t 10,078");
    printf("\n\t\t\t  _________________________________________________________\n");
    printf("\n\t\t\t3.Vistara \t 11:40-14:00 \t 02h 20m \t 12,422");
    printf("\n\t\t\t  _________________________________________________________\n");
   // printf("\n\t\t\tEnter the Price of Ticket for which you want to select the flight :");
    //scanf("%d",&b.price);
    printf("\n\t\t\tSelect your Flight from(1-3)");
    scanf("%d",&s);
    switch(s)
    {
    	case 1:
    	if(fp == NULL)
	{
		printf("FIle not Found");
	}
	else
	{
		fprintf(fp,"\n%s \t %s \t\t %d \t %s \t %s \t %s \t %s \t %s\n",b.passport_no,b.name,b.age,b.phoneNo,b.email,b.date,b.bording,b.destination);
        printf("\n\t\t\tCongratulations,Booking successfull");

	}
		printf("\n");
	fclose(fp);
    break;
    case 2:
    	if(fp == NULL)
	{
		printf("FIle not Found");
	}
	else
	{
		fprintf(fp,"\n%s \t %s \t\t %d \t %s \t %s \t %s \t %s \t %s\n",b.passport_no,b.name,b.age,b.phoneNo,b.email,b.date,b.bording,b.destination);
        printf("\n\t\t\tCongratulations,Booking successfull");

	}
		printf("\n");
	fclose(fp);
    break;
    case 3:
    	if(fp == NULL)
	{
		printf("FIle not Found");
	}
	else
	{
		fprintf(fp,"\n%s \t %s \t\t %d \t %s \t %s \t %s \t %s \t %s\n",b.passport_no,b.name,b.age,b.phoneNo,b.email,b.date,b.bording,b.destination);
        printf("\n\t\t\tCongratulations,Booking successfull");
	}
		printf("\n");
	fclose(fp);
    break;
	}
	}
 printf("\n\n\t\t\tEnter 1 to return to main menu and 2 to exit:");
    scanf("%d",&m);
    if (m==1)
    {
	system("cls");
    menu();
	}
    else{
	
    exit(0);
}

}
void Find_ticket()
{
int m;
system("COLOR B8");
struct Flight_Booking b;
	FILE *fp;
	int f=0;
	fp=fopen("flight_ticket.txt","r");
 	char pass[30];
	printf("\n\t\t\tEnter Passport No. :");
	scanf("%s",&pass);
while(fscanf(fp,"%s%s%d%s%s%s%s%s",&b.passport_no,&b.name,&b.age,&b.phoneNo,&b.email,&b.date,&b.bording,&b.destination) != EOF)
 if(!strcmp(b.passport_no,pass))
 {
	f++;
	printf("\nPassportNo\tname\tage\tphoneNo\t\tEmailId\t\tdate\t\tbording\t\tdestination");

  	printf("\n------------------------------------------------------------------------------------------------------------");
    printf("\n%s\t\t%s\t%d\t%s\t%s\t%s\t%s\t\t%s",b.passport_no,b.name,b.age,b.phoneNo,b.email,b.date,b.bording,b.destination);
  	printf("\n------------------------------------------------------------------------------------------------------------");

    break;
 }
 
if(f==0)
printf("\n\t\t\tDATA NOT FOUND");
 printf("\n\n\t\t\tEnter 1 to return to main menu and 2 to exit:");
    scanf("%d",&m);
    if (m==1)
    {
	system("cls");
    menu();
	}
    else{
	
    exit(0);
}
}

void View_all_icket()
{
	system("COLOR C0");
	int m;
	FILE *fp;
	fp=fopen("flight_ticket.txt","r");
	while(fscanf(fp,"%s%s%d%s%s%s%s%s",&b.passport_no,&b.name
		,&b.age,&b.phoneNo,&b.email,&b.date,&b.bording,&b.destination)!= EOF)
		{
		printf("\n%s\t\t%s\t%d\t%s\t%s\t%s\t%s\t\t%s",b.passport_no,b.name
		,b.age,b.phoneNo,b.email,b.date,b.bording,b.destination);
		printf("\n______________________________________________________________________________________________________________\n");

		}
		fclose(fp);
 printf("\n\n\t\t\tEnter 1 to return to main menu and 2 to exit:");
    scanf("%d",&m);
    if (m==1)
    {
	system("cls");
    menu();
	}
    else{
	
    exit(0);
}

}
void Cancel_ticket()
{
	system("COLOR 03");

	struct Flight_Booking b;
	FILE *fp,*fp1;
	int f=0;
	int m;
	char pass[30];
	fp=fopen("flight_ticket.txt","r");
    fp1=fopen("temp.txt","a");
	printf("\n\t\t\tEnter Passport No.  :");
	scanf("%s",&pass);
    while(fscanf(fp,"%s%s%d%s%s%s%s%s",&b.passport_no,&b.name,&b.age,&b.phoneNo,&b.email,&b.date,&b.bording,&b.destination) != EOF)
    {

    if(!strcmp(b.passport_no,pass))
    {
	f++;
	
	
     printf("\n\t\t\tRecord deleted successfully!\n");
	
    break;
    }
    else 
    {
    	fprintf(fp1,"\n%s\t\t%s\t%d\t%s\t%s\t%s\t%s\t\t%s",b.passport_no,b.name,b.age,b.phoneNo,b.email,b.date,b.bording,b.destination);	
	}
    }

fclose(fp);
fclose(fp1);
remove("flight_ticket.txt");
rename("temp.txt","flight_ticket.txt");
if(f==0){

printf("\n\n\t\t\tDATA NOT FOUND");
printf("\n\n\t\t\tEnter 1 to return to main menu and 2 to exit:");
    scanf("%d",&m);
    if (m==1)
    {
	system("cls");
    menu();
	}
    else{
	
    exit(0);
}
}
else{
	printf("\n\n\t\t\tEnter 1 to return to main menu and 2 to exit:");
    scanf("%d",&m);
    if (m==1)
    {
	system("cls");
    menu();
	}
    else{
	
    exit(0);
}
}
}
