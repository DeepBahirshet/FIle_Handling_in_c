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
	fp=fopen("student1.dat","r");
	if(fp==NULL){
	printf("You cant opens the file") ;
	exit(1);
	}
	while(1) {
		fscanf(fp,"%s %d %d",&s.name,&s.roll_no,&s.marks);
		printf("\n %s %d %d",s.name,s.roll_no,s.marks);
		if(fscanf(fp,"%s %d %d",&s.name,&s.roll_no,&s.marks)==EOF)
		break;
	}
	fclose(fp);
	getch();
	}
