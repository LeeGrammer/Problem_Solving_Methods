#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
struct EMPRECORD {
	char name[20];
	int age;
	float salary;
	char hobby[3][20];
}employee, newemp;
*/
struct EM {
	char name[20];
	int age;
	float salary;
	char hobby[3][10];
};
void update_record(struct EM aa);   // Function declaration
struct EM update_record2(struct EM aa);   // struct Declaraion.
void update_record3(struct EM* ptr);    // Function Declaration.
void main()
{
	typedef struct EM EMP;
	EMP emp, new_emp;
	emp.age = 30;

	printf("age of emp = %d. \n", emp.age);  //30 출력

	update_record(emp);   //change age of emp    (function call)
	printf("age of emp = %d. \n", emp.age); //30 출력  -> 값이 바뀌지 않는 이유 : 구조체는 call by value.
	
	new_emp = update_record2(emp); //return ㅌ타입이 있는 함수를 호출   !!!타입은 무조건 구조체여야 한다.!!!
	printf("age of new_emp = %d. \n", new_emp.age); 
	

	update_record3(&emp);           // Call by reference.
	printf("age of emp (Call by Reference.) = %d. \n", emp.age); //500
}

//call by value
void update_record(struct EM aa)  //struct EM aa = emp;    구조체 할당
{
	aa.age = 100; 
}

// Use of return type
struct EM update_record2(struct EM aa) 
{
	aa.age = 100;
	return aa;
};
// Call by Reference.
void update_record3(struct EM *ptr)  // ptr = &emp   ptr에 emp의 주소를 넣었다.
{
	ptr->age = 500;
	//(*ptr).age = 500;  

	// 위 방법 둘 중 하나로 한다. 편의상 하나는 주석처리.
}