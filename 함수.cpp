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

	printf("age of emp = %d. \n", emp.age);  //30 ���

	update_record(emp);   //change age of emp    (function call)
	printf("age of emp = %d. \n", emp.age); //30 ���  -> ���� �ٲ��� �ʴ� ���� : ����ü�� call by value.
	
	new_emp = update_record2(emp); //return ��Ÿ���� �ִ� �Լ��� ȣ��   !!!Ÿ���� ������ ����ü���� �Ѵ�.!!!
	printf("age of new_emp = %d. \n", new_emp.age); 
	

	update_record3(&emp);           // Call by reference.
	printf("age of emp (Call by Reference.) = %d. \n", emp.age); //500
}

//call by value
void update_record(struct EM aa)  //struct EM aa = emp;    ����ü �Ҵ�
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
void update_record3(struct EM *ptr)  // ptr = &emp   ptr�� emp�� �ּҸ� �־���.
{
	ptr->age = 500;
	//(*ptr).age = 500;  

	// �� ��� �� �� �ϳ��� �Ѵ�. ���ǻ� �ϳ��� �ּ�ó��.
}