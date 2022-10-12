#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct NODE {
	int key;
	struct NODE* next;
};
void main()
{
	struct NODE node[3];

	node[0].key = 100;
	node[1].key = 250;
	node[2].key = 467;

	node[0].next = &node[1];
	node[1].next = &node[2];

	for (int i = 0; i < 3; i++)
	{
		printf("Address of Node[%d] = %p. \n", i + 1, node[i]);
	}
	/*
	num1.key = 100;
	num2.key = 250;
	num1.next = &num2;
	num2.next = &num1;

	
	printf("address of num1 = %p. \n", &num1);  //1000
	printf("address of num2 = %p. \n", &num2);  //2000
	printf("Next of num1 = %p. \n", num1.next); //2000
	printf("Next of num2 = %p. \n", num2.next); //1000
	*/	
}