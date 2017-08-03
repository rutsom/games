#include <stdio.h>
int road[7][50],i,j,player=48,comp=48,d=0,taps=0;
float c=10,dur=0;
char name[20];
int set();
int pri();
int end();
int main()
{
	player=48;comp=48;d=0;taps=0;
	while(1)
	{
		do{
	set();
	pri();
	Sleep(50);	
	if(player==1||comp==1)
	{
		break;
	}
	if(d%2==0)
	{
		comp--;
	}
	c++;
	d++;
	dur=c/9;
	system("cls");
}while(!kbhit());
if(player==1||comp==1)
	{
		break;
	}
getch();
Beep(750, 100);
player-=1;
}
end();
}
int set()
{
for (i=0;i<50;i++)
	{
		for (j=0;j<7;j++)
		{
			if(i==0)
			{
				road[j][i]='_';
			}
			else if(j==0||j==6)
			{
				road[j][i]='*';	
			}
			else if(i==49)
			{
				road[j][i]='^';
			}
			else if(j==3)
			{
				road[j][i]='|';
			}
			else 
			{
				road[j][i]=' ';
			}
		}
	}
	road[2][player]='@';
	road[4][comp]='%';	
}
int pri()
{
for (i=0;i<50;i++)
	{
		for (j=0;j<7;j++)
		{
			fprintf(stderr,"%c",road[j][i]);
			if (i==7&&j==6)
			{
				fprintf(stderr,"\t\t\t tap = %.2f",dur);
			}
		}
		fprintf(stderr,"\n");
	}	
}
int end()
{  char y;
	 system("cls");
	if (player==1)
	{
	fprintf(stderr,"you win!!!!\n");
	 }
	 else if(comp==1)
	 {
	 	fprintf(stderr,"you loose!!!!\n");
	   }  
	pri();
	fprintf(stderr,"%s thanks for playing, your time is %.2f sec:",name,dur);
	getch();
	main();  
	
}
