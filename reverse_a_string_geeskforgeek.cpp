
// question   সবার শেষ এ লিখছি

#include <bits/stdc++.h>
using namespace std;
#define rahad() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
#define all v.begin(),v.end()
#define output for(auto it:v){cout<<it<<" ";}

// author : Md Nazmul Islam Rahad Nazisra


class Solution
{
public:
    // Function to reverse words in a given string.
    string reverseWords(string s)
    {

        string x;
        string temp;

        for (int i = s.length() - 1; i >= 0; i--)
        {

            if (s[i] == '.')
            {
                reverse(temp.begin(), temp.end());
                x = x + temp;
                x.push_back('.');
                temp.clear();
            }
            else
            {

                temp.push_back(s[i]);
            }
        }

        reverse(temp.begin(), temp.end());

        x = x + temp;

        return x;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}

/*
Given a String S, reverse the string without reversing its individual words. Words are separated by dots.

Example 1:

Input:
S = i.like.this.program.very.much
Output: much.very.program.this.like.i
Explanation: After reversing the whole
string(not individual words), the input
string becomes
much.very.program.this.like.i
Example 2:

Input:
S = pqr.mno
Output: mno.pqr
Explanation: After reversing the whole
string , the input string becomes
mno.pqr

Your Task:
You dont need to read input or print anything. Complete the function reverseWords() which takes string S as input parameter and returns a string containing the words in reversed order. Each word in the returning string should also be separated by '.'


Expected Time Complexity: O(|S|)
Expected Auxiliary Space: O(|S|)*/
