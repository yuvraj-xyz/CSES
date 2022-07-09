#include <bits/stdc++.h>
using namespace std;

// Missing Number
int main()
{
    int n,a;
    cin >> n;
    vector<int> st;
    for(int i=0; i<n-1; i++)
    {
        cin >> a;
        st.push_back(a);
    }

    int res;
    sort(st.begin(), st.end());
    for(int i=0; i<n-1; i++)
    {
        if(st[i+1]!=st[i]+1)
        {
            res = st[i]+1;
            break;
        }
    }
    if(n==2 && st[0]==2)
    {
        res = 1;
    }
    cout << res;
}
