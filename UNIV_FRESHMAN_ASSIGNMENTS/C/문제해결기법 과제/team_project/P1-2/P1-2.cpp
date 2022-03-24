#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
struct REGISTERATION {
	int tag;
	char date[11];
	char fee_paid[4];
	char name[25];
	int age;
	char organization[35];
	char job[15];
};
struct NODE {
	int len;
	struct REGISTERATION* key;
	struct NODE* next;
};
struct REGISTERATION regist[30];
//P1-2
void make_linked_list(struct REGISTERATION* reg, struct NODE* head) {

	struct NODE* p = head->next, * prev = head;
	struct NODE* newnode;
	int i = 0;
	if (p == NULL) {
		newnode = (struct NODE*)malloc(sizeof(struct NODE));
		newnode->key = (struct REGISTERATION*)malloc(sizeof(struct REGISTERATION));
		newnode->key->age = reg[i].age;
		strcpy(newnode->key->date, reg[i].date);
		strcpy(newnode->key->fee_paid, reg[i].fee_paid);
		strcpy(newnode->key->job, reg[i].job);
		strcpy(newnode->key->name, reg[i].name);
		strcpy(newnode->key->organization, reg[i].organization);
		newnode->key->tag = reg[i].tag;

		head->next = newnode;
	}
	while (i!=30) {
		newnode = (struct NODE*)malloc(sizeof(struct NODE));
		newnode->key=(struct REGISTERATION*)malloc(sizeof(struct REGISTERATION));
		newnode->key->age = reg[i].age;
		strcpy(newnode->key->date, reg[i].date);
		strcpy(newnode->key->fee_paid, reg[i].fee_paid);
		strcpy(newnode->key->job, reg[i].job);
		strcpy(newnode->key->name, reg[i].name);
		strcpy(newnode->key->organization, reg[i].organization);
		newnode->key->tag = reg[i].tag;
		prev = prev->next;
		prev->next = newnode;

		i++;
		head->len++;
	}
}
bool read_file(const char* fname, struct REGISTERATION* r1, int* num) {
	char line[80];
	int n = 0;
	FILE* fp = fopen(fname, "r");
	if (fp == NULL) {
		printf("Cannot open file\n");
		return false;
	}

	else {
		while ((fgets(line, sizeof(line), fp)) != NULL) {
			//token by slash
			char* ptr = strtok(line, "/");
			int i = 1;
			while (ptr != NULL) {
				switch (i) {
				case 1:
					(r1 + n)->tag = atoi(ptr);
					break;
				case 2:
					strcpy((r1 + n)->date, ptr);
					break;
				case 3:
					strcpy((r1 + n)->fee_paid, ptr);
					break;
				case 4:
					strcpy((r1 + n)->name, ptr);
					break;
				case 5:
					(r1 + n)->age = atoi(ptr);
					break;
				case 6:
					strcpy((r1 + n)->organization, ptr);
					break;
				case 7:
					strcpy((r1 + n)->job, ptr);
					break;
				default:
					break;
				}
				ptr = strtok(NULL, "/");
				i++;
			}
			n++;
		}
		*num = n;
	}
	fclose(fp);
	return true;
}
//P1-2, IN THE LINKED LIST
void print_data_in_linked_list(struct NODE* head,int count) {
	struct NODE* p = head->next;
	int i,k;
	for (i = 0; i < count; i++) {
		char name[25];
		char* p_name[25] = {NULL};
		strcpy(name,p->key->name);
		k = 0;
		char* ptr = strtok(name," ");
		while (ptr != NULL) 
		{
			p_name[k] = ptr;
			k++;
			ptr = strtok(NULL," ");
		}
		if (strcmp(p_name[1], "Choi") == 0 && p_name[1]!=NULL) {
			printf("Tag: %2d  Date registered: %11s  Fee-paid: %3s  Name: %10s  Age: %2d  Organization: %10s  Job: %8s",
				p->key->tag,
				p->key->date,
				p->key->fee_paid,
				p->key->name,
				p->key->age,
				p->key->organization,
				p->key->job);
		}
		p = p->next;
	}
}
int main() {
	char fname[] = "registraion_data.txt";
	int count = 0;
	struct NODE* head = (struct NODE*)malloc(sizeof(struct NODE));

	head->len = 0;
	head->next = NULL;

	read_file(fname, regist, &count);
	make_linked_list(regist, head);
	print_data_in_linked_list(head, head->len);
	return 0;
}