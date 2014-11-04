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
	int x,i,j,len;
	while(1){
		string demo;
		scanf("%d",&len);
		if(len==0)
			break;
		cin >>demo;
		x=demo.length();
		for(i=0;i<len;i++)
		{
			printf("%c",demo[i]);
			j=2;
			while(x>=((j*len)))
			{
				if(x>=((j*len)-(i+1)))
					printf("%c",demo[(j*len)-(i+1)]);

				if(x>=((j*len)+i))
					printf("%c",demo[(j*len)+i]);
				j+=2;
			}
		}
		cout << '\n';
	}
	return 0;
}