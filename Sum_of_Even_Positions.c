#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	int i,sum=0;
	for(i=0; i<n; i++) 
	{
		scanf("%d", &arr[i]); 
	}
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			sum+=arr[i];
		}
	}
	printf("%d",sum);
}
