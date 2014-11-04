#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <string>
#define rep(i,a,n) for(i=a; i<n; i++)
#define in(x)  scanf("%d",&x)
#define out(y)  printf("%d ",y)
#define MAX 999999
using namespace std;
int main()
{
	int i,j,k,n,m,t,arr[MAX],crr[MAX];
	cin >> t;
	while(t--)
	{
		cin >> n >> m;
		rep(i,0,n)
			cin >> arr[i];
		rep(j,0,m)
			cin >> crr[j];
			sort(arr,arr+n);
			sort(crr,crr+m);
			i=0; j=0;
			while(i<=n-1 || j<=m-1)
			{
				if(arr[i]<crr[j])
					i++;
				else
					j++;
			}
			printf((i>n)?"\nMechaGodzilla":"\nGodzilla");
	}
	return 0;
}