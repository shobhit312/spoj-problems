#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <string>
#define rep(i,a,n) for(i=a; i<n; i++)
#define in(x)  scanf("%d",&x)
#define out(y)  printf("%d ",y)
using namespace std;
long long int calculate(int n , int *arr){
	if(n>=1 && n<=10)
		return n;
	
	else 
		return calculate(n/2)+calculate(n/3)+calculate(n/4);
}
int main()
{
	long long int t,i,j,k,n,num;
	cin >> t;
	while(t--)
	{
		cin >> n;
		num=calculate(n);
		cout <<'\n'<< num;
	}
	return 0;
}