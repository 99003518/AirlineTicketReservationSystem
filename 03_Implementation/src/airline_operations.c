#include<airline_operations.h>

typedef struct{
	char name[50];
	int flight_num;
	char class_pref[20];
	int num_of_seats;
}pd;

/*********************************************VIEWDETAILS()*************************************************/


void viewdetails(void)
{
	system("cls");
	//printf("------------------------------------------------------------------------------------------------------------");
	printf("                    FLIGHT CHART                                                           ");
	printf("\n----------------------------------------------------------------------------------------------------------");
	printf("\nFlt.No\tName\t\t\tDestinations\t\tCharges (First or Economical)\t\tTime\n");
	printf("------------------------------------------------------------------------------------------------------------");
	printf("\n1000\tMSD Express Jet\t\tKochi to Mangalore\t\tRs.5000\t\tRs.10000\t\t9am");
	printf("\n1001\tMSD Express Jet\t\tMangalore To Kochi\t\tRs.5000\t\tRs.10000\t\t12pm");
	printf("\n1002\tMSD Express Jet\t\tKochi To Mysore\t\t\tRs.4500\t\tRs.9000\t\t\t8am");
	printf("\n1003\tMSD Express Jet\t\tMysore To Kochi\t\t\tRs.4500\t\tRs.9000\t\t\t11am");
	printf("\n1004\tMSD Express Jet\t\tTrivandrum To Bangalore\t\tRs.4000\t\tRs.8000\t\t\t7am");
	printf("\n1005\tMSD Express Jet\t\tBangalore To Trivandrum\t\tRs.4000\t\tRs.8000\t\t\t9.30am");
    printf("\n1006\tMSD Express Jet\t\tTrivandrum To Chennai\t\tRs.3500\t\tRs.7000\t\t\t1pm");
    printf("\n1007\tMSD Express Jet\t\tChennai To Trivandrum\t\tRs.3500\t\tRs.7000\t\t\t4pm");
    printf("\n1008\tMSD Express Jet\t\tHyderabad To Mumbai\t\tRs.6000\t\tRs.12000\t\t3.35pm");
    printf("\n1009\tMSD Express Jet\t\tMumbai To Hyderabad\t\tRs.6000\t\tRs.12000\t\t4.15pm");

}

/******************************************RESERVATION FUNCTION()*************************************************/

void reservation(void)
{
	char confirm;            //character variable
	int i=0;
	float charges;
	pd passdetails;
	FILE *fp;
	fp=fopen("seats_reserved.txt","a");  //opens file in append mode
	system("cls");

	printf("\nEnter Your Name:> ");
	fflush(stdin);
	fgets(passdetails.name);
	printf("\nEnter Number of seats:> ");
	scanf("%d",&passdetails.num_of_seats);
	printf("\nClass(Economical/First):> ");
	fflush(stdin);
	fgets(passdetails.class_pref);
	printf("\n\n>>Press Enter To View Available Flights<< ");
	//getch();
	system("cls");
	viewdetails();
	printf("\n\nEnter flight number:> ");
	start1:
	scanf("%d",&passdetails.flight_num);
	if(passdetails.flight_num>=1000 && passdetails.flight_num<=1010)
	{
		charges=charge(passdetails.flight_num,passdetails.num_of_seats);
		printticket(passdetails.name,passdetails.num_of_seats,passdetails.class_pref,passdetails.flight_num,charges);
	}
	else
	{
		printf("\nInvalid flight Number! Enter again--> ");
		goto start1;
	}

	printf("\n\nConfirm Ticket (y/n):>");
	start:
	scanf(" %c",&confirm);
	if(confirm == 'y')
	{
		fprintf(fp,"%s\t\t%d\t\t%s\t\t%d\t\t%.2f\n",&passdetails.name,passdetails.num_of_seats,passdetails.class_pref,passdetails.flight_num,charges);
		printf("==================");
		printf("\n Reservation Done\n");
		printf("\n\n\n            THANK YOU FOR USING OUR SERVICE    ");
		printf("==================");
		printf("\n\nPress any key to go back to Main menu");
	}
	else
	{
		if(confirm=='n'){
			printf("\nReservation Not Done!\nPress any key to go back to  Main menu!");
		}
		else
		{
			printf("\nInvalid choice entered! Enter again-----> ");
			goto start;
		}
	}
	fclose(fp);
	//getch();
}


/*********************************************CHARGE()*************************************************/

float charge(int flight_num,int num_of_seats)
{int c ;
printf("\n\nEnter 0 for Economical Class , 1 for First Class :>");
scanf("%d",&c);
    if( c== 0){
		if (flight_num==1000)
	{
		return(5000.0*num_of_seats);
	}
	if (flight_num==1001)
	{
		return(5000.0*num_of_seats);
	}
	if (flight_num==1002)
	{
		return(4500.0*num_of_seats);
	}
	if (flight_num==1003)
	{
		return(4500.0*num_of_seats);
	}
	if (flight_num==1004)
	{
		return(4000.0*num_of_seats);
	}
	if (flight_num==1005)
	{
		return(4000.0*num_of_seats);
	}
	if (flight_num==1006)
	{
		return(3500.0*num_of_seats);
	}
	if (flight_num==1007)
	{
		return(3500.0*num_of_seats);
	}
	if (flight_num==1008)
	{
		return(6000.0*num_of_seats);
	}
	if (flight_num==1009)
	{
		return(6000.0*num_of_seats);
	} }
	else {
        if (flight_num==1000)
	{
		return(10000.0*num_of_seats);
	}
	if (flight_num==1001)
	{
		return(10000.0*num_of_seats);
	}
	if (flight_num==1002)
	{
		return(9000.0*num_of_seats);
	}
	if (flight_num==1003)
	{
		return(9000.0*num_of_seats);
	}
	if (flight_num==1004)
	{
		return(8000.0*num_of_seats);
	}
	if (flight_num==1005)
	{
		return(8000.0*num_of_seats);
	}
	if (flight_num==1006)
	{
		return(7000.0*num_of_seats);
	}
	if (flight_num==1007)
	{
		return(7000.0*num_of_seats);
	}
	if (flight_num==1008)
	{
		return(12000.0*num_of_seats);
	}
	if (flight_num==1009)
	{
		return(12000.0*num_of_seats);
    }
	}
}

/*********************************************PRINTTICKET()*************************************************/

void printticket(char name[],int num_of_seats,char class_pref[],int flight_num,float charges)
{
	system("cls");
	printf("-------------------\n");
	printf("\tTICKET\n");
	printf("-------------------\n\n");
	printf("Name:\t\t\t%s",name);
	printf("\nNumber Of Seats:\t%d",num_of_seats);
	printf("\nClass:\t\t\t%s",class_pref);
	printf("\nFlight Number:\t\t%d",flight_num);
	specificflight(flight_num);
	printf("\nCharges:\t\t%.2f",charges);
}

/*********************************************SPECIFICFLIGHT()*************************************************/

void specificflight(int flight_num)
{

	if (flight_num==1000)
	{
		printf("\nFlight:\t\t\tMSD Express Jet");
		printf("\nDestination:\t\tKochi To Mangalore");
		printf("\nDeparture:\t\t9am ");
	}
	if (flight_num==1001)
	{
		printf("\nFlight:\t\t\tMSD Express Jet");
		printf("\nDestination:\t\tMangalore To Kochi");
		printf("\nDeparture:\t\t12pm");
	}
	if (flight_num==1002)
	{
		printf("\nFlight:\t\t\tMSD Express Jet");
		printf("\nDestination:\t\tKochi To Mysore");
		printf("\nDeparture:\t\t8am");
	}
	if (flight_num==1003)
	{
		printf("\nFlight:\t\t\tMSD Express Jet");
		printf("\nDestination:\t\tMysore To Kochi");
		printf("\nDeparture:\t\t11am ");
	}
	if (flight_num==1004)
	{
		printf("\nFlight:\t\t\tMSD Express Jet");
		printf("\nDestination:\t\tTrivandrum to Bangalore");
		printf("\nDeparture:\t\t7am");
	}
	if (flight_num==1005)
	{
		printf("\nflight:\t\t\tMSD Express Jet");
		printf("\nDestination:\t\tBangalore to Trivandrum ");
		printf("\nDeparture:\t\t9.30am ");
	}
	if (flight_num==1006)
	{
		printf("\nflight:\t\t\tMSD Express Jet");
		printf("\nDestination:\t\tTrivandrum To Chennai");
		printf("\nDeparture:\t\t1pm ");
	}
	if (flight_num==1007)
	{
		printf("\nFlight:\t\t\tMSD Express Jet");
		printf("\n Destination:\t\tChennai To Trivandrum");
		printf("\nDeparture:\t\t4pm ");
	}
	if (flight_num==1008)
	{
		printf("\nflight:\t\t\tMSD Express Jet");
		printf("\nDestination:\t\tHyderabad To Mumbai");
		printf("\nDeparture:\t\t3.35pm ");
	}
	if (flight_num==1009)
	{
		printf("\nFlight:\t\t\tMSD Express Jet");
		printf("\nDestination:\t\tMumbai To Hyderabad");
		printf("\nDeparture:\t\t1.15 ");
	}
}

/*************************************************LOGIN PAGE*************************************/


void login()
{
	int a=0,i=0;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10]="user";
    char pass[10]="pass";
    do
{

    printf("\n  =======================  LOGIN FORM  =======================\n  ");
    printf(" \n                        USERNAME:-");
	scanf("%s", uname);
	printf(" \n                        PASSWORD:-");
	/*while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}*/
	pword[i]='\0';
	//char code=pword;
	i=0;
	int x = userLogin (uname,pword);
	if (x==1) {
	//scanf("%s",&pword);

	printf("  \n\n\n       WELCOME TO OUR SYSTEM !! YOUR LOGIN IS SUCCESSFUL");
	printf("\n\n\n\t\t\t\tPress Enter key to continue...");
	//getch();//holds the screen
	break;
	}
	else
	{
		printf("\n        SORRY !!!!  LOGIN IS UNSUCCESSFUL");
		a++;

		//getch();//holds the screen
		system("cls");
	}
}
	/*while(a<=2);
	if (a>2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");

		//getch ();


		}*/
		//system("cls");
}

void userLogin (char uname [10],char pword[10]){
    if(strcmp(uname,"user")==0 && strcmp(pword,"pass")==0)
	{   return 1;
	}
	else {
        return 0;
	}
}


