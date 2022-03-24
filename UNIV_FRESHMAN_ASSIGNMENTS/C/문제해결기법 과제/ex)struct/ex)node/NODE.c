#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

 struct NODE 
{
	char key[20];
	struct NODE* next;

};

int main() {

	struct NODE nodes[5];

	
	strcpy(nodes[0].key,"aaa");
	strcpy(nodes[1].key, "bbb");
	strcpy(nodes[2].key, "ccc");
	strcpy(nodes[3].key, "ddd");
	strcpy(nodes[4].key, "eee");

	for (int i = 0; i < 5; i++) {

		nodes[i].next = NULL;
	}
	for (int i = 0; i < 4; i++) {

		nodes[i].next = &nodes[i+1];
	}

	

	//
	struct NODE* ptr;
	ptr = &nodes[0];

	//nodes[0].next;
	//ptr->next;

	while(ptr->next!=NULL)//nodes[4]==NULL
	{
		printf("key : %s\n", ptr->key);
		ptr = ptr->next;
	
	}



	return 0;
}