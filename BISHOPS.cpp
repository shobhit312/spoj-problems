#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <string>
#define rep(i,a,n) for(i=a; i<n; i++)
#define in(x)  scanf("%d",&x)
#define out(y)  printf("%d ",y)
using namespace std;
int main() {
    string input;
    int n,i,j,k,arr[102],temp;
    while(getline(cin, input))
    {   
        
        n=input.length();
        if(n==1 && input[0]=='1'){
        	cout <<'\n'<< '1';
        }
        else{
        for(j=0;j<102;j++)
        	arr[j]=0;
        j=n-1;
        int prev=0;
		for(i=n;i>=0;i--)
        {
        	if(j>=0){
        		temp=(input[j]-'0')*2+prev;
   				arr[i]=temp%10;
        		prev=temp/10;
        		j--;
        	}
        	else{
        		arr[i]=prev;
        	j--;
        	}
        }
        i=n;
       	if(arr[i]<=1)
        {
       		arr[i]=(10+arr[i])-2;
       		while(arr[i-1]==0)
       		{
       			i--;
       			arr[i]=9;
			}
			i--;
			arr[i]=arr[i]-1;	
       	}
       	else{
       		arr[i]-=2;
       	}

       	for(j=0;j<=n;j++)
       		if(arr[j]!=0)
       			break;
       		printf("\n");
       	for(i=j;i<=n;i++)
       		cout << arr[i];

    }
}
    return 0;
}