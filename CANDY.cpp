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
	int n,arr[10001],i,sum,total;
	while(1){
		cin >> n; sum=0; total=0;
		if(n==-1)
			break;
		for(i=0; i<n; i++){
			cin >>arr[i];
			sum+=arr[i];
		}
		if(sum%n)
			printf("\n-1");
		else{
			sum/=n;
			for(i=0; i<n; i++){
				if(arr[i]>sum)
					total+=(arr[i]-sum);
			}
			printf("\n%d",total);
	}
	
}
return 0;
}