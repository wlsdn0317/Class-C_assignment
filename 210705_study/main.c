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
	printf("이름 : ");
	scanf(" %s", student.name);
	printf("나이 : ");
	scanf(" %d", &student.age);
	printf("학년 : ");
	scanf(" %d", &student.grade);
	printf("수학 : ");
	scanf(" %d", &student.mathematics);
	printf("영어 : ");
	scanf(" %d", &student.english);
	printf("국어 : ");
	scanf(" %d", &student.language);

	printf("\n\n");

	Student_2 student_2;
	printf("이름 : ");
	scanf(" %s", student_2.name);
	printf("나이 : ");
	scanf(" %d", &student_2.age);
	printf("학년 : ");
	scanf(" %d", &student_2.grade);
	printf("수학 : ");
	scanf(" %d", &student_2.mathematics);
	printf("영어 : ");
	scanf(" %d", &student_2.english);
	printf("국어 : ");
	scanf(" %d", &student_2.language);

	return 0;
}