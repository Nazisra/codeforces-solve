#include <bits/stdc++.h>
using namespace std;

#define opt()                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);



/*int solve(int x,int i){

if(i==x)return 1;
if(i>x)return 0;

return solve(x,i+1)+solve(x,i+2);


}

*/

int solve(int x)
{

    if (x < 2)
        return 1;

    return solve(x - 1) + solve(x - 2);
}

int main()
{

    int x;
    cout << "put the value you want to reach from basement : ";
    cin >> x;
    int ans = solve(x);
    cout << ans << endl;
}
