#include <stdio.h>
void main()
{
int i;
for(i=1;i<=100;i++)
{
	if(i%11==0)
	{
		continue;
	}
	printf("%d\n",i);
}
}