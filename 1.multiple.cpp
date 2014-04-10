#include<iostream>
using namespace std;
int main()
{
	int sum, i, x;
	i=3;
	x=1000;
	sum=0;
	for (i=3;i<1000;i++)
	{	
		if(i%3==0 || i%5==0)	
			sum=sum+i;

	}
	cout<<"\nThe sum of numbers which are multiplies of 3 or 5, below 1000 is "<<sum<<"\n";
	return 0;
}
