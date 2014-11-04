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
	int i=0,n,t,j,frn,arr[1001];
	cin >> t;
	while(t--)
	{
		i++;
		cin >> n;
		cin >>frn;
		rep(j,0,frn)
		{
			cin >> arr[j];
		}
		sort(arr,arr+frn);
		int sum=0,k=0;
		j=frn-1;
		while(sum<n && j>=0)
		{
			sum+=arr[j];
			k++;
			j--;
		}
		if(sum<n)
			printf("\nScenario #%d:\nimpossible\n",i);
		else
			printf("\nScenario #%d:\n%d\n",i,k);
	}
	return 0;
}