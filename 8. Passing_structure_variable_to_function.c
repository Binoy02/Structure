/*
  Binoy Das Gupta
  Structure-08[Passing structure variable to function]
  22-05-2021
*/

#include<stdio.h>
struct person
{
	char name[100];
	int age;
	float salary;
};

void print(struct person p)
{
	printf("Name    : %s\n",p.name);
	printf("Age     : %d\n",p.age);
	printf("Salary  : %0.2f\n",p.salary);
}
int main()
{
	struct person person1;
	printf("Enter information for Person1 :\n");
	gets(person1.name);
	scanf("%d",&person1.age);
	scanf("%f",&person1.salary);
	printf("\n\n");
	printf("Person1 : \n");
	print(person1);
	return 0;
}
