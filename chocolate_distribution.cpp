//author nazmul islam rahad


#include <bits/stdc++.h>
using namespace std;




class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    
    sort(a.begin(),a.end());
    
    int i=0;
    
    long long ans=INT_MAX;
    
    while(i<=n-m){
        int j=i+(m-1);
        
        long long diff=a[j]-a[i];
        ans=min(ans,diff);
        i++;
        

    }   
    return ans;
    }
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
