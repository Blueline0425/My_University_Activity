#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define BAR 1
#define BELL 2
#define LEMON 3
#define CHERRY 4
#define RMAX 4

void print_slot_result(const int slot_id,const int slot_val) {
	switch (slot_id)
	{
	case 1:
		printf("First is ");
		break;
	case 2:
		printf("Second is ");
		break;
	case 3:
		printf("Third is ");
		break;
			
	default:
		break;
	}
	switch (slot_val)
	{
	case BAR:
		printf("BAR\n");
		break;
	case BELL:
		printf("BELL\n");
		break;
	case LEMON:
		printf("LEMON\n");
		break;
	case CHERRY:
		printf("CHERRY\n");
		break;
	default:
		break;
	}
}

void main() {
	int slot1, slot2, slot3;
	char anykey;
	srand((unsigned int)time(NULL));
	while (1)
	{
		printf("\nWelcome to KW Land\nPlease pull the slot machine !!\n");

		

		scanf("%c", &anykey);

		

		slot1 = 1 + (int)rand() % RMAX;
		slot2 = 1 + (int)rand() % RMAX;
		slot3 = 1 + (int)rand() % RMAX;

		//print out slots here

		print_slot_result(1,slot1);
		print_slot_result(2,slot2);
		print_slot_result(3,slot3);
		

		if (slot1 == slot2 && slot2 == slot3 && slot1 == CHERRY)
			printf("\nCongratulations On A JACKPOT\n");
		else if (slot1 == CHERRY || slot2 == CHERRY || slot3 == CHERRY)
			printf("\nPaid Out : One DIME\n");
		else if (slot1 == slot2 && slot2 == slot3)
			printf("\nPaid Out : One Nickel\n");
		else printf("\nSorry.Better Luck Next Time\n");

		printf("Press any key to continue\n");
	}

}









