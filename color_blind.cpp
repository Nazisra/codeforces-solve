#include <bits/stdc++.h>
using namespace std;
#define rahad() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
#define all v.begin(),v.end()
#define output for(auto it:v){cout<<it<<" ";}

int main(){
int t;
cin>>t;
while(t--){
int x1;
cin>>x1;
string x,y;
cin>>x>>y;

for(int i=0;i<x1;i++){

if(x[i]=='G'){
    x[i]='B';
}
if(y[i]=='G'){
    y[i]='B';
}
}

if(x==y){
    cout<<"YES"<<endl;
}
else
cout<<"NO"<<endl;


}













}