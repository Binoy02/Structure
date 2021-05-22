/*
  Binoy Das Gupta
  Structure-02[Initializing structure variables]
  21-05-2021
*/

#include<stdio.h>
struct Person
{
	char name[100];
	int age;
	float salary;
};

int main()
{
	struct Person Person1={"Binoy Das Gupta",22,8000};
	struct Person Person2={"Sreya Mazumder",22,6000}; 

	printf("Person1: \n");
	printf("Name   : %s\n",Person1.name);
	printf("Age    : %d\n",Person1.age);
	printf("Salary : %0.2f\n",Person1.salary);
	
	printf("\n\n");
	
	printf("Person2: \n");
	printf("Name   : %s\n",Person2.name);
	printf("Age    : %d\n",Person2.age);
	printf("Salary : %0.2f\n",Person2.salary);	
	
	return 0;
}
