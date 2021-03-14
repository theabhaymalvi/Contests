#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        string input="";
        vector <string> s;
        for(int i=0; i<n; i++)
        {
            cin >> input;
            s.push_back(input);
        }
        map <int,char> first;
        for(int i=0; i<n; i++)
        {
            first.insert({i+1,s[i][0]});
        }
       // for(auto itr= first.begin(); itr!= first.end(); ++itr)
       // {
       //     cout << itr->first << " " << itr->second << endl;
       // }

       map <int, string> rest;
       for(int i=0; i<n; i++)
       {
           rest.insert({i+1,s[i].substr(1)});
       }

       vector <string> ans;
    }
}