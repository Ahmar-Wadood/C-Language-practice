#include <stdio.h>
#include <windows.h>
//OBJECTIVE
/* We have to make a student management system from where we can handle students records like(Student roll numbers, Name, Subjects)
   We also have to make a database file where we can perform some operations like add, search, change and remove entries*/

// Creating a structure of students
typedef struct student {
	int studentRollNo;
	char studentName[30];
	float CGPA;
} std;


void gotoxy(int x, int y){
	COORD CRD;
	CRD.X = x;
	CRD.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),CRD);
}

// Function for adding an Entry to the db.txt file
void add(FILE *fp){
	system("cls");
	printf("-------------------- Now adding a student in the database ------------------------\n\n");
	std s;
	
	printf("Enter the Roll No: ");
	scanf("%d", &s.studentRollNo);
	
	printf("\nEnter Student name: ");
	fflush(stdin);
	fgets(s.studentName, 25, stdin);
	
	printf("\nEnter the CGPA: ");
	scanf("%f", &s.CGPA);
	
	fseek(fp, 0, SEEK_END);
	fwrite(&s, sizeof(s),1,fp);
}

// Function for Searching an Entry from the db.txt file
void search(FILE *fp){
	
}

// Function for changing an existing Entry to the db.txt file
void change(FILE *fp){
	
}

// Function for removing an Entry to the db.txt file
void del(FILE *fp){
	
}





int main() {
	// Giving options to the user
	printf("1. Add an entry\n");
	printf("2. Search an entry\n");
	printf("3. Change an existing entry\n");
	printf("4. Remove an entry\n");
	
	
	
	//Taking input from user
	int options = 0;
	printf("\nEnter your desired task: ");
	scanf("%d", &options);
	
	// Openning db.txt file
	FILE *db;
	db = fopen("db.txt","r+");

	// Switch statement is used to identify which task needs to be done
	switch(options){
		case 1: add(db);
				break;
				
		case 2: search(db);
				break;
				
		case 3: change(db);
				break;
				
		case 4: del(db);
				break;
				
		default: printf("The specified key is not recognized. Please input a valid option\n");
	}
	
	std s;
	int siz = sizeof(s);
	
	rewind(db);
	if(fread(&s,siz,1,db) == 1){
		printf("The Roll No is: %d\n",s.studentRollNo);
		printf("The Student name is: %s\n",s.studentName);
		printf("The CGPA is: %f\n",s.CGPA);		
	}
	
	
	return 0;
}
