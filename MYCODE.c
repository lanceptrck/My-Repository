#include<stdio.h>
#include<conio.h>
#include "aspiringcheetahs.h"

#define size_arr 50

int main()
{
	char name[30]; /* for student's name */
	char degree[10];
	char courseNames[size_arr][size_arr];
	float courseDigits[size_arr][2];
	int numSubject = 0;
	int i;
	
	printf("Aspiring Cheetahs' GPA Calculator\n\n");
	
	printf("ENTER YOUR NAME: ");
	scanf("%s", name);
	
	printf("\nENTER YOUR DEGREE PROGRAM: ");
	scanf("%s", degree);
	
	printf("\nENTER THE NUMBER OF YOUR SUBJECTS: ");
	scanf("%d", &numSubject);
	
	printf("\n\nName: %s", name);
	printf("\nDegree: %s", degree);
	printf("\nNum of Subjects: %d", numSubject);
	
	for(i = 0; i<numSubject; i++)
	{
		printf("\n\nINPUTTING INFO FOR (%d) SUBJECT\n", i+1);
		
		printf("COURSE NAME: ");
		scanf("%19s", &courseNames[i]);
				
		printf("NUMBER OF UNITS: ");
		scanf("%f", &courseDigits[i][0]);
		
		printf("GRADE FOR %s: ", &courseNames[i]);
		scanf("%f", &courseDigits[i][1]);
		
	}
	
	displayGrades(courseNames, courseDigits, numSubject);
	
		
	printf("\n");
	getch();
	
	return 0;
}
