#include <stdio.h>

int main()
{
	int n;
	printf("Enter a number :");
	scanf("%d",	&n);
	int neon=n*n;
	
	int temp=n;
	int rem;
	int sum=0;
	
	while(neon>0)
	{
		rem=neon%10;
		sum=sum+rem;
		neon=neon/10;
	}
	if(sum==n)
	    printf("%d is Neon number",n);
	else
	  printf("%d is not Neon number",n);

	
	return 0;
}

