/*
  Binoy Das Gupta
  Structure-06[Array of structure]
  22-05-2021
*/

#include<stdio.h>
struct person
{
	int age;
	float salary;
};

int main()
{
	struct person person[4];
	int i;
	for(i=0;i<4;i++)
	{
		printf("Enter information for person%d :\n",i+1);
		printf("Enter age = ");
		scanf("%d",&person[i].age);
		printf("Enter salary = ");
		scanf("%f",&person[i].salary);
	}
	printf("\n\n");
	for(i=0;i<4;i++)
	{
		printf("Information for Person%d :\n",i+1);
		printf("Age : %d\n",person[i].age);
		printf("Salary : %0.2f\n",person[i].salary);
		printf("\n");
	}
	return 0;
}
