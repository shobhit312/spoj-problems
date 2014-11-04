#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	int x=0,a=1;
	while(a){
		cin >>  x;
		if(a!=1)
			break;
		if(x!=42)
			cout << '\n' << x;
		else
			a++;
	}
	return 0; 
}