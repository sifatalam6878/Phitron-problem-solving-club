#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long sum = 0;
    int smaller_odd = INT_MAX;
    for(int i=0;i<n;i++)
    {
        int num;
        cin >> num;
        sum += num;
        if(num%2 == 1 && num<smaller_odd)
        {
            smaller_odd = num;
        }
    }
    
    if(sum%2 == 1)
    {
        sum -= smaller_odd;
    }
    cout << sum << endl;
    return 0;
}