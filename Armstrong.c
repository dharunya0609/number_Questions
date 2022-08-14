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
		sum=sum+(rem*rem*rem);
		temp=temp/10;
	}
	if(n==sum)
	    printf("%d is Amstrong number",n);
	else
	   printf("%d isn't Amstrong number",n);
	
	
	return 0;
}
