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
	int n,sum,i,t,arr[1002],crr[1002];
	cin >> t;
	while(t--)
	{
		sum=0;
		cin >> n;
		for(i=0;i<n;i++)
			cin >> arr[i];
		for(i=0;i<n;i++)
			cin >> crr[i];
		sort(arr,arr+n);
		sort(crr,crr+n);
		for(i=0;i<n;i++)
			sum+=(arr[i]*crr[i]);
		cout << sum;
	}
	return 0;
}