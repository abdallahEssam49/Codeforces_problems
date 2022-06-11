// Handel : Mr_Crusher -- > https://codeforces.com/profile/Mr_Crusher

#include <bits/stdc++.h>
#define clr(str , charr) memset(str,charr, sizeof(str))
using namespace  std;

const int mod = 1e9+7 ; 

#define read(arr,n) for(int i=1;i<=n;i++)cin>>arr[i];
#define write(arr,n) for(int i=1;i<=n;i++)cout<<arr[i]<<" ";


#define lb lower_bound 
#define up upper_bound 

#define ll long long
#define ld long double
#define ull unsigned long long
#define ull unsigned long long
#define pi (3.1415926)
 
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
 
#define Filein(N) freopen("N.txt", "r", stdin);
#define Fileout(N) freopen("N.txt", "w", stdout);

#define pb push_back
#define mp make_pair

#define f first
#define s second

#define en "\n"
#define sp " "
#define eps 1.0E-14
#define l length()
#define preci(x) cout << fixed<<setprecision(x)
#define infmax LONG_LONG_MAX
#define infmin LONG_LONG_MIN
#define bit __builtin_popcountll /*It returns the numbers of set bits in an integer 
(the number of ones in the binary representation of the integer).*/

#define all(v)			(v).begin(),(v).end()
#define sz(v)			(((int)((v).size())))
void fast(){
 ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
}

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}
 
ll lcm(ll x, ll y){return x / gcd(x, y) * y;};

ll fastpow(ll a,ll b)
{
  ll wynik=1;
  while (b)
  {
    if (b&1)wynik=(wynik*a)%mod;
    a=(a*a)%mod;
    b>>=1;
  }
  return wynik;
}

bool isp(ll a)

{

  if (a == 2)return 1;
  if (a%2 == 0|| a==1)return false;

  for (ll i =3 ; i*i<=a ; i+=2)
  {
    if (a %i ==0)return false;
  }

  return true;
}

const int mx = 1e6+5 ; 
ll a[mx];

ll fre[mx];

ll b[mx];
ll c[mx];
bool sortPairs(const pair<char, int> &x, const pair<char, int> &y)
{
    return (x.s > y.s);
}

vector < pair < int, int > > v;


void solve ()
{

    //freopen("in.txt", "r" , stdin);
	//freopen("ou.txt" , "w" , stdout);
	
	int n,k ; cin>>n>>k; int ans=0;
	for (int i=0 ; i<n; ++i)cin>>a[i];
	for (int i=0 ; i<n ; ++i)
	{
		if (a[i] > 0 && a[i] >= a[k-1])ans++;
	}
	cout << ans;
}



int main() 
{
  fast();
  //int t; cin>>t;
  //while(t--)
  solve();
  //calctime();
}
