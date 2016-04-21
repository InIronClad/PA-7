/*******************************************************************************************
* Programmer: Robert Crismon                                                               *
* Class: CptS 121, Spring  2016; Lab Section 3                                             *
* Programming Assignment: PA 7                                                             *
* Date: March, 2016																		   *
* Description: This program generates math problems, with 5 levels of difficulty.		   *
* Collaboration:																		   *
*******************************************************************************************/

#include "PA_7.h"

int interface_menu(void)
{
	int interface_option = 0;

	printf("Welcome to the Math Learning Program!\n");
	printf("Options:\n1. How to use this program.\n");
	printf("2. Enter your initials.\n3. Select difficulty.\n");
	printf("4. Start a new sequence of problems.\n5. Save & Quit.\n");

	scanf("%d", &interface_option);

	return interface_option;
}

void interface_info(void)
{
	printf("How to use the Math Learning Program (MLP):\n");
}

void enter_initials(void)
{
	char initials = '\0';

	printf("Enter your initials:\n");
	scanf("%s", &initials);
}

void difficulty_level(void)
{
	int difficulty = 0;
	printf("Select difficulty level (1-5):\n");
	scanf("%d", &difficulty);
}