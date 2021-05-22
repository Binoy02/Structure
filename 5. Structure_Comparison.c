/*
  Binoy Das Gupta
  Structure-05[Structure Comparison]
  22-05-2021
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
	scanf("%d %d",&Person1.age,&Person2.age);
	scanf("%f %f",&Person1.salary,&Person2.salary);
	printf("\n");
	printf("Person1 :\n");
	printf("Age = %d\n",Person1.age);
	printf("Salary = %f\n",Person1.salary);
	printf("\n");
	printf("Person2 :\n");
	printf("Age = %d\n",Person2.age);
	printf("Salary = %f\n\n",Person2.salary);
	
	if(Person1.age==Person2.age && Person1.salary==Person2.salary)
	{
		printf("Person1 equal Person2\n");
	}
	else
	{
		printf("Person1 not equal Person2");
	}
	return 0;
}
