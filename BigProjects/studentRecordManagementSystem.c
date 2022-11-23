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

// Function for adding an Entry to the db.txt file
void add(FILE *fp){
	
}

// Function for Searching an Entry from the db.txt file
void search(FILE *fp){
	
}

// Function for changing an existing Entry to the db.txt file
void change(FILE *fp){
	
}

// Function for removing an Entry to the db.txt file
void remove(FILE *fp){
	
}

// Creating a structure of students
typedef struct student {
	int studentRollNo;
	char studentName[30];
	int CGPA;
} std;


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
				
		case 4: remove(db);
				break;
				
		default: printf("The specified key is not recognized. Please input a valid option\n");
	}
	
	
	return 0;
}
