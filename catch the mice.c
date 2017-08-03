#include <stdio.h>
int main()
{	
	//normal declaration
	int i,size;
		system("cls");
	fprintf(stderr,"Catch the mice  (actully not mice, catch the #)\nuse W,A,S,D to move the cat  (okk not the cat, its @)\nenter the park size: ");
	scanf("%d",&size);
    char field[size*size],a;
    int player=(size*size)/2+1;
    int rat=size*size/2+5;
    int avoid,points=0,k=56;
	while(1){
	//game start
		a=getch();
		system("cls");

	fprintf(stderr,"Enjoy yor time!!!! point: %d",points);
	if(points==5||points==-5)//check for end of game
	{
		end(points)
	}
	Beep(150,100);
		switch(a)//control the player
		{
			case 'w': 	player=player-size;
						break;
			case 's': 	player=player+size;
						break;
			case 'a': 	player=player-1;
						break;
			case 'd': 	player=player+1;
						break;
			default: goto again;
		}
			rat+=3;
			again:
	avoid=k%400;
if(avoid<size||avoid%size==0||(avoid+1)%size==0||avoid>size*size-size)//to correct the placement of $ if out of field 
	{

		if(avoid<size)
		{
			avoid+=size;
			
		}
		if(avoid%size==0)
		{
			avoid+=1;
			
		}
		if((avoid+1)%size==0)
		{
			avoid-=1;
		
		}
		if(avoid>size*size-size)
		{
			avoid=size+1;
			
		}
}
	if(rat<size||rat%size==0||(rat+1)%size==0||rat>size*size-size)//to correct the placement of # if out of field 
	{

		if(rat<size)
		{
			rat+=size;
			
		}
		if(rat%size==0)
		{
			rat+=1;
			
		}
		if((rat+1)%size==0)
		{
			rat-=1;
		
		}
		if(rat>size*size-size)
		{
			rat=size+1;
			
		}

	}
	if(player==avoid||player<size||player%size==0||(player+1)%size==0||player>size*size-size)//check if player and $ are in same place
	{
		fprintf(stderr,"\nawww!!!!   you loseee a point!!!");
		if(player==avoid)
		{
			avoid+=22;
		}
		if(player<size)
		{
			player+=size;
		}
		if(player%size==0)
		{
			player+=1;
		}
		if((player+1)%size==0)
		{
			player-=1;
		}
		if(player>size*size-size)
		{
			player-=size;
		}
		points--;

	}
	if(player==rat)//to correct the placement of # if out of field 
	{
		fprintf(stderr,"\nyeah!!!   you got a point!!!");
		rat+=11;
		points++;
	}


	for(i=0;i<=size*size;i++)//drawing field 
	{
	field[i]=' ';

					if(i%size==0)
					{
						field[i]=186;
						if(i>size&&i<size*size-3)
						field[i-1]=186;
					}
					if(i<size)
					{
						if(i!=0)
						{
							field[i]=205;
						}
						if(i==0)
						{field[i]=201;}
						if(i==size-1)
						{
							field[i]=187;
						}
	   				}
	   		if(i==size*size-size)
			   {
			   	field[i]=200;
			}
			if(i>size*size-size)
			{
				field[i]=205;
				}
			if(i==size*size-1)
			{
				field[i]=188;
					}
}
	fprintf(stderr,"\n");
	//drawing character
	field[rat]='#';
	field[player]='@';
	field[avoid]='$';
	for (i=0;i<size*size;i++)//printing field
	{
		if(i!=0)
		{
			if(i%size==0)
		{
			fprintf(stderr,"\n");
		}
	}
		fprintf(stderr," %c",field[i]);
	}
	fprintf(stderr,"\nuse W,S,A,D to move your cat\nmice jumps 3 step\navoid banging in walls & its saviour");
		do{
		k++;
		}while(!kbhit());

	}

	
}
void end(int points)
		if(points==5)
		{
			system("cls");
			fprintf(stderr,"Congo You win!!! Try Again");
			getch();
			main();
		}
		else
		{
			system("cls");
			fprintf(stderr,"You Lose Better luck next time!!! Try Again");
			getch();
			main();
		}
