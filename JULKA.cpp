#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <string>
#define rep(i,a,n) for(i=a; i<n; i++)
#define in(x)  scanf("%d",&x)
#define out(y)  printf("%d ",y)
using namespace std;
long factorial(int);
long find_ncr(int, int);
int main()
{
	int n,i,j,k,l,qns=0,pos,plus1=0,plus2=0,r;
	float half=1;
	long ncr, npr;
	string one,two;
	cin >> one >> two;
	n=one.length();
	for(i=0;i<n;i++)
	{
		if(two[i]=='?')
			qns++; 
		if(one[i]=='+')
			plus1++;
		if(two[i]=='-')
			plus2++;
	}
	r=plus1-plus2;
	ncr = find_ncr(qns, r);
	for(i=0;i<n;i++)
		half*=(1/2);
	cout << half << '\n'<< ncr;
	if(r==0)
		cout << "\n 1";
	else 
		cout << '\n'<< half*ncr*1.0;
	return 0;
}
long find_ncr(int n, int r)
{
   long result;
 
   result = factorial(n)/(factorial(r)*factorial(n-r));
 
   return result;
}
long factorial(int n)
{
   int c;
   long result = 1;
 
   for( c = 1 ; c <= n ; c++ )
      result = result*c;
 
   return ( result );
}