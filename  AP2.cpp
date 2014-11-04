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
	int i,t,T3,TL3,S,n,a,d;
	cin >> t;
	while(t--)
	{
		cin >> T3 >> TL3 >> S;
		n=(S*2)/(T3+TL3);
		d=(TL3-T3)/(n-5);
		a=T3-(2*d);
		cout >> n >>"   ">> d >> "    ">> a; 

	}
	return 0;
	
}