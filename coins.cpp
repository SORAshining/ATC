#include "bits/stdc++.h"
using namespace std;


//あなたは、500円玉を A枚、100円玉を B枚、50円玉を C枚持っています。 
//これらの硬貨の中から何枚かを選び、合計金額をちょうど X円にする方法は何通りありますか。

int main(){
    int A, B, C, X, ans;
    cin >> A >> B >> C >> X;
    ans = 0;
    for (int a = 0; a<=A; ++a){
        for (int b = 0; b<=B; ++b){
            for (int c = 0; c<=C; ++c){
                cout << a << b << c <<endl;
                int total = 500*a + 100*b + 50*c;
                if (total == X) ans++;
            }
        }
    }
    cout << ans << endl;
}