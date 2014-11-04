#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <string>
#define rep(i,a,n) for(i=a; i<n; i++)
#define in(x)  scanf("%d",&x)
#define out(y)  printf("%d ",y)
int crr[1002],k;
using namespace std;
int* ifsorted(int arr[],int n)
{
	int i=1;
	while(arr[i]==i && i<=n)
	{
		i++;
	}
	if(n!=1)
		remove(arr,n,i);
	else
		return arr;
}
void remove(int arr[],int n,int i)
{
		crr[k]=arr[i];
		for(int j=i; j<n;j++)
			arr[j]=arr[j+1];
		n--;
		ifsorted(arr,n);
		return ;
}
int main()
{
	int i,j,n,arr[1002],*grr;
	cin >> n;
	for(i=1;i<=n;i++)
	{
		cin >> arr[i];
	}
	k=1;
	grr=ifsorted(arr,n);
	return 0;
}