#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <string>
#include <cmath>
#define rep(i,a,n) for(i=a; i<n; i++)
#define in(x)  scanf("%d",&x)
#define out(y)  printf("%d ",y)
using namespace std;
int main()
{
	int n,sum=0,temp,a,i=2;
	cin >> n;
	temp=n;
	sum+=n;
	while(n>=(i*i))
	{
		sum+=((n-(i*i))/i)+1;
		i++;
	}
		printf("\n%d",sum);
		return 0;
}