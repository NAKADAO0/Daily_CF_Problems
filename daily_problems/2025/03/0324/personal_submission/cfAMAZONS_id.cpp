#include<bits/stdc++.h>
using namespace std;
const int N =2e5 + 10;
const int mod=1e9+7;
typedef long long ll;
bool cmp(pair<int,int> p1,pair<int,int> p2)
{return p1.first<p2.first;}
void solve(){
	int n,k;cin>>n>>k;
    int d[n+1];vector<pair<int,int>> vp;int maxi=0;vector<int> rec[n+1];
    for(int i=1;i<=n;i++){cin>>d[i];rec[d[i]].push_back(i);maxi=max(maxi,d[i]);}
    // sort(vp.begin(),vp.end(),cmp);
    if(rec[0].size()!=1||rec[1].size()>k){cout<<-1<<endl;return ;}

    for(int i=2;i<=maxi;i++)
    {
        if(rec[i].size()>rec[i-1].size()*(k-1)){cout<<-1<<endl;return ;}

    }
    cout<<n-1<<endl;
    // cout<<rec[0][0]<<"   ";
    for(int i=1;i<=maxi;i++)
    {
        for(int j=0;j<rec[i].size();j++)
        {
            int M=(i==1?k:k-1);
            cout<<rec[i-1][j/M]<<" "<<rec[i][j]<<endl;
        }
    }
    
}

// int solve1() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     int n, k;
//     cin >> n >> k;

//     vector<vector<int>> tmp(n);
//     for (int i = 1; i <= n; i ++) {
//         int d;
//         cin >> d;
//         tmp[d].emplace_back(i);
//     }

//     if (tmp[0].size() != 1) cout << -1;
//     else {
//         for (int i = 1; i < n; i ++) {
//             if (tmp[i].size() > tmp[i - 1].size() * (i == 1 ? k : k - 1)) {
//                 return cout << -1, 0;
//             }
//         }

//         cout << n - 1 << '\n';
//         for (int i = 1; i < n; i ++) {
//             for (int j = 0; j < tmp[i].size(); j ++) {
//                 cout << tmp[i - 1][j / (i == 1 ? k : k - 1)] << ' ' << tmp[i][j] << '\n';
//             }
//         }
//     }

//     return 0;
// }
int main(){
    int t=1;
    // cin>>t;
    while(t--)
    {solve();}
    return 0;
}
