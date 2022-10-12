// 3명의 세금을 저장해서 데이터를 받아보세요. (계산 후 출력)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct TAX
{
	char name[3][20];
	float Month_Salary;
};
struct TAX cal_tax(struct TAX aa); //Function Declaration.
void main()
{
	typedef struct TAX tx;
	tx tx1, new_tx;

	for (int i = 0; i < 3; i++)
	{
		printf("Enter the name of Person. ");
		scanf_s("%s", tx1.name);
	}

	/*
	tx = cal_tax(tx1);
	printf("The calculted tax from your Monthly obtained salary is %f. \n\n", tx.Month_Salary);
	*/
}
struct TAX cal_tax(struct TAX aa)
{
	double calculated_tax;
	calculated_tax = aa.Month_Salary * 0.1;

	/*
	float calculated_tax;
	calculated_tax = tax->Month_Salary * 0.1;

	return calculated_tax;
	*/
	return aa;
}