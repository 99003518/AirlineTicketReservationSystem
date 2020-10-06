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
	std::printf("\t\t=================================================\n\n\n");


	std::printf(" \n Press any key to continue:");

	//getch();
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
			//getch();
			break;
		case 3:
			return(0);
		default:
			printf("\nInvalid choice");
	}
	goto start;           //repeats the start condition
	return(0);
}
