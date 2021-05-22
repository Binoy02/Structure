/*
  Binoy Das Gupta
  Structure-04[Structure Copy]
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
	scanf("%d",&Person1.age);
	scanf("%f",&Person1.salary);
	Person2 = Person1;
	printf("Person1 :\n");
	printf("Age     : %d\n",Person1.age);
	printf("Salary  : %0.2f\n",Person1.salary);
	printf("\nPerson2 :\n");
	printf("Age     : %d\n",Person2.age);
	printf("Salary  : %0.2f\n",Person2.salary);
}
