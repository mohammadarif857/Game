Number Guessing Game between 1 to 100
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int n,guess,nguess=1;
clrscr();
srand(time(0));
n=rand()%100+1;
do
{
printf("\n Guess the no. between 1 to 100 =");
scanf("%d",&guess);
if(guess>n)
{
printf("\n Lower no. please");
}
else if(guess<n)
{
printf("\n higher no. please");
}
else
{
printf("\n you guessed in %d attempt",nguess);
}
nguess++;
}
while(guess!=n);
return 0;
getch();
}