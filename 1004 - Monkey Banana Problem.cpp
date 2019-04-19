#include <bits/stdc++.h>
#define ll long long
#define sf(n) scanf("%lld",&n)
#define pf(n) printf("%lld\n",n)
#define sff(x,y) scanf("%lld %lld",&x,&y)
#define pff(x,y) printf("%lld %lld\n",x,y)
#define REP(I,N) for(I=0;I<N;I++)
#define REPP(I,A,B) for(I=A;I<=B;I++)
#define MS0(X) memset(X,0,sizeof(X))
#define MS1(X) memset(X,-1,sizeof(X))
#define F first
#define S second
#define Mod 1000000007
#define pb push_back

using namespace std;

typedef unsigned long long Ull;
typedef pair < int , int > Pii;
typedef pair < ll , ll > Pll;

ll a[300][300];

int main()
{
    ll  i,x,tc,cs=1,n,sum=0,mx=0,len,j,k=1;
    sf(tc);
    while(tc--){
       sf(n);
       k = 1;
       len = n - 1;
       for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                sf(a[i][j]);
                mx = max(a[i-1][j-1],a[i-1][j]);
                a[i][j] += mx;
            }
       }

       for(i=len,k=n+1;i>0;i--,k++){
            for(j=1;j<=i;j++){
                sf(a[k][j]);
                mx = max(a[k-1][j],a[k-1][j+1]);
                a[k][j] += mx;
            }
       }

       printf("Case %lld: %lld\n",cs++,a[2*n - 1][1]);
       MS0(a);
    }

    return 0;
}
