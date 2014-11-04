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
	unsigned long long int n;
	cin >> n;
	if(n==1 || n==0 )
		cout << '\n' << "TAK";
	else
	{
		while(n>0)
		{
			if(n%2!=0 && n!=1)
				break;
			n=n/2;
		}
		printf((n==0)?"\nTAK":"\nNIE");
	}
	return 0;
}