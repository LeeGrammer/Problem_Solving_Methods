#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <string>
struct EM {
	char name[20];
	int age;
	float salary;
	char hobby[3][10];
};
void main()
{
	typedef struct EM EMP;
	EMP aa = {"Hong", 23, 100000, "tennis"};
	EMP bb,* ptr;
	bb = aa;

	ptr = &aa;  // ptr ������ aa �ּ� �Ҵ�
	printf("age of aa = %d. \n", aa.age);
	printf("age of ptr = %d. \n", ptr->age);
	printf("age of ptr = %d. \n", (*ptr).age);

	printf("Name of ptr = %s. \n", ptr->name);
	printf("Salary of ptr = %f. \n", ptr->salary);     // Pointer �� ������ Ÿ�� �����ϱ�. 
	printf("Hobby of ptr = %s. \n", ptr->hobby[0]);		// Hobby�� 2���� �迭�̹Ƿ�, [0] �����

	//printf("(*ptr).name = %c. \n\n" = *(ptr->name));

}
