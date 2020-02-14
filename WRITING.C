#include<stdio.h>
#include<conio.h>
struct student{
	char name[20];
	int roll_no;
	int marks;
	};
	void main(){
	struct student s;
	FILE *fp;
	char ch;
	clrscr();
	fp=fopen("student1.dat","w");
	while(1){
	printf("ENTER NAME, ROLL_NO, MARKS OF STUDENT: ");
	scanf("%s %d %d",&s.name,&s.roll_no,&s.marks);
	fprintf(fp,"%s %d %d\n",s.name,s.roll_no,s.marks);
	printf("Do you want to add another record Y/N");
	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='n')
	break;
	}
	getch();
	}
