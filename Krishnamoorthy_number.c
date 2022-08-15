#include <stdio.h>
int fact(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int main()
{
	int n;
	printf("Enter a number :");
	scanf("%d",	&n);
	int temp=n;
	int rem;
	int sum=0;
	int z;
	while(temp>0)
	{
		rem=temp%10;
		z=fact(rem);
		sum=sum+z;
		temp=temp/10;
	}
	if(sum==n)
	    printf("%d is krishnamoorthy number",n);
	else
	  printf("%d is not krishnamoorthy number",n);

	
	return 0;
}

