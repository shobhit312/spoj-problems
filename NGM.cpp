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
	int n,i,j;
	cin >> n;
	if(n>=1 && n<=9)
		cout <<'\n'<< '1'<< '\n'<< n;
	else if(n%10==0)
	{
		cout <<'\n'<< '2'; 
	}
	else
	{
		cout <<'\n'<<'1'<<'\n'<< n%10;	
	}

	return 0;
}