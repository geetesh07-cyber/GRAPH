#include<bits/stdc++.h>
using namespace std;

/* author Geetesh Pandey*/

#define ll long long
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define pb push_back
#define pob pop_back
#define mp make_pair
#define endl "\n"
#define mod 1000000007

void init_code()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}

void solve()
{
     int n;
     cin>>n;
     vector<ll> v;
     REP(i,0,n-1)
     {
         ll temp;
         cin>>temp;
         v.pb(temp);
     }
     sort(v.begin(),v.end());
     int start = 0,end=v.size()-1;
     int ans = INT_MAX;
     while(start<end)
     {
        while(v[end]>v[start])
        {
            v[end] = v[end]-1;
            v[start] = v[start]+1;
        }
        ans = min(v[start]-v[end],ans);
     }
     cout<<ans<<endl;
}


int main()
{
    clock_t start = clock();
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
      solve();
    }
    #ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "\n\nExecuted in: " << (double)(end - start) / double(CLOCKS_PER_SEC)
    << " sec";
    #endif

  
  return 0;
}