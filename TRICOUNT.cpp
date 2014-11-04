#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	long long int n,ans,i;
	int t;
	cin >>t;
	while(t--)
	{
		cin >> n;
		ans=(n * (n + 2) * (2*n + 1) / 8);
		cout <<'\n'<< ans;
		
	}
	return 0;
}
/*
	if((int(n)%2)==1)
		{
			ans=(n*n)+(((n-1)*(n-1)*(n-1))/6)+(((n-1)*(n-1))/2)+((n-1)/3);
			printf("\n%0.0f",ans);
		}
		else
		{
			ans=(n*n)+(n*((n*n)-1))/6;
			printf("\n%0.0f",ans);
		}
		*/
