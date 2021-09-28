//Megha Sharma
//Binary Search
#include<bits/stdc++.h>
using namespace std;
void binary_search(vector<int>&arr,int n,int key)
{
	int l=0;r=n-1,comp=0;
	while(l<=r)
	{
		int mid=l+(r-l)/2;
		if(key==arr[mid])
		{
			break;
		}
		else if(key<arr[mid])
		r=mid-1;
		else
		l=mid+1;
		comp++;
	}
	if(l>r)
	count<<"Not Present"<<comp<<endl;
	else
	count<<"present"<<comp+1<<end1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>arr();
		for(int &i:arr)
		cin>>i;
		int key;
		cin>>key;
		binary_search(arr,n,key);
	}
	return 0;
}
