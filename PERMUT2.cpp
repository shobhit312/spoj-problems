#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <string>
#define rep(i,a,n) for(i=a; i<=n; i++)
#define in(x)  scanf("%d",&x)
#define out(y)  printf("%d ",y)
#define MAX 100000
using namespace std;
int main()
{
	int n,i,j,k,temp,arr[MAX],crr[MAX];
	 while(1)
	 {
	 	cin >> n;
	 	if(n==0)
	 		break;
	 	rep(i,1,n)
	 	{
	 		cin >> temp;
	 		arr[i]=temp;
	 		crr[temp]=i;	
	  	}
	  	rep(i,1,n)
	  	{
	  		if(arr[i]!=crr[i])
	  			break;
	  	}
  		if(i>n)
	  	{
	  		printf("\nambiguous");
	  	}
	  	else
	  		printf("\nnot ambiguous");
	 }
	 return 0;
}

