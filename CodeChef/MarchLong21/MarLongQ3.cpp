#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define ld long double
#define PI pair<int, int>
#define Pb push_back
 
#define VI vector<int>
#define VUI vector<unsigned int>
#define VL vector<ll>
#define VB vector<bool>
#define VPI vector<PI>
 
#define VVI vector<VI>
#define VVL vector<VL>
 
#define ALL(XX) XX.begin(), XX.end()
#define READ(XX) do { for (auto& x139874: XX) { cin >> x139874; } } while (0)
#define SORT(XX) do { sort(XX.begin(), XX.end()); } while (0)
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
 cout.tie(nullptr);
 
  ll T;
  cin >> T;
  while(T--)
  {
      ll c;
      cin >> c;
      if(c==1)
      {
        cout << '0' << "\n";
        continue;
      }
      ll pos=0;
      pos = (log2(c));
    //  cout << pos << "\n";
      int n1= pow(2,pos);
      int n2= 1<<pos;
    //  cout << n1 << " " << n2 << "\n";
      n2= n2 | n2-1;
      n2= c ^ n2;
      n2= n2+n1;
      n1= n1-1;
      cout << n1 * n2 <<  "\n";
  }
return 0;
}