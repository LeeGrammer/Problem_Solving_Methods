// 3���� ������ �����ؼ� �����͸� �޾ƺ�����. (��� �� ���)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
float cal(struct TAX stc);

#define people 3 //��� �� �̸� define


struct TAX {
    char name[20];
    float salary;
};

int main()
{
    for (int i = 0; i < people; i++)
    {
        struct TAX info; //info��� struct ���� ����;
        float tax; // ���� ������ ���� �Ǽ��� ���� ����;

        printf("\nEnter the Name : ");
        gets_s(info.name); //info.name�� �̸� assign

        printf("Enter the salary : ");
        scanf("%f", &info.salary); //info.salary�� ���� ����;

        tax = cal(info); //cal �Լ� ȣ�� �� tax�� return�� ����;

        printf("%s's tax : %f\n", info.name, tax); //info�� ����� name ����� ���� ���� ���
        char any = getchar(); //scanf������ ���� ���� �޾���;
    }
    return 0;
}

float cal(struct TAX stc)
{
    return stc.salary * 0.1; //���� ����ؼ� float���� return;
}