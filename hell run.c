
#include <stdio.h>
int track[7][20],i,j,x=3,count,score,obj_x=0,obj_y=1;
char name[20],key;
int set();
int object();
int pri();
int end();
int main()
{	system("cls");
	x=3;
	obj_x=0;
	obj_y=1;
	score=0;
	count=0;
	fprintf(stderr,"use a for left and d for right");
	getch();
	while(1)
	{
		do{
	set();
	pri();
	Sleep(70);	
	score=count/5;
	
	count++;
	obj_y++;
	system("cls");
}while(!kbhit());
key=getch();
Beep(750, 100);
switch(key)
{
	case 'a':x-=2;break;
	case 'd':x+=2;break;
}
}
}
int set()
{
for (i=0;i<20;i++)
	{
		for (j=0;j<7;j++)
		{
			if(i==0)
			{
				track[j][i]='_';
			}
			else if(j==0||j==2||j==4||j==6)
			{
				track[j][i]='|';	
			}
			else if(i==19)
			{
				track[j][i]='^';
			}
			else 
			{
				track[j][i]=' ';
			}
		}
	}
	track[x][15]='@';
	object();
	track[obj_x][obj_y]='%';
	if (obj_x==x&&obj_y==15)
	{
		end();
	}		
}
int pri()
{
for (i=0;i<20;i++)
	{
		for (j=0;j<7;j++)
		{
			fprintf(stderr,"%c",track[j][i]);
			if (i==7&&j==6)
			{
				fprintf(stderr,"\t\t\t score = %d",score);
			}
		}
		fprintf(stderr,"\n");
	}
			
}
int end()
{  
	char y;
	system("cls");
	pri();
	getch();
	main();
}
int object()
{	int ran;
	if(obj_y<13)
	{
		srand((unsigned)time(NULL));
	ran=rand() % 3;
	switch(ran)
	{
		case 0:obj_x=1;break;
		case 1:obj_x=3;break;
		case 2:obj_x=5;break;
	}
	}
	if(obj_y>19)
	{
		obj_y=1;
	}

}
