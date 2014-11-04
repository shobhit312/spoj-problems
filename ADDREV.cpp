#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <string>
#define rep(i,a,n) for(i=a; i<n; i++)
#define in(x)  scanf("%d",&x)
#define out(y)  printf("%d ",y)
using namespace std;
int rev(int n){
	int temp=0;
	while(n>0){
		temp=10*temp+(n%10);
		n=n/10;
	}
	return temp;
}
int main(){
	int a,b,t;
	cin>>t;
	while(t--){
		cin >> a >>b;
		cout << '\n' << rev(rev(a)+rev(b));  
	}
	return 0;
}