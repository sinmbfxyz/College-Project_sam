#include <stdio.h>
void main()
{
	int n,rem,i=1000,temp;
	printf("Enter a four digit number: ");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=temp/i;
		switch(rem)
		{
			case 1:
				printf("ONE");
				break;
			case 2:
				printf("Two");
				break;
				case 3:
				printf("Three");
				break;
				case 4:
				printf("Four");
				break;
				case 5:
				printf("Five");
				break;
				case 6:
				printf("Six");
				break;
				case 7:
				printf("Seven");
				break;
				case 8:
				printf("Eight");
				break;
				case 9:
				printf("Nine");
				break;	
				case 0:
					printf("Zero");
					break;
		}
		temp%=i;
		n/=10;
		i/=10;
	}
	
}