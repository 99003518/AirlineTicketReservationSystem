#include<airline_operations.h>

typedef struct{
	char name[50];
	int flight_num;
	char class_pref[20];
	int num_of_seats;
}pd;




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
	scanf("%s", &uname);
	printf(" \n                        PASSWORD:-");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	//char code=pword;
	i=0;
	int x = userLogin (uname,pword);
	if (x==1) {
	//scanf("%s",&pword);

	printf("  \n\n\n       WELCOME TO OUR SYSTEM !! YOUR LOGIN IS SUCCESSFUL");
	printf("\n\n\n\t\t\t\tPress Enter key to continue...");
	getch();//holds the screen
	break;
	}
	else
	{
		printf("\n        SORRY !!!!  LOGIN IS UNSUCCESSFUL");
		a++;

		getch();//holds the screen
		system("cls");
	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");

		getch ();


		}
		system("cls");
}

int userLogin (char uname [10],char pword[10]){
    if(strcmp(uname,"user")==0 && strcmp(pword,"pass")==0)
	{   return 1;
	}
	else {
        return 0;
	}
}


