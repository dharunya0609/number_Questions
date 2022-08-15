#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number :");
	scanf("%d",	&n);
	int temp=n;
	int rem;
	int sum=0;
	while(temp>0)
	{
		rem=temp%10;
		sum=sum+rem;
		temp=temp/10;
	}
	
	    printf("%d id the Generic root",sum);

	
	return 0;
}
