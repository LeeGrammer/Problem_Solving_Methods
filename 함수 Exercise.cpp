// 3명의 세금을 저장해서 데이터를 받아보세요. (계산 후 출력)
#define _CRT_SECURE_NO_WARNINGS
#define MAX 3
#include <stdio.h>
struct TAX
{
	char name[3][20];
	float Month_Salary = 0;
}tax[MAX];
struct TAX cal_tax(struct TAX aa); //Function Declaration.
int main()
{
	struct TAX tx;
	struct TAX tx1;

	for (int i = 0; i < MAX; i++)
	{
		printf("Enter the name of Person. ");
		scanf("%s", tax[i].name);

		printf("Enter the Monthly Salary you received. ");
		scanf("%s", tax[i].Month_Salary);
	}
	tx = cal_tax(tx1);
	printf("The calculted tax from your Monthly obtained salary is %f. \n\n", tx.Month_Salary);
}
struct TAX cal_tax(struct TAX aa)
{
	float calculated_tax = 0;
	for (int i = 0; i < MAX; i++)
	{
		calculated_tax = aa.Month_Salary * 0.1;
	}
	return aa;
}