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
	int num,k=3,i,j,t,arr[65];
	long long int n;
	
	cin >> t;
	while(t--){	
		cin >> n;
		for(i=0;i<65;i++)
			arr[i]=0;
		arr[0]=2;
		arr[1]=9;
		arr[2]=1;
		k=3; j=0;
		for(i=1;i<=n-1;i++)
		{
			arr[3]++;
			k=3;
			while(arr[k]==10)
			{
				arr[k]=0;;
				arr[k+1]++;
				k++;
			}
		}
		j=64;
		while(arr[j]==0)
			j--;
		printf("\n");
		for(i=j;i>=0;i--)
			cout << arr[i]; 
	}
return 0;

}