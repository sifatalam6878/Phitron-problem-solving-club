#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        string s;
        cin >> n >> k >> s;
        int odd = 0;
        int cnt[26] = {0};
      
        for(char c : s)
        {
            cnt[c-'a']
              ++;
        }
        for(int i=0;i<26;i++)
        {
           if(cnt[i]%2 == 1)
           {
                odd++;
            }
        }
        if(odd<=k+1 && (n-k)>=1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}