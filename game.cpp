#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<stdlib.h>
#include<dos.h>
int score1 = 0;
int score2=0;
int score;
int turn = 0;
//0 p1
//1 p2
player2();
player1();
void game()
{
  rectangle(10,10,410,450);      //OUTER BOX
   int i,k,j,y=10;
  for(k=0;k<=10;k++)
  {
    line(10,y,410,y);
    y=y+44;
  }
  y=10;
  for(k=0;k<=10;k++)
  {
    line(y,10,y,450);
    y=y+40;
  }
    setfillstyle(0,11);
    rectangle(460,10,639,450);    //DICE BOX
    floodfill(461,11,15);
  int c=1; k=0;
  int x=20;y=428;
  int flag=0;// int a=20,b=428;
  char ch[10];
  for(i=1;i<=100;i++)
  {

    setfillstyle(1,c);
    floodfill(x,y,15);
    itoa(i,ch,10);
    outtextxy(x,y,ch);
    c++;
    if(flag==0)
    x=x+40;
    if(flag==1)
    x=x-40;
    if(c==4)
    c=9;
    if(c==5)
    c=8;
    if(c==6)
    c=7;
    if(c>14)
    c=1;
    if(x>380)
    {
      flag=1;
      y=y-44;
      x=380;
    }
    if(x<20)
    {
      flag=0;
      y=y-44;
      x=20;
    }
  }
			      //LADDERS
     //LADER_1
  setlinestyle(SOLID_LINE,0,3);
  setcolor(6);
  {
    line(50,32,210,296);
    line(90,32,250,296);
  }
  setcolor(6);
  {
    line(90,98,130,98);
    line(116,142,156,142);
    line(170,230,210,230);
    line(196,274,236,274);
    line(144,186,184,186);
    line(65,54,105,54);
  }
    //LADER_2
  setlinestyle(SOLID_LINE,0,3);
  setcolor(6);
  {
    line(370,120,250,428);
    line(410,120,290,428);
  }
  setcolor(6);
  {
    line(330,230,370,230);
    line(292,318,330,318);
    line(362,142,402,142);
    line(311,274,351,274);
    line(344,186,385,186);
    line(275,362,315,362);
    line(259,404,300,404);
  }
			 //SNAKES
    //SNAKE_1
  setcolor(8);
  {
    arc(290,40,60,150,20);
    arc(280,50,105,150,20);
    arc(270,60,105,150,20);
    arc(260,70,105,150,20);
    arc(250,80,105,150,20);
    arc(240,90,105,150,20);
    arc(230,100,105,150,20);
    arc(220,110,105,150,20);
    arc(210,110,110,225,10);
    arc(275,20,300,1,20);
    arc(275,40,276,1,10);
    arc(265,50,276,1,10);
    arc(255,60,276,1,10);
    arc(245,70,276,1,10);
    arc(235,80,276,1,10);
    arc(225,90,276,1,10);
    arc(215,100,276,1,10);
    arc(205,110,255,1,10);
  }
}
	       //Dice
void dice()
{
  setcolor(15);
  setfillstyle(1,4);
  rectangle(480,30,610,160);
  floodfill(603,158,15);
}
void dice1()
{
  dice();
  setfillstyle(0,0);
  circle(545,95,10);
  floodfill(546,96,15);
}
void dice2()
{
  dice();
  setfillstyle(0,0);
  circle(530,80,10);
  circle(560,110,10);
  floodfill(531,81,15);
  floodfill(561,111,15);
}
void dice3()
{
  dice();
  setfillstyle(0,0);
  circle(545,95,10);
  floodfill(546,96,15);
  circle(515,65,10);
  floodfill(515,65,15);
  circle(575,125,10);
  floodfill(575,125,15);
}
void dice4()
{
  dice();
  setfillstyle(0,0);
  circle(515,65,10);
  floodfill(515,65,15);
  circle(515,125,10);
  floodfill(515,125,15);
  circle(575,125,10);
  floodfill(575,125,15);
  circle(575,65,10);
  floodfill(575,65,15);
}
void dice5()
{
  dice();
  setfillstyle(0,0);
  circle(545,95,10);
  floodfill(546,96,15);
  circle(580,60,10);
  floodfill(580,60,15);
  circle(580,130,10);
  floodfill(580,130,15);
  circle(510,60,10);
  floodfill(510,60,15);
  circle(510,130,10);
  floodfill(510,130,15);
}
void dice6()
{
  dice();
  setfillstyle(0,0);
  circle(570,95,10);
  floodfill(570,96,15);
  circle(570,125,10);
  floodfill(570,125,15);
  circle(570,65,10);
  floodfill(570,65,15);
  circle(520,125,10);
  floodfill(520,125,15);
  circle(520,95,10);
  floodfill(520,95,15);
  circle(520,65,10);
  floodfill(520,65,15);
}
		       //PLAYERS
void player2(int g)
{
  setcolor(15);
//  circle(30,440-22,5);
  int flag,n2,n1,x1,y1,x2,y2;
  y2=440-22;
  if(turn==1)
  {
    score2=score2+g;
    n2=score2;
   // turn=0;
  }
  n2 = score2;
  if(score2>100)
  {
    score2=score2-g;
    n2=score2;
  }
//  outtextxy(480,240,"PLAYER 2 TURN");
  int num2=n2;
  int temp2=n2;
  n2=n2/10;
  temp2=temp2%10;
  y2=y2-(44*n2);
  if(n2<1)
  {
    y2=y2;
  }
  if(n2%2 !=0)
  {
    x2=390-temp2*40+40;
  }
  if(n2%2 ==0)
  {
    x2=30+temp2*40-40;
  }
  if(temp2==0)
  {
    if(n2%2!=0)
    {
      x2=390-temp2*40;
      y2=y2-(44*n2)+88+88;
    }
    if(n2%2==0)
    {
      x2=30+temp2*40;
      y2=y2-(44*n2)+88+44;
    }
  }
  if(num2==50)
  {
    x2=390;
    y2=274-22+12-22;
  }
  if(num2==60)
  {
    x2=30;
    y2=274-10-44-22;
  }
  if(num2==70)
  {
    x2=390;
    y2=274-10-88-22;
  }
  if(num2==80)
  {
    x2=30;
    y2=274-10-88-44;
  }
  if(num2==90)
  {
    x2=390;
    y2=274-10-88-88-22;
  }
  if(num2==100)
  {
    x2=30;
    y2=274-10-88-88-44-22;
  }
  if(n2==1)
  {
    x2=390-temp2*40+40;
    y2=396-22;
  }
  if(num2==7)
  {
    x2=390;
    y2=274-10-88-44-22;
  }
  if(num2==35)
  {
    y2=274-10-88-88-44-22;
    x2=70;
  }
  if(num2==93)
  {
    x2=190;
    y2=274-10-88-44-22;
  }
  if(num2==10)
  {
    x2=390;
    y2=440-22;
  }
  if(score2==7)
  score2=71;
  if(score2==35)
  score2=99;
  if(score2==93)
  score2=76;
//  cleardevice();
  setcolor(15);
//  outtextxy(520,240,"PLAYER 2 TURN");
//  game();
//  dice();
  setcolor(WHITE);
  setfillstyle(1,0);
  circle(x2,y2,5);
  floodfill(x2,y2,15);
}
void player1(int g)
{
  setcolor(15);
//  circle(30,440-22,5);
  int flag,n2,n1,x1,y1,x2,y2;
  y1=440;
  if(turn==0)
  {
    score1=score1+g;
    n1=score1;
   // turn=0;
  }
  n1 = score1;
  if(score1>100)
  {
    score1=score1-g;
    n1=score1;
  }
//  outtextxy(480,240,"PLAYER 1 TURN");
  int num1=n1;
  int temp1=n1;
  n1=n1/10;
  temp1=temp1%10;
  y1=y1-(44*n1);
  if(n1<1)
  {
    y1=y1;
  }
  if(n1%2 !=0)
  {
    x1=390-temp1*40+40;
  }
  if(n1%2 ==0)
  {
    x1=30+temp1*40-40;
  }
  if(temp1==0)
  {
    if(n1%2!=0)
    {
      x1=390-temp1*40;
      y1=y1-(44*n1)+88+88;
    }
    if(n1%2==0)
    {
      x1=30+temp1*40;
      y1=y1-(44*n1)+88+44;
    }
  }
  if(num1==50)
  {
    x1=390;
    y1=274-22+12;
  }
  if(num1==60)
  {
    x1=30;
    y1=274-10-44;
  }
  if(num1==70)
  {
    x1=390;
    y1=274-10-88;
  }
  if(num1==80)
  {
    x1=30;
    y1=274-10-88-44+22;
  }
  if(num1==90)
  {
    x1=390;
    y1=274-10-88-88;
  }
  if(num1==100)
  {
    x1=30;
    y1=274-10-88-88-44;
  }
  if(n1==1)
  {
    x1=390-temp1*40+40;
    y1=396;
  }
  if(num1==7)
  {
    x1=390;
    y1=274-10-88-44;
  }
  if(num1==35)
  {
    y1=274-10-88-88-44;
    x1=70;
  }
  if(num1==93)
  {
    x1=190;
    y1=274-10-88-44;
  }
  if(num1==10)
  {
    x1=390;
    y1=440;
  }
  if(score1==7)
  score1=71;
  if(score1==35)
  score1=99;
  if(score1==93)
  score1=76;
//  cleardevice();
  setcolor(15);
//  outtextxy(480,240,"PLAYER 1 TURN");
//  game();
//  dice();
  setcolor(4);
  setfillstyle(1,5);
  circle(x1,y1,5);
  floodfill(x1,y1,4);
}

void play()
{
  while(score1!=100&&score2!=100)
  {
    score=random(6)+1;
    if(score==1)
    {
      dice1();
    }
    else if(score==2)
    {
      dice2();
    }
    else if(score==3)
    {
      dice3();
    }
    else if(score==4)
    {
      dice4();
    }
    else if(score==5)
    {
      dice5();
    }
    else
    {
      dice6();
    }
    if(turn==0)
    {
      player1(score);
      player2(0);
      outtextxy(500,240,"PLAYER 2 TURN");
    }
    if(turn==1)
    {
      player1(0);
      player2(score);
      outtextxy(500,240,"PLAYER 1 TURN");
    }
    char qq =getch();
    if(qq=='q')
    {
      exit(0);
    }
    turn = !turn;
    cleardevice();
    game();
  }


//  turn = 0;
/*  for(int chance = 1; chance<=5; chance++)
   {
     int score = 5;

     player2(score);
     //player2(score);

     //turn  = !turn;
     getch();
     cleardevice();
     game();
   }     */
}
void main()
{
  clrscr();
  int gd=DETECT,gm;
  randomize();
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  rectangle(10,10,410,450);      //OUTER BOX

  game();
  play();
  setcolor(15);
  if(score1==100)
  {
    outtextxy(500,240,"PLAYER 1 WIN");
  }
  else if(score2==100)
  {
    outtextxy(500,240,"PLAYER 2 WIN");
  }
  getch();
}

