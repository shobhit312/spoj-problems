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
	int i,j,k,n,arr[2,001];
	while(1)
	{
		cin >> n;
		if(n==0)
			break;
		rep(i,0,n)
			cin >> arr[i];
		sort(arr,arr+n);



	}
return 0;
}