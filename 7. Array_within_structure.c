/*
  Binoy Das Gupta
  Structure-07[Array within structure]
  22-05-2021
*/

#include<stdio.h>
struct person
{
	char name[100];
	int age;
	float salary;
};

int main()
{
	struct person person[3];
	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter information for person%d :\n",i+1);
		printf("Enter name = ");
		fflush(stdin);
		gets(person[i].name);
		printf("Enter age = ");
		scanf("%d",&person[i].age);
		printf("Enter salary = ");
		scanf("%f",&person[i].salary);
	}
	printf("\n\n");
	for(i=0;i<3;i++)
	{
		printf("Information for Person%d :\n",i+1);
		printf("Name : %s\n",person[i].name);
		printf("Age : %d\n",person[i].age);
		printf("Salary : %0.2f\n",person[i].salary);
		printf("\n\n");
	}
	return 0;
}
