#include<bits/stdc++.h>
using namespace std;
const int N =2e5 + 10;
const int mod=1e9+7;
#define int long long
void solve(){
	int x;cin>>x;
    x*=-1;
    x=(x+360)%360;
    int div=10086,ans=-1;
    for(int i=0;i<4;i++)
    {
        int v=((x+i*90)+360)%360;
        int tmp=min(v,360-v);
        if(tmp<div)
        {
            div=tmp;
            ans=i;
        }
    }
    cout<<ans<<endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--)
    {solve();}
    return 0;
}
