#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


int main() 
{
ll t;
cin>>t;
while(t--)
{
  ll n;
  cin>>n;
  string str;
  map<string,vector<char>> map1;//map of str and vector confusion lol
  for(ll i=0;i<n;i++)
  {
      //use cin instead of the fu****g getline
    cin>>str;
    if(str.size()>0)
    {
      map1[str.substr(1)].push_back(str[0]);

    }
  }
  for(auto i: map1)
  {
    cout << i.first << " " << endl;
  }
 }

}