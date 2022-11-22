#include <stdio.h>
#include <windows.h>
//OBJECTIVE
/* We have to make a student management system from where we can handle students records like(Student roll numbers, Name, Subjects)
   We also have to make a database file where we can perform some operations like add, search, change and remove entries*/

void gotoxy(int x, int y){
	COORD CRD;
	CRD.X = x;
	CRD.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),CRD);
}


// Creating a structure of students
typedef struct student {
	int studentRollNo;
	char studentName[30];
	int CGPA;
} std;


int main() {
	SetConsoleTitle("Student Record Management");
	FILE *fp;
	char string[20];
	int i;
	
		
		fflush(stdin);
		fgets(string,10,stdin);
		printf("%s\n",string);
//		fflush(stdin);

	return 0;
}
