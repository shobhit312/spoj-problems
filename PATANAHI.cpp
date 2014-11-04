#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <string>
#define rep(i,a,n) for(i=a; i<n; i++)
#define in(x)  scanf("%d",&x)
#define out(y)  printf("%d ",y)
int arr[1002];
using namespace std;
int* check(int crr[], int n){
	if(n==0)
		return ;
	i=1;
	while(check[i]==i)
		i++;
}
int main()
{
	int n,j,l,k,crr[1002];
	cin >> n;
	for(i=1;i<=n;i++)
	{
		cin >> crr[i];
	}
	check(crr,n);
	return 0;
}