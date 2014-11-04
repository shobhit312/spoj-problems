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
	int t,num=0,i;
	while(1){
		num=0;
		cin >> t;
		if(!t)
			break;
		for(i=1;i<=t;i++)
			num+=(i*i);
		cout << '\n'<< num ;

	}
	return 0;
}