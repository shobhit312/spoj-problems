#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <string>
#define rep(i,a,n) for(i=a; i<n; i++)
#define in(x)  scanf("%d",&x)
#define out(y)  printf("%d ",y)
using namespace std;
int main()
{
	double ans=1;
	int t,i,n,k;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		ans=1;
		int j=k-1;
		for(i=n-1 ; i>(n-k) ; i--)
		{
			if(j>=1)
			{
				ans=(ans*double(i))/double(j);
				j--;
			}
			else
			{
				ans=ans*double(i);	
			}
		}
		while(j>=1)
		{
			ans=ans/double(j);
			j--;
		}

		printf("\n%0.0f",ans);

	}
	return 0;
}