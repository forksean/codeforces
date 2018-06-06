#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int cursize = 0;
    set<int> diff;
    vector<int> pos;
    for(int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;
        diff.insert(num);
        if(cursize != diff.size())
        {
            pos.push_back(i);
            cursize = diff.size();
        }
    }
    if(cursize < q)
        cout << "NO";
    else
    {
        cout << "YES" << endl;
        for(int j = 0; j < q; j++)
            cout << pos[j] << " ";
    }
    return 0;
}
