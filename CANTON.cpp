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
	int n,i,k,l,j,t,x=0,a,b,y=0;
	cin >>t;
	while(t--)
	{
		cin >> n;
		a=1;b=1;
		x=1; y=0;
		for(i=2;;i++)
		{	
			l=i;
			if(l%2==0)
			{
				if(x>=n)
					break;
				b++;
				x++;
				k=l-1;
				for(j=1;j<=k;j++)
				{
					if(x>=n){
					 y++; break;}
					a++;
					b--;
					x++;
				}
				if(y==1)
					break;
			}
			else
			{
				if(x>=n)
					break;
				a++;
				x++;
				k=l-1;
				for(j=1;j<=k;j++)
				{
					if(x>=n){
					y++; break; }
					a--;
					b++;
					x++;
				}
				if(y==1)
					break;

			}
		}
		cout <<'\n'<<"TERM"<<" "<< n<<" "<< "IS" << " " << a << '/' << b;
	}
	return 0;

}