#include <stdio.h>
main()
{
	int i,j,n,k,t;
	scanf("%d",&n);
	int a[n]={0};
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		k=0;
		for(i=n-1;i>j;i--)
		{
			if(a[i]>a[i-1])
			{
				t=a[i];
				a[i]=a[i-1];
				a[i-1]=t;
				k=1;
			}
		}
		if(k==0)
		{
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
}
