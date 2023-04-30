#include<stdio.h>

main()

{
	int a=1,n;
	
	printf("value of N=");
	scanf("%d",&n);
	
	while(n>=1)
	{
		if(n%2==0)
		{
			printf("%d\n",n);
		}
		
		n--;
	}
}
