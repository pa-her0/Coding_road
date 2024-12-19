#include<bits/stdc++.h>
using namespace std;

const int N = 5e5+ 10;
int a[N];
int lift(int sta, int end){
      // 左右拆开
      if( sta == end){
        return 0;
      }

    return lift(sta,(sta + end ) >> 1) + lift((sta + end) >> 1 + 1, end);

}
int main(){

    return 0;
}