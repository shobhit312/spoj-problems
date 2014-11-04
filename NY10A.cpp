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
	int i,n,j=1,t,ans;
	string str;
	cin >> t;
	while(t--)
	{
		cin >> n;
		cin >> str;
		ans=0;
		cout <<'\n'<<n; 
		for(i=1;i<39;i++)
		{
			if(str[i-1]=='T' && str[i]=='T' && str[i+1]=='T')
				ans++;
		}
		cout <<" "<< ans;
		ans=0;
		for(i=1;i<39;i++)
		{
			if(str[i-1]=='T' && str[i]=='T' && str[i+1]=='H')
				ans++;
		}
		cout <<" "<< ans;
		ans=0;
		for(i=1;i<39;i++)
		{
			if(str[i-1]=='T' && str[i]=='H' && str[i+1]=='T')
				ans++;
		}
		cout <<" "<< ans;
		ans=0;
		for(i=1;i<39;i++)
		{
			if(str[i-1]=='T' && str[i]=='H' && str[i+1]=='H')
				ans++;
		}
		cout <<" "<< ans;
		ans=0;
		for(i=1;i<39;i++)
		{
			if(str[i-1]=='H' && str[i]=='T' && str[i+1]=='T')
				ans++;
		}
		cout <<" "<< ans;
		ans=0;
		for(i=1;i<39;i++)
		{
			if(str[i-1]=='H' && str[i]=='T' && str[i+1]=='H')
				ans++;
		}
		cout <<" "<< ans;
		ans=0;
		for(i=1;i<39;i++)
		{
			if(str[i-1]=='H' && str[i]=='H' && str[i+1]=='T')
				ans++;
		}
		cout <<" "<< ans;
		ans=0;
		for(i=1;i<39;i++)
		{
			if(str[i-1]=='H' && str[i]=='H' && str[i+1]=='H')
				ans++;
		}
		cout <<" "<< ans;
		j++;

	}
}