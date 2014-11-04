#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <string>
#define rep(i,a,n) for(i=a; i<n; i++)
#define in(x)  scanf("%d",&x)
#define out(y)  printf("%d ",y)
using namespace std;
bool checkpalin(string demo)
{
 	int i=0,j,k,l,n;
 	n=demo.length();
 	while((n-1-i)>=i){
 		if(demo[n-1-i]!=demo[i])
 			return false;
 		i++;
 	}
 	return true;
}
int main(){
	string demo,crr;
	int t,i,k,n;
	cin >> t;
	while(t--)
	{
		cin >> crr;
		demo=crr;
		n=demo.length();
		if(n%2!=0){
			if(checkpalin(demo))
				demo[n/2]+=1;
			else{
				rep(i,0,n/2)
					demo[n-1-i]=demo[i];
				if(demo<crr)
					demo[n/2]++;
			}
		cout << demo;
		}
		else{
			if(checkpalin(demo))
			{
				demo[((n-1)/2)+1]+=1; demo[(n-1)/2]+=1;
			}
			else{
				for(i=0;i<n/2;i++)
					demo[n-1-i]=demo[i];
				if(demo<crr)
					 demo[((n-1)/2)+1]+=1; demo[(n-1)/2]+=1;
			}
			cout << demo;
		}
	}
	return 0;
}