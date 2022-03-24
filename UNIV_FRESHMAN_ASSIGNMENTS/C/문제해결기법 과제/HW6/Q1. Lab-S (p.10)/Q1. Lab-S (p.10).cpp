#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
struct VOTE {
	char region[20];
	int age;
	char candidate_voted[20];
};

struct VOTE vote[2000];

void copy_element(struct VOTE src[], struct VOTE dest[]) {
	strcpy(dest->region, src->region);
	dest->age = src->age;
	strcpy(dest->candidate_voted, src->candidate_voted);
}

bool read_file(const char* fname) {
	FILE* pFile;
	pFile = fopen(fname, "r");
	if (pFile == NULL) {
		printf("cannot open the file!\n");
		return false;
	}
	struct VOTE person;
	int i = 0;
	while (fscanf(pFile, "%s %d %s", person.region, &person.age, person.candidate_voted) == 3) {
		copy_element(&person, &vote[i]);
		i++;
	}



	fclose(pFile);
	return true;
}
void Compute_vote(struct VOTE* vote,
	float* Washington,
	float* Lincoln,
	float* Roosevelt,
	int* num_of_voter)
{
	float Washington_voted = 0;
	float Lincoln_voted = 0;
	float Roosevelt_voted = 0;
	for (int i = 0; i < 2000; i++) {
		if (strcmp(vote[i].candidate_voted, "Washington") == 0) {
			Washington_voted++;
			(*num_of_voter)++;
		}
		else if (strcmp(vote[i].candidate_voted, "Lincoln") == 0) {
			Lincoln_voted++;
			(*num_of_voter)++;
		}
		else if (strcmp(vote[i].candidate_voted, "Roosevelt") == 0) {
			Roosevelt_voted++;
			(*num_of_voter)++;
		}
	}

	*Washington = (Washington_voted / *num_of_voter) * (float)100.0;
	*Lincoln = (Lincoln_voted / *num_of_voter) * (float)100.0;
	*Roosevelt = (Roosevelt_voted / *num_of_voter) * (float)100.0;
}
void Compute_third_row_vote(struct VOTE* vote,
	float* Washington,
	float* Lincoln,
	float* Roosevelt,
	int* num_of_voter) {
	*num_of_voter = 0;
	float Washington_voted = 0;
	float Lincoln_voted = 0;
	float Roosevelt_voted = 0;
	for (int i = 0; i < 2000; i++) {
		if (i % 3 == 0) {
			if (strcmp(vote[i].candidate_voted, "Washington") == 0) {
				Washington_voted++;
				(*num_of_voter)++;
			}
			else if (strcmp(vote[i].candidate_voted, "Lincoln") == 0) {
				Lincoln_voted++;
				(*num_of_voter)++;
			}
			else if (strcmp(vote[i].candidate_voted, "Roosevelt") == 0) {
				Roosevelt_voted++;
				(*num_of_voter)++;
			}
		}
	}

	*Washington = (Washington_voted / *num_of_voter) * (float)100.0;
	*Lincoln = (Lincoln_voted / *num_of_voter) * (float)100.0;
	*Roosevelt = (Roosevelt_voted / *num_of_voter) * (float)100.0;

}
void Compute_tenth_row_vote(struct VOTE* vote,
	float* Washington,
	float* Lincoln,
	float* Roosevelt,
	int* num_of_voter) {
	*num_of_voter = 0;
	float Washington_voted = 0;
	float Lincoln_voted = 0;
	float Roosevelt_voted = 0;
	for (int i = 0; i < 2000; i++) {
		if (i % 10 == 0) {
			if (strcmp(vote[i].candidate_voted, "Washington") == 0) {
				Washington_voted++;
				(*num_of_voter)++;
			}
			else if (strcmp(vote[i].candidate_voted, "Lincoln") == 0) {
				Lincoln_voted++;
				(*num_of_voter)++;
			}
			else if (strcmp(vote[i].candidate_voted, "Roosevelt") == 0) {
				Roosevelt_voted++;
				(*num_of_voter)++;
			}
		}
	}

	*Washington = (Washington_voted / *num_of_voter) * (float)100.0;
	*Lincoln = (Lincoln_voted / *num_of_voter) * (float)100.0;
	*Roosevelt = (Roosevelt_voted / *num_of_voter) * (float)100.0;

}
int main() {
	char fname[50] = "vote.txt";
	int num_of_voters = 0;
	float Washington;
	float Lincoln;
	float Roosevelt;
	read_file(fname);

	Compute_vote(vote, &Washington, &Lincoln, &Roosevelt, &num_of_voters);
	printf("Vote Result: Washington : %.1f%% Lincoln : %.1f%% Roosevelt : %.1f%% , number of voters : %d\n", Washington, Lincoln, Roosevelt, num_of_voters);

	Compute_third_row_vote(vote, &Washington, &Lincoln, &Roosevelt, &num_of_voters);
	printf("Vote Result(EVERY THIRD ROW): Washington : %.1f%% Lincoln : %.1f%% Roosevelt : %.1f%% , number of voters : %d\n", Washington, Lincoln, Roosevelt, num_of_voters);

	Compute_tenth_row_vote(vote, &Washington, &Lincoln, &Roosevelt, &num_of_voters);
	printf("Vote Result(EVERY TENTH ROW): Washington : %.1f%% Lincoln : %.1f%% Roosevelt : %.1f%% , number of voters : %d\n", Washington, Lincoln, Roosevelt, num_of_voters);

	return 0;
}