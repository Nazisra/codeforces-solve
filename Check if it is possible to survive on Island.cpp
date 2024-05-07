
//link
//https://www.geeksforgeeks.org/problems/check-if-it-is-possible-to-survive-on-island4922/1


//Nazmul islam rahad




#include <bits/stdc++.h>
using namespace std;



class Solution{
public:
    int minimumDays(int S, int N, int M){
        int sunday=S/7;
        int buyingdays=S-sunday;
        
        int totalfood=S*M;
        int ans=0;
        
        if(totalfood%N==0)  ans = totalfood/N;
        else{
            ans=totalfood/N;
            ans=ans+1;
            
        }
        
        if(ans<=buyingdays)
        return ans;
        
        else{
            return -1;
        }
        
        
        
        
        
        
        
    }
};



int main(){
    int t;
    cin>>t;
    while(t--){
        int S, N, M;
        cin>> S >> N >> M;
        
        Solution ob;
        cout<<ob.minimumDays(S, N, M)<<endl;
    }
    return 0;
}
