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
 
  int T;
  cin >> T;
  while(T--)
  {
      string s;
      cin >> s;
      int count=0;
      for(int i=0; i<s.length(); i++)
      {
          if(count==0)
          {
              if(s[i]=='1')
              {
                  count++;
                  continue;
              }
          }
          if(count>0)
          {
              if(s[i]=='1' && s[i-1]=='0')
              {
                  count++;
              }
          }
      }
      cout << count << "\n";
  }
return 0;
}