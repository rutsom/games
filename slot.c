#include <stdio.h>
int main()
{
	int num[3],pts=0,asd=0;
	s:
	do
	{
		num[0]=rand()%9;
		num[1]=rand()%9;
		num[2]=rand()%9;
		fprintf(stderr,"\n\n\n\n\t\t\t\t%d | %d | %d",num[0],num[1],num[2]);
		Sleep(110);
		system("cls");
	}while(!kbhit());
	getch();
	Beep(750, 100);
	do
	{
		num[1]=rand()%9;
		num[2]=rand()%9;
		fprintf(stderr,"\n\n\n\n\t\t\t\t%d | %d | %d",num[0],num[1],num[2]);
		Sleep(90);
		system("cls");
	}while(!kbhit());
	getch();
	Beep(750, 100);
	do
	{
		num[2]=rand()%9;    
		fprintf(stderr,"\n\n\n\n\t\t\t\t%d | %d | %d",num[0],num[1],num[2]);
		Sleep(50);
		system("cls");
	}while(!kbhit()); 
		getch();
		Beep(750, 100);
	fprintf(stderr,"\n\n\n\n\t\t\t\t%d | %d | %d",num[0],num[1],num[2]);
	
	if(num[0]==num[1] && num[1]==num[2] && num[0]==num[2])
		{
			fprintf(stderr,"\n\n\n\t\tYou have earned 100 pts\t\t%d Chance\nTotal score is %d",asd+1,pts);
			getch();
			pts+=100;
			asd++;
			}
	else if(num[0]==num[1] || num[1]==num[2] || num[0]==num[2])
		{
			fprintf(stderr,"\n\n\n\t\tYou have earned 10 pts\t\t%d Chance\nTotal score is %d",asd+1,pts);
			getch();
			pts+=10;
			asd++;
			}
		else
		{
			fprintf(stderr,"\n\n\n\t\tYou have earned 0 pts\t\t%d Chance\nTotal score is %d",asd+1,pts);
			getch();
			asd++;	
		}
		if (asd == 5)
			{
			getch();
			main();
			}
		goto s;
}
