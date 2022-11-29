#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME 20
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student {
	
	int ID;
	char name[MAX_NAME];
	double grade; 
};

int main(int argc, char *argv[]) {
	
	struct student s1 = {1020, "JeongwonRyu", 4.3};
	
	s1.ID = 1234;
	strcpy(s1.name, "Ryujeongwon");
	s1.grade = 3.2;
	
	printf("ID : %i\n", s1.ID);
	printf("name : %s\n", s1.name);
	printf("grade : %f\n", s1.grade);
	
	return 0;
}
