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
      ll n;
      cin >> n;
      int arr[n];
      for(ll i=0; i<n; i++)
      {
          cin >> arr[i];
      }
      ll min= 0;
      sort(arr,arr+n);
      for(ll i=0; i<n; i++)
      {
          if(arr[i]>(i+1))
          {
              cout << "Second" << "\n";
              exit(0);
          }
          else
          {
              min= min + (i+1)-arr[i];
          }
          
      }
     // cout << min <<"\n";
      if(min%2==0)
      {
          cout << "Second" << "\n";
      }
      else
      {
          cout << "First" << "\n";
      }
  }
return 0;
}