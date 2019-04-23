#include<iostream>
using namespace std;
typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);

	ll i,n,t,j,sum,x,total,start;

	cin>>t;
	while(t--)
	{
		cin>>n>>total;
		ll a[n];
		for(i=0;i<n;i++)
			cin>>a[i];

		for(i=sum=start=0;i<n;i++)
		{
			sum+=a[i];
			while(sum>total && start<i)
			{
				sum-=a[start];
				start++;
			}

			if(sum==total)
			{
				cout<<start+1<<" "<<i+1<<endl;
				break;
			}

		}

		if(i==n)
			cout<<-1<<endl;
	}

	return 0;
}