#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string str;
    cin >> N >> str;
    vector<long long> mp(2 * N + 1, 0);
    auto temp = mp.begin() + N;
    long long  ans = 0, cnt = 0;
    for (char c : str) {
        switch (c) {
            case '+':
                ++*temp;
                break;
            case '-':
                --*temp;
                break;
            case '<':
                --temp;
                break;
            case '>':
                ++temp;
                break;
            default:
                cnt++;
                ans += *temp;
                break;
        }
        if (cnt)
            cout << ans << "\n";
        else
            cout << "z\n";
    }
}

