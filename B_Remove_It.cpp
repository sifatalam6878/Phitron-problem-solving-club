#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,x;
    cin >> n >> x;
    bool element = true;
    for(int i=0;i<n;i++)
    {
        int num;
        cin >> num;
        if(num != x)
        {
            if(!element)
            {
                cout << " ";
            }
            cout << num;
            element = false;
        }
    }
    cout << endl;
    return 0;
}