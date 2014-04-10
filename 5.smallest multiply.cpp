#include<iostream>

using namespace std;

int main(int argc, char *arg[])
{
	double mcp5(double n);
	cout<<"---"<<mcp5<<" \n";
	return 0;
}

double mcp5(double n) {
	double floor(double x);
	double lcm(double n, double m);
	double i = floor(n/2.0) + 1.0;
	double lm = i + 1.0;
	for(; i < n; i++)
		lm = lcm(i, lm);
	return lm;
}

