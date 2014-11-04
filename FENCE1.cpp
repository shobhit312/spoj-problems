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
	float i,n;
	
	
	while(1)
	{
		cin >> n;
		if(!n)
			break;

		printf("\n%.2f",(n*n)/(2*3.1415926 ));
	}
	return 0;
}