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
	long long int t,n,i,num,sum;
	cin >> t;
	while(t--)
	{
		cin >> n;
		sum=0;
		i=n;
		while(i--)
		{
			cin >> num;
			sum=((sum%n)+(num%n))%n;
		}
		if(sum==0)
		{
			cout <<'\n'<< "YES";
		}
		else
		{
			cout <<'\n'<< "NO";
		}
	}
	return 0;
}