//INCLUDE
#include <bits/stdc++.h>
using namespace std;
//DEFINE
#define gc getchar_unlocked			//char c = gc();
#define fo(i,n) for (i=0;i<n;i++)
#define Fo(i,k,n) for (i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll	long long
#define lli	long long int
#define pb	push_back
#define mp	make_pair
#define F 	first
#define S 	second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626	//to pi or not to pi.
#define MOD 1000000007
#define INF 0x3f3f3f3f
//TYPEDEF
typedef pair<int, int>	pi;
typedef pair<lli, lli>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pi>		vpi;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	lli t;
	cin>>t;
	while(t--) {
		lli n,a,b;
		cin>>n>>a>>b;
		lli c;
		if ((n%2) == 0)	{ //Even
			if((n/2) == abs(a - b)) {
				c = 0;
			}
			else if ((n/2) < abs(a-b)) {
				c = abs((n) - (abs(a - b) + 1));
			}
			else if ((n/2) > abs(a-b)) {
				c = abs(abs(a - b) - 1);
			}
		} 
		else { //Odd
			if (floor(n/2) >= abs(a-b)) {
				c = abs(abs(a-b) - 1);
			} else {
				c = abs((n) - (abs(a-b) + 1));
			}
		}
		cout<<c<<endl;

	}

	return 0;
}

ll mpow(int base, int exp) {
	base %= MOD;
	int result = 1;
	while (exp > 0) {
		if (exp & 1) result = ((ll)result * base) % MOD;
		base = ((ll)base * base) % MOD;
		exp >>= 1;
	}
	return result;
}
