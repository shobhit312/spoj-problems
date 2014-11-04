#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <string>
#define rep(i,a,n) for(i=a; i<n; i++)
#define in(x)  scanf("%d",&x)
#define out(y)  printf("%d ",y)
using namespace std;
int main(){
	 long int n,m,t,i;
	
	cin >> t;
	while(t--){
		cin>>m>>n;
		if(m<=7)
		{
			if(n<=7){
				for(i=m;i<=n;i++)
					if(i==2 || i==3 || i==5 || i==7)
						printf("\n%ld",i);
			}
			else
			{
				for(i=m;i<=7;i++){
					if(i==2 || i==3 || i==5 || i==7)
						printf("\n%ld",i);
				}
				for(i=9;i<=n;i+=2){
					if(i%3 && i%5 && i%7)
						printf("\n%ld",i);
				}
			}
		}
		else
		{
			if(m%2==0)
				m++;
			for(i=m;i<=n;i+=2)
				if(i%3 && i%5 && i%7)
					printf("\n%ld",i);
		}
	}
	return 0;
}
