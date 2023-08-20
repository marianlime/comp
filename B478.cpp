#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

#define fi first
#define se second
#define mp make_pair;
#define fastIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);


const int N = 14;

ll a[N];
ll b[N];

int main(){
  fastIO;
  int n = 14;
  ll ans = 0;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j <= n; j++){
      b[j] = a[j];
    }
    b[i] = 0;
    int add;
    for(int j = 1; j <= n; j++){
      b[( i + j) % n] += a[i] / n;

      if(a[i] % n >= j){
        b[(i + j) % n] ++ ;
      }
    }
    ll cur = 0;
    for(int j = 0;j < n;j++){
      if(b[j] % 2 == 0) cur += b[j];
    }
    ans = max(ans, cur);
  }
  cout << ans << "\n";
  return 0;
}