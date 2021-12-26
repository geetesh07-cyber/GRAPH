#include<bits/stdc++.h>
using namespace std;

/* author Geetesh Pandey*/

#define For(i,n) for(int i=0;i<n;i++)
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define ll long long
#define pr <i,i> pair<int,int>
#define f first
#define s second
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
    string s;
    cin>>s;
    int count = 0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='N')
            count++;
    }
    if(count!=1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}


int main()
{
    clock_t start = clock();
    init_code();
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