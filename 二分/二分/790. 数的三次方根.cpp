#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	double n;
	cin >> n;
	double flag = 1;
	if (n < 0)
	{
		n *= -1;
		flag = -1;
	}
	double l = 0, r = max(1.0,n);
	while (r - l > 1e-8)
	{
		double mid = (l + r) / 2;
		if (mid * mid * mid > n)
			r = mid;
		else
			l = mid;
	}
	printf("%lf\n", l*flag);
	return 0;
}