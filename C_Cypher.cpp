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
        
        int curr[n];
        for(int i=0;i<n;i++)
        {
            cin >> curr[i];
        }
        
        int real[n];
        for(int i=0;i<n;i++)
        {
            int move_cnt;
            string move;
            cin >> move_cnt >> move;
            
            real[i] = curr[i];
            for(int j=move_cnt-1;j>=0;j--)
            {
                if(move[j] == 'U')
                {
                    if(real[i] == 0)
                    {
                        real[i] = 9;
                    }
                    else
                    {
                        real[i]--;
                    }
                }
                else
                {
                    if(real[i] == 9)
                    {
                        real[i] = 0;
                    }
                    else
                    {
                        real[i]++;
                    }
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout << real[i] << " ";
        }
        cout << endl;
    }
    return 0;
}