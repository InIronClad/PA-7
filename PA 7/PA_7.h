/*******************************************************************************************
* Programmer: Robert Crismon                                                               *
* Class: CptS 121, Spring  2016; Lab Section 3                                             *
* Programming Assignment: PA 7                                                             *
* Date: March, 2016																		   *
* Description: This program generates math problems, with 5 levels of difficulty.		   *
* Collaboration:																		   *
*******************************************************************************************/

#ifndef PA_7_H
#define PA_7_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct stats
{
	char initials;
	int total_score;
};

typedef struct stats Stats;

int interface_menu(void);
void interface_info(void);
void enter_initials(void);
void difficulty_level(void);
void math_level_1(void);
void math_level_2(void);
void math_level_3(void);
void math_level_4(void); 
void math_level_5(void);

#endif