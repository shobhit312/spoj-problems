#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <string>
#define rep(i,a,n) for(i=a; i<n; i++)
#define in(x)  scanf("%d",&x)
#define out(y)  printf("%d ",y)
using namespace std;
bool checkpattern(int arr[],int len)
{
	int i;
	len--;
	while(len--)
	{
		if(arr[len]!=9)
		return false;	
	}
	return true;
}

/*string makepalin(string crr)
{
	for(i=0;i<n/2;i++)
		crr[(n-1)-i]=crr[i];
	return crr;
}*/
int main()
{
	int t,i,len=0;
	int arr[1000000];
	char c='1';
	cin >> t;
	while(t--)
	{
		i=0;
		while(c!='\n')
		{
			cin >> c;
			arr[i]=c-'0';
			i++;
		}
		i=len;
		if(checkpattern(arr,len))
		{
			len=len-1;
			cout << '\n' << '1';
			while(len--)
			{
				cout<< '0';
			}		
			cout << '1';
		}
	}
		return 0;
}