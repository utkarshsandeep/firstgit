#include<iostream>
using namespace std;
int main()
{
	int n,a,b,s,t;
	int l,p;
	a=b=0;
	l=p=0;
	cin>>n;
	while(n--)
	{
		cin>>s;
		cin>>t;
		a+=s;
		b+=t;
		if(a-b>l)
		{
			p=1;
			l=a-b;
		}
		else if(b-a>l)
		{
			p=2;
			l=b-a;
		}
	}
	cout<<p<<" "<<l;
}
