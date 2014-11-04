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
	int t,l;
	long long int n;
	cin >> t;
	while(t--)
	{
		cin >> n;

		printf("\n");
		if(n==1)
			cout << "192";
		else
			cout << n-1 << "192";
	}
	return 0;
}