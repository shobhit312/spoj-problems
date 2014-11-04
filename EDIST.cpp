#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <list>
#include <string.h>
using namespace std;
int main()
{
	int t,i,j,k,n1,n2,count=0 ;
	char str1[2000],str2[2000];
 	t=10;
	while(t--)
	{
		cin >> k;
		scanf("%s",str1);
		scanf("%s",str2);
		count=0;
		n1=strlen(str1);
		n2=strlen(str2);
		if(n1==n2)
		{
			for(i=0;i<n1;i++)
				if(str1[i]!=str2[i])
					count++;
		}
		else if(n1>n2)
		{
			count=n1-n2;
			for(i=0;i<n2;i++)
				if(str1[i]!=str2[i])
					count++;
		}
		else
		{
			count=n2-n1;
			for(i=0;i<n1;i++)
				if(str1[i]!=str2[i])
					count++;	
		}
		cout << '\n' << count;
	}
	return 0;
}