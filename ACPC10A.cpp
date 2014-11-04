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
	int a1,a2,a3,t;
	bool check;
	while(1){
		cin >> a1 >>a2 >> a3;
		if(a1==0 && a2==0 && a3==0)
			break;
		check=(a2-a1==a3-a2)?true:false;
		if(check)
			printf("AP %d\n",(2*a3-a2));
		else
			printf("GP %d\n",(a3*a3)/a2);
	}
	return 0;
}