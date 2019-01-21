#include<stdio.h>

int time = 0; 
int minutes = 0; 
int hours = 0;

int main()
{

scanf("%d",&time);

minutes = time % 60;

hours = (time - minutes) / 60; 

printf("%d %d",hours, minutes); 

return(0);
}
