/*
  Binoy Das Gupta
  Structure-01[Basic program of structure]
  21-05-2021
*/

#include<stdio.h>
struct Person
{
	char name[50];
	int age;
	float salary;
};

int main()
{
	struct Person Person1,Person2;
	//Input structure element
	gets(Person1.name);
	gets(Person2.name);
	scanf("%d %d",&Person1.age,&Person2.age);
	scanf("%f %f",&Person1.salary,&Person2.salary);	

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
