/* # 题目描述
程序员是善于思考的，有一天他在爬楼梯的时候想出一个问题。
楼梯有 n 级。每次你只能爬 1 级或者 3 级，那么你有多少种方法爬到楼梯的顶部？
开始的时候在0级楼梯，顶级在第n级。*/

#include<iostream>
  
using namespace std;
  
typedef long long ll;
ll ans,n;
  
void dfs(ll k) {
    if(k==n) {
        ans++;
        return;
    } else if(k>n) {
        return;
    }
    dfs(k+1);
    dfs(k+3);
}
  
int main() {
    while(cin>>n) {
        ans=0;
        dfs(0);
        cout<<ans<<endl;
    }
    return 0;
}
