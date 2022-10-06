#include<stdio.h>
int main()
{
	int n,f=1,i,r,s=0;
	printf("Enter the value : ");
	scanf("%d",&n);
	i=n;
	while(n>0)
	{
		r=n%10;
		while(r>=1)
		{
			f=f*r;
			r--;
		}
		s=s+f;
		f=1;
		n=n/10;
	}
	if(s==i)
	printf("%d is a Krishnamurthy number",i);
	else
	printf("%d is not a Krishnamurthy number",i);
	return 0;
}