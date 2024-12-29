#include<bits/stdc++.h>
#define int long long;

using namespace std;
bool exam(int i){
    string a = to_string(i);
    for(int j = 0; j < a.size()-1; j++){
       if(a[j+1] < a[j]){
        return false;
       }
    }
    return true;
}
signed main(){

     int l,r;
    cin >> l >> r;
    int cnt = 0;
    for(int i = l; i <= r; i++){
        if(exam(i)){
            cnt ++;
        }
    }
    cout << cnt <<endl;   
    
}