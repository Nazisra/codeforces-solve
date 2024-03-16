
#include <bits/stdc++.h>
using namespace std;
#define rahad()                   \
ios_base::sync_with_stdio(0); \
cin.tie(0);                   \
cout.tie(0);
typedef                 long long ll;
#define                all v.begin(), v.end()
#define                 output             \
                       for (auto it : v)      \
                        {                      \
                                cout << it << " "; \
                        }

int main()
{
   // rahad();
    map<string, string> m;
    int t, t1;
    cin >> t >> t1;
    for (int i = 0; i < t; i++)
    {
        string s, n;
        cin >> s >> n;
        m[n] = s;
    }

    while (t1--)
    {
        string s1, n1;
        cin >> s1 >> n1;

        n1.pop_back();
        cout << s1 << " " << n1 << ";"
             << " #" << m[n1] << endl;
    }
}