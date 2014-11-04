#include <iostream>
using namespace std;
int main(){
	int a,t,count,temp;
	cin >> t;
	while(t--){
		count=0;
		cin >> a;
		while(a%5!=0)
				a--;
		while(a>0){
			temp=a;
			while(temp>0 && temp%5==0){
				count++;
				temp=temp/5;
			}
			a-=5;
		}
		cout <<'\n'<< count;
	}
	return 0;
}