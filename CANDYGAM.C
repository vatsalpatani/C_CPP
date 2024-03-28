/*
			Author :- Vatsal Patani
			DOC    :- 31 octomber 2021
			Obj    :- Creat a CandyGame
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{

	int boxX=40,boxY=22,candyX=40,candyY=2,d,score=0,life=4;
	char ch;
	textbackground(GREEN);
	start:
	clrscr();
	textcolor(YELLOW);
	gotoxy(60,5);
	cprintf("Score=%d",score);
	gotoxy(60,6);
	cprintf("Life=%d",life);
	gotoxy(candyX,candyY);
	cprintf("0");
	gotoxy(boxX,boxY);
	cprintf("#");
	gotoxy(boxX+7,boxY);
	cprintf("#");
	gotoxy(boxX,boxY+1);
	cprintf("########");
	if(kbhit()){
		ch=getch();
		switch(ch){
			case 'a':boxX--;
				break;

			case 'd':boxX++;
				break;

			case 'x':exit(0);

		}// end of switch

	}//end of if
	delay(200);
	candyY++;
	if(candyY==22){
		d=candyX-boxX;
		if(d==1 || d==2 || d==3 || d==4 || d==5 || d==6){
			score++;
		}else{
			life--;
			if(life==0){
			   clrscr();
			   textcolor(LIGHTGRAY);
			   gotoxy(34,13);
			   cprintf("GAME OVER");
			   textcolor(MAGENTA);
			   gotoxy(30,13);
			   cprintf("\nYORE SCORE IS...%d",score);
			   sound(2000);
			   delay(200);
			   nosound();
			   getch();
			   exit(0);

			}//end of if

		}// end of if
		sound(200);
		delay(1000);
		nosound();
		candyX=rand()%80+1;
		candyY=2;

	}// end of if
	goto start;
}// end of main