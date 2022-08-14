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
		sum=sum+1;
		temp=temp/10;
	}
	
	    printf("%d digits present in %d",sum,n);

	
	return 0;
}
