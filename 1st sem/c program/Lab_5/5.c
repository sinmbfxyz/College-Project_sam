#include <stdio.h>
void main()
{
	int a[5],i,count=0;
printf("Enter 5 numbers: ");
for(i=0;i<5;i++)
{
	scanf("%d",&a[i]);
	if(a[i]>0)
	{
		count++;
	}
}
printf("The total positive numbers: %d",count);
}