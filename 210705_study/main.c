#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Student 
{
	char name[256];
	int	age;
	int	grade;
	int	mathematics;
	int	english;
	int	language;
};

typedef struct _Student {
	char name[256];
	int	age;
	int	grade;
	int	mathematics;
	int	english;
	int	language;
} Student_2 ;

int main(void) 
{
	struct Student student;
	printf("�̸� : ");
	scanf(" %s", student.name);
	printf("���� : ");
	scanf(" %d", &student.age);
	printf("�г� : ");
	scanf(" %d", &student.grade);
	printf("���� : ");
	scanf(" %d", &student.mathematics);
	printf("���� : ");
	scanf(" %d", &student.english);
	printf("���� : ");
	scanf(" %d", &student.language);

	printf("\n\n");

	Student_2 student_2;
	printf("�̸� : ");
	scanf(" %s", student_2.name);
	printf("���� : ");
	scanf(" %d", &student_2.age);
	printf("�г� : ");
	scanf(" %d", &student_2.grade);
	printf("���� : ");
	scanf(" %d", &student_2.mathematics);
	printf("���� : ");
	scanf(" %d", &student_2.english);
	printf("���� : ");
	scanf(" %d", &student_2.language);

	return 0;
}