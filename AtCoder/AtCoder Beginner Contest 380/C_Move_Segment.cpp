/*
**************************************************************
*Bis'Millah Hir Rah'Manir Rahim == start with the name of \n *
*                    ALLAH Subhana Tayala                    *
*                Author: Md. Mahabubar Rahman                *
*               CSE,RPI && Rangpur, Bangladesh               *
**************************************************************
*/
#include <bits/stdc++.h>
using namespace std;
#define Allhamdulillah 0
#define pb(x) push_back(x)
#define pp() pop_back()
#define ll long long int
#define foi(i, s, e) for (int i = s; i < e; i++)
#define cn(x) cin >> x
#define endl '\n'
#define Endl '\n'
#define nl cout << '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
     int n,k;cin>>n>>k;
     string s;cin>>s;
     vector<string>vc;
     string cmp;cmp+=s[0];
     for(int i=1;i<n;i++){
        if(s[i]==cmp.back())cmp+=s[i];
        else{
            vc.push_back(cmp);
            cmp=s[i];
        }
     }
     vc.push_back(cmp);
     int set=-1,cnt=0;
     for(int i=0;i<vc.size();i++){
        if(vc[i][0]=='1')cnt++;
        if(cnt==k){set=i;break;};
     }
     swap(vc[set-1],vc[set]);
     string ans="";
     for(auto &c:vc){
        for(auto &cc:c)ans+=cc;
     }
     cout<<ans<<endl;
}
/*mdmahabub55*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    // cin >> t;
    // t = 1;

    while (t--)
    {
        solve();
    }
    return Allhamdulillah;
}