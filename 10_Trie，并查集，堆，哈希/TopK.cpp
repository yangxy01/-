#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

const int N=100010;
int a[N];
int sz=0;

void down(int i)
{
	int index = i;
	if(2*i<=sz&&a[2*i]>a[index])
		index=2*i;
	if(2*i+1<=sz&&a[2*i+1]>a[index])
		index=2*i+1;
	if(i!=index)
	{
		swap(a[i], a[index]);
		down(index);
	}
}
int main()
{
	int n,k;
	cin>>n>>k;
	sz = k;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	
	for(int i=k/2;i>=1;i--)
		down(i);
	for(int i=k+1;i<=n;i++)
	{
		if(a[i]<a[1])
		{
			a[1]=a[i];
			down(1);
		}
	}
	for(int i=0;i<k;i++)
	{
		swap(a[1],a[sz]);
		sz--;
		down(1);
	}
	for(int i=1;i<=k;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
/*
10 5
40 2 33 26 35 8 8 26 29 2
*/
