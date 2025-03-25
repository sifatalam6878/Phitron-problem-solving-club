#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int one_monstar = 0;
        int other_monstar = 0;
        
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            if(x == 1)
             one_monstar++;
            else
             other_monstar++;
        }

        int spel = one_monstar/2; 
        spel += other_monstar;
    
        if(one_monstar %2 == 1)
          spel++;
        cout << spel << endl;
    }
    return 0;
}