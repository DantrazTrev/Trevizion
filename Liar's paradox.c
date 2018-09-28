#include<stdio.h>
void main()
{
/*The liar's paradox*/
//Author: Dantraz Trevizion//
int i=1;
int n=i;
if (i==0)
i=1;
else 
i=0;
if (n==i)
printf("The paradox is ");
else 
printf("IDK");
}



