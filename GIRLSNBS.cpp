
#include <stdio.h>

int main (void)
{
	while (1)
	{
		int g, b;
		scanf ("%d%d", &g, &b);
		if (g == -1 && b == -1)
		  break;
		else
		{
			if (g == 0)
			  printf ("%d\n", b);
			else if (b == 0)
			  printf ("%d\n", g);
			else if (g == b)
			  printf ("1\n");
			else
			{
				int places, people;
				if (g > b) { places = b + 1; people = g; }
				else { places = g + 1; people = b; }
				if (people % places)
				  printf ("%d\n", people / places + 1);
				else
				  printf ("%d\n", people / places);
			}
		}
	}
  
	return 0;
}/*#include <stdio.h>
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
	int g,b,j,k,temp;
	while(1)
	{
		cin >> g >> b;
		if(g==-1 && b==-1)
		 	break;
		if(b>g){
		 	temp=b;
		 	b=g;
		 	g=temp;
		 }
		 if(b==0){
		 	cout <<'\n'<< g;	
		 }
		 else if(g%b==0 && b!=1)
		 	cout <<'\n'<<(g+1)/b;
		 else
		 	cout <<'\n'<<(g+1)/(b+1);  
	}
	return 0;
} */