#include <stdio.h>
#include <string.h>
#define Max_Len 50
#define Stud 10

struct Student {
	char first_name[Max_Len];
	char last_name[Max_Len];
};

void sortStudents(struct Student students[])
{
	for (int i=0; i < Stud -1; i++)
	{ 
		for(int j=0; j < Stud - i - 1; j++)
		{
			if (strcmp(students[j].first_name, students[j+1].first_name) > 0 ||
				      	(strcmp(students[j].first_name, students[j+1].first_name) == 0 &&
					 strcmp(students[j].last_name, students[j+1].last_name) > 0 )) 
			{
				struct Student temp = students[j];
				students[j] = students[j+1];
				students[j+1] = temp;
			}
		}
	}
}

int main()
{
	struct Student students[Stud];
	printf("Enter the first name and last name of thhe 10 Students:\n");
	for(int i=0;i<Stud; i++)
	{
		printf("Student %d:\n",i+1);
		scanf("%s%s", students[i].first_name, students[i].last_name);
	}

	sortStudents(students);

	printf("\n sorted syudents list by first name:\n");
	for (int i=0; i< Stud;i++)
	{
		printf("%s %s\n", students[i].first_name, students[i].last_name);
	}
	return 0;
}


