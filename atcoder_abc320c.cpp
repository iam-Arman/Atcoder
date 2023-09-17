                                          //   Bismillahir Rahmanir Rahim      //
                                         //     After hardship comes ease     //
                                        //         AUTHOR : iamarman         //


#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

                                             ////       TEMPLATE       ////

//---------------------------------------------------------------------------------------------------------------------------------|

typedef vector<int> vii;
typedef vector<long long> vll;
typedef vector<pair<int,int> > vpi;
typedef vector<pair<long long,long long > > vpl;

# define ll long long
# define ull unsigned long long                                                                                                           
# define test int test; cin>>test; while(test--)
# define rep(i,a,b) for(int i=a;i<b;i++)
# define rep_n(i,a,b) for(int i=a;i<=b;i++)
# define rep_rev(i,a,b) for(int i=b;a>=1;i--)
# define pb push_back
# define el '\n'
# define R0 return 0
# define all(v) v.begin(),v.end()
# define srt(vvv) sort(vvv.begin(),vvv.end())
# define sp " "
# define vii vector<int>
# define vll vector<long long>
# define yess cout<<"YES"<<el
# define noo cout<<"NO"<<el
# define ff first
# define ss second
# define mp make_pair
# define sz(x) (int)x.size()

ll mod=1000000000+7;
ll INF=LLONG_MAX;
const double PI= acos(-1);
const double eps=1e-9;

# define mem(a,b) memset(a,b,sizeof(a))
# define sqr(a) ((a)*(a))
# define lcm(a,b) (a*b)/__gcd(a,b)

# define optimise   { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }
# define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
# define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

// find_by_order() - Returns an iterator to the k-th largest element (counting from zero)
// order_of_key()  - The number of items in a set that are strictly smaller than our item 
// greater instead of less for descending order
// less_equal works as ordered multiset
// we can use pair<int,int> instead of int for pair of orderd set


typedef vector<int>::iterator vit;
typedef vector<ll>::iterator vlt;
typedef set<int>::iterator sit;
typedef map<int,int>::iterator mit;


inline void file() {
 
#ifndef ONLINE_JUDGE
 
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
 
#endif // ONLINE_JUDGE

}

//----------------------------------------------------------------------------------------------------------------------------------|



                                                   // DEBUGGER //


//-----------------------------------------------------------------------------------------------------------------------------------|

template < typename F, typename S > ostream& operator << ( ostream& os, const pair< F, S > & p ) { return os << "(" << p.first << ", " << p.second << ")"; }
 
template < typename T > ostream &operator << ( ostream & os, const vector< T > &v ) { os << "{"; for(auto it = v.begin(); it != v.end(); ++it) { if( it != v.begin() ) os << ", ";  os << *it; }  return os << "}";  }
 
template < typename T >  ostream &operator << ( ostream & os, const set< T > &v ) { os << "["; for(auto it = v.begin(); it != v.end(); ++it) { if( it != v.begin() ) os << ", "; os << *it;  } return os << "]"; }
 
template < typename T > ostream &operator << ( ostream & os, const multiset< T > &v ) { os << "["; for(auto it = v.begin(); it != v.end(); ++it) { if( it != v.begin() ) os << ", "; os << *it; } return os << "]"; }
 
template < typename F, typename S > ostream &operator << ( ostream & os, const map< F, S > &v ) { os << "["; for(auto it = v.begin(); it != v.end(); ++it) { if( it != v.begin() ) os << ", "; os << it -> first << " = " << it -> second ; } return os << "]";  }
 
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
 
void faltu () { cerr << endl; }
 
template <typename T> void faltu( T a[], int n ) {   for(int i = 0; i < n; ++i) cerr << a[i] << ' '; cerr << endl;  }
 
template <typename T, typename ... hello>  void faltu( T arg, const hello &... rest) {   cerr << arg << ' ';  faltu(rest...);  }

//--------------------------------------------------------------------------------------------------------------------------------------|




                                                    /////    FUNCTIONS     /////



ll bigmod(ll base,ll power){ ll res=1; ll p=base%mod; while(power>0) { if(power%2==1) {  res=((res%mod)*(p%mod))%mod; }  power/=2; p=((p%mod)*(p%mod))%mod; } return res; }

ll poww(ll a,ll b) { ll ans=1; if(!b) return 1; while(b>1) {  if(b&1) { ans=ans*a%mod; } a=a*a%mod; b/=2; }return a*ans%mod; }

int gcd(ll a,ll b) { ll rem; while(b%a!=0)  {  rem=b%a;  b=a;  a=rem; } return a; }


int dx[]={-1, 1 , 0 , 0 , -1 ,-1, 1, 1};
int dy[]={ 0, 0 ,-1 , 1 , -1 , 1,-1, 1};


                                                    ///  CODE STARTS FROM HERE    ///

void solve()
{
  
  int n;
  cin>>n;
  string s1,s2,s3;

  cin>>s1>>s2>>s3;
  int ans=INT_MAX;

  for(int i=0;i<400;i++)
  {
    for(int j=0;j<400;j++)
    {
      for(int k=0;k<400;k++)
      {
        if(i==j or j==k or i==k ) continue;
        if(s1[i%n]==s2[j%n] and s1[i%n]==s3[k%n])
        {
          ans=min(ans,max(i,max(j,k)));
        }
      }
    }
  }

  if(ans==INT_MAX) cout<<-1<<el;
  else cout<<ans<<el;


  
}


int main()
{
    optimise;
    file();

    clock_t q= clock();

    //test
    {
      solve();
    }

    cerr << "Run Time : " <<((double)(clock() - q) / CLOCKS_PER_SEC)<<el;
  
}
