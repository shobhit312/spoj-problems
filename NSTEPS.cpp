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
	int x,y,t,x1,y1;
	cin >>t;
	while(t--){
		cin >> x >> y;
		x1=0; y1=0;
		for(int k=0;k<=10000;k++){
			if(x==x1 && y==y1){
				printf("\n%d",k);
				break;
			}
			else if(x1 > x && y1 > y ){
				printf("\nNo Number");
				break;
			}
			else if(k%8==0 || k%8==2 || k%8==4  || k%8==6){
				x1++; y1++;
			}
			else if(k%8==1 || k%8==5 ){
				x1++; y1--;
			}
			else if(k%8==3 || k%8==7){
				x1--; y1++;
			}
		}
	}
	return 0;
}
