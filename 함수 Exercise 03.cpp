// 3명의 세금을 저장해서 데이터를 받아보세요. (계산 후 출력)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
float cal(struct TAX stc);

#define people 3 //사람 수 미리 define


struct TAX {
    char name[20];
    float salary;
};

int main()
{
    for (int i = 0; i < people; i++)
    {
        struct TAX info; //info라는 struct 변수 정의;
        float tax; // 계산된 세금을 받을 실수형 변수 정의;

        printf("\nEnter the Name : ");
        gets_s(info.name); //info.name에 이름 assign

        printf("Enter the salary : ");
        scanf("%f", &info.salary); //info.salary에 월급 저장;

        tax = cal(info); //cal 함수 호출 후 tax에 return값 저장;

        printf("%s's tax : %f\n", info.name, tax); //info에 저장된 name 멤버랑 계산된 세금 출력
        char any = getchar(); //scanf때문에 생긴 버퍼 받아줌;
    }
    return 0;
}

float cal(struct TAX stc)
{
    return stc.salary * 0.1; //세금 계산해서 float으로 return;
}