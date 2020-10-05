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


/*********************************************MAIN()*************************************************/

int main()

{
		system("cls");
	printf("\t\t=================================================\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|           AIR TICKET RERS. SYSTEM             |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|               MSD AIRLINES                    |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t=================================================\n\n\n");


	printf(" \n Press any key to continue:");

	getch();
    system("cls");
	login();
	int menu_choice,choice_return;
	start:
	system("cls");
	printf("\n===========================================\n");
	printf("    AIR RESERVATION SYSTEM - MAIN MENU");
	printf("\n===========================================");
	printf("\n1>> Reserve A Ticket");
	printf("\n------------------------");
	printf("\n2>> View All Available Flights");
	printf("\n------------------------");
	printf("\n3>> Exit");
	printf("\n------------------------");
	printf("\n\n-->");
	scanf("%d",&menu_choice);
	switch(menu_choice)
	{
		case 1:
			reservation();		//The function reservation is called
			break;
		case 2:
			viewdetails();      //The func viewdetails is called
			printf("\n\nPress Enter key to go to Main Menu..");
			getch();
			break;
		case 3:
			return(0);
		default:
			printf("\nInvalid choice");
	}
	goto start;           //repeats the start condition
	return(0);
}
