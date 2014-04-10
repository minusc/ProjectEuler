#include<iostream>

using namespace std;

int main()
{
	int number=100, difference=0, square=0, sum=0;
// the square is used for squaring every number then add them togheter
// while sum is used for adding all the numbers then squaring the final result
	int i=0;
	for(i=0;i<=number;i++)
	{	square= square+(i*i);
		sum=sum+i;
	}	
	cout<<"\n The sum of each square number is  "<<square<<endl;
	cout<<"\n The square of the sum number is "<< sum*sum<<endl;
	difference=(sum*sum)-square;
	cout<<"\n The difference between those two is "<<difference<<endl;
	
	
	return 0;
}
