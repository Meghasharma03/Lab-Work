//Megha Sharma
//Linear Search 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>arr(n);
		for(int &i:arr)
		cin>>i;
		int key,i;
		cin>>key;
		for(i=0;i<n;i++)
		{
			if(arr[i]==key)
			break;
		}
		if(i==n)
		count<<"Not Present"<<n<<end1;
		else 
		count<<"Present"<<i+1<<end1;
	}
	return 0;
}
