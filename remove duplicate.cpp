#include <bits/stdc++.h>
using namespace std;
#define rahad() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
#define all v.begin(),v.end()
#define output for(auto it:v){cout<<it<<" ";}

int main(){
   rahad();

int t;
cin>>t;
int zz=t;
vector<int>v;
vector<int>v2(t+1);
vector<int>v3(t+1);
vector<int>last;
while(t--){
int x;
cin>>x;
v.push_back(x);

}
v2=v;
//reverse(v2.begin(),v2.end());
sort(v.begin(),v.end(),greater<int>());

int z=unique(v.begin(),v.end())-v.begin();

int xx=0;
map<int,int>m;
for(int i=0;i<z;i++){
 m[v[i]]++;
 

}
cout<<z<<endl;
for(int i=v.size()-1;i>=0;i--){
    
// if(m[v2[i]]==1){
   
  //  m[v2[i]]++;
 //}
 if(m[v2[i]]==1){
    last.push_back(v2[i]);
    m[v2[i]]++;
 }

}





for(int i=last.size()-1;i>=0;i--){
   cout<<last[i]<<" ";
   last.pop_back();
}

cout<<endl;


}


