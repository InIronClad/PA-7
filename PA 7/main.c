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
	int interface_option = 0;

	interface_option = interface_menu();
	switch (interface_option)
	{
	case 1:
		interface_info();

	case 2:


	}
	return 0;
}