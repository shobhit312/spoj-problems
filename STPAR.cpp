#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <string>
#define rep(i,a,n) for(i=a; i<n; i++)
#define in(x)  scanf("%d",&x)
#define out(y)  printf("%d ",y)
using namespace std;
int arr[1002],c=1,n,crr[1002];
void check(int n){
	if(n==0)
		return;
		int i=1;
	while(i<=n){
		if(arr[i]!=i)
			remove(i);
		else 
			i++;
	}
	return 0;
}
void remove(int i)
{
	crr[c]=arr[i];
	c++;
	for(int j=i; j<=n; j++)
	{
		arr[j]=arr[j+1];
	}
	n--;
	check(n);
}
int main()
{
	int j,l,k,i;
	cin >> n;
	for(i=1;i<=n;i++)
	{
		cin >> arr[i];
	}
	check(n);
	for(i=1;i<=n;i++)
	{
		printf("%d   ",arr[i]);
	}
	printf("\n");
	for(i=1;i<=n;i++)
	{
	printf("%d   ",crr[i]);
	}
	

	return 0;
}