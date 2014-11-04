#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <string>
#define rep(i,a,n) for(i=a; i<n; i++)
#define in(x)  scanf("%d",&x)
#define out(y)  printf("%d ",y)
using namespace std;
int* convert(string crr,int n1,int* arr)
{
	int i;
	for(i=0;i<n1;i++)
	{
		arr[i]=crr[i]-'0';
	}
	return arr;
}
int visual(int *arr,int n1)
{
	int i=0;
	while(arr[i]==0)
	{
		i++;
	}
	return i;
}
int* substract(int *arr,int n1,int *srr,int n2)
{
	int j=n1-1,i,k;
	for( i=n2-1;i>=0;i--)
	{
		if(arr[j]<srr[i])
		{
			if(arr[j-1]==0){
				k=j-1;
				while(arr[k]==0){
					arr[k]=9;
					k--;
				}
				arr[k]--;
				arr[j]+=10;	
			}
			else{
			arr[j]+=10;
			arr[j-1]--;
			}
		}
		arr[j]=arr[j]-srr[i];
		j--;
	}
		

	return arr;
}
int main()
{
	int *arr,i=0,n1,n2,*srr,j,k,mo,*sample,x=10;
	string crr,temp;
	while(x--){
		cin >> crr >> temp;
		if(crr==temp){
			cout<< '\n'<<crr <<'\n'<<'0';

		}
		else{
		n1=crr.length();
		n2=temp.length();
		sample=(int*)malloc(100*sizeof(int));
		arr=(int*)malloc(100*sizeof(int));
		srr=(int*)malloc(100*sizeof(int));


		sample=convert(crr,n1,sample);
		arr=convert(crr,n1,arr);
		srr=convert(temp,n2,srr);


		arr=substract(arr,n1,srr,n2);	
		
		for(k=0;k<n1;k++)
		{
			mo=arr[k]%2;
			arr[k+1]=mo*10+arr[k+1];
			arr[k]=arr[k]/2;
		}
		
		sample=substract(sample,n1,arr,n1);
		

		int num2=visual(sample,n1);
		int num1=visual(arr,n1);
		

		for(i=num2;i<n1;i++)
		{
			cout << sample[i];
		}
		
		printf("\n");

		for(i=num1;i<n1;i++)
		{
			cout << arr[i];
		}
	}
}
		return 0;
}