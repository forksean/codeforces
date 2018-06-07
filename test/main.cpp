#include <bits/stdc++.h>

using namespace std;

int main()
{
    //////
    //////
    int n;
    cin >> n;
    vector<string> subs;
    for(int i = 1; i <= n; i++)
    {
        string inpt;
        cin >> inpt;
        subs.push_back(inpt);
    }
    sort(subs.begin(), subs.end());

    return 0;
}
