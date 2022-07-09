#include <bits/stdc++.h>
using namespace std;

// Weird Algorithm
int main()
{
    long long n;
    cin >> n;

    vector<long long> res;
    res.push_back(n);

    while(n!=1)
    {
        if(n%2==0)
        {
            n/=2;
            res.push_back(n);
        }
        else if(n%2!=0)
        {
            n*=3;
            n+=1;
            res.push_back(n);
        }
    }
    long long s = res.size();
    for(int i=0; i<s; i++)
    {
        cout << res[i] << " ";
    }
}
