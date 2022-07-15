#include <bits/stdc++.h>
using namespace std;

// Increasing Array
int main()
{
    int n;
    cin >> n;
    long long a;
    vector<long long> vec;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        vec.push_back(a);
    }

    long long count = 0;
    for(int i=1; i<n; i++)
    {
        while(vec[i]<vec[i-1])
        {
            vec[i]++;
            count++;
        }
    }
    cout << count << endl;
}
