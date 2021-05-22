/*
  Binoy Das Gupta
  Structure-03[Basic program of structure]
  21-05-2021
*/

#include<stdio.h>
struct Person
{
	int age;
	float salary;
};

int main()
{
	struct Person Person1,Person2;
	//element wise assignment
	Person1.age = 22;
	Person1.salary = 10000;

	Person2.age = 22;
	Person2.salary = 6000;
	
	printf("Person1: \n");
	printf("Age    : %d\n",Person1.age);
	printf("Salary : %0.2f\n",Person1.salary);
	
	printf("\n\n");
	
	printf("Person2: \n");
	printf("Age    : %d\n",Person2.age);
	printf("Salary : %0.2f\n",Person2.salary);
	
	return 0;
}
