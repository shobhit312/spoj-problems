#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <string>
#define rep(i,a,n) for(i=a; i<n; i++)
#define in(x)  scanf("%d",&x)
#define out(y)  printf("%d ",y)
using namespace std;
int convert(string crr,int temp)
{
	int num,i=0,n;
	temp=0;
	n=crr.length();
	while(i<n)
	{
		temp=(temp*10)+(crr[i]-'0');
		i++;
	}

	return temp;
}
int checkstring(string str1 , string str2 , string str3)
{
	int i=0;
	while(str1[i]!='\0'){
		if(str1[i]=='m')
			return 1;
		i++;
	}
		i=0;
	while(str2[i]!='\0'){
		if(str2[i]=='m')
			return 2;
		i++;
	}
		return 3;
}
int main()
{
	int n,i,k,j,t,num,temp1,temp2,temp3,ans;
	string str1,plus,str2,equal,str3;
	cin >> t;
	while(t--)
	{
		cin >> str1 >> plus >> str2 >> equal >> str3;
		num=checkstring(str1,str2,str3);
		temp1=convert(str1,temp1);
		temp2=convert(str2,temp2);
		temp3=convert(str3,temp3);
		if(num==1){
			temp2=convert(str2,temp2);
			temp3=convert(str3,temp3);
			ans=temp3-temp2;
			printf("\n%d + %d = %d ",ans,temp2,temp3); 
		}
		else if(num==2){
			temp1=convert(str1,temp1);
			temp3=convert(str3,temp3);
			ans=temp3-temp1;
			printf("\n%d + %d = %d ",temp1,ans,temp3);	
		}
		else {
			temp1=convert(str1,temp1);
			temp2=convert(str2,temp2);
			ans=temp1+temp2;
			printf("\n%d + %d = %d ",temp1,temp2,ans);
		}
	}
	return 0;
}