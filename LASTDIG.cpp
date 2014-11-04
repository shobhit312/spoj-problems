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
	int n,x,i,j,k,a,b,t,arr[7];
	cin >> t;
	while(t--)
	{
		cin >> a ;
		cin >> b;
		arr[0]=a;
		if(b==0)
			printf("\n1");
		else{
			for(i=1;i<6;i++)
			{
				arr[i]=a*arr[i-1];
			}
			if((arr[1]%10)==(arr[2]%10)){
				printf("\n%d",arr[1]%10);
			}
			else if((arr[1]%10)==(arr[3]%10)){
				printf("\n%d",arr[(b-1)%2]%10);
			}
			else if((arr[1]%10)==(arr[4]%10)){
				printf("\n%d",arr[(b-1)%3]%10);
			}
			else if((arr[1]%10)==(arr[5]%10)){
				printf("\n%d",arr[(b-1)%4]%10);
			}
			else if((arr[1]%10)==(arr[6]%10)){
				printf("\n%d",arr[(b-1)%5]%10);
			}
		}
	}
	return 0;
}