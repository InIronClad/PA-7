/*******************************************************************************************
* Programmer: Robert Crismon                                                               *
* Class: CptS 121, Spring  2016; Lab Section 3                                             *
* Programming Assignment: PA 7                                                             *
* Date: March, 2016																		   *
* Description: This program generates math problems, with 5 levels of difficulty.		   *
* Collaboration:																		   *
*******************************************************************************************/

#include "PA_7.h"

int main(void)
{
	FILE *outfile_math_stats = fopen("math.dat", "w");

	srand((unsigned int)time(NULL));

	struct stats user_stats = { '\0', 0 };
	int interface_option = 0, difficulty = 0;
	char initials = '\0';

	do
	{

		interface_option = interface_menu();
		
		if (interface_option = 1)
		{
			interface_info();
			interface_option = 0;
			system("pause");
			system("cls");
		}
		else if (interface_option = 2)
		{
			enter_initials();
			interface_option = 0;
		}
		
		else if (interface_option = 3)
		{
			difficulty_level();
			interface_option = 0;
		}
		
		else if (interface_option = 4)
		{
			
			interface_option = 0;
		}
		
		else
		{
			break;
		}
	} while (interface_option != 5);

	return 0;
}