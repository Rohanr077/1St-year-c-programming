#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j;
 int x[10]={1,2,7,5,8,1,2,8,6,6};
 int b[10]={0};
 for(i=0;i<10;i++)
 {
  b[x[i]]=b[x[i]]+1;
 }
 for(i=0;i<10;i++)
 {
 printf("\n%d %d",i,b[i]);
 }
 getch();
}