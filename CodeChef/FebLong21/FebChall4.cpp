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
        int w[n],l[n];
        for(int i=0; i<n; i++)
        {
            cin >> w[i];
        }
        for(int i=0; i<n; i++)
        {
            cin >> l[i];
        }
        int t=2,pos=0;
        for(int i=0; i<n; i++)
        {
            if(w[i]==1)
            {
                pos=i;
            }
        }
       // cout << pos << endl;
        int ans=0;
        while(t<=n)
        {
            for(int i=0; i<n; i++)
            {
                if(w[i]==t && i<=pos)
                {
                    int temp=1;
                    while((i+l[i]*temp)<=pos)
                    {
                        temp++;
                    }
                    pos=(i+l[i]*temp);
                   // cout << pos << endl;
                    ans+=temp;
                  //  cout << ans << endl;
                }
                else if(w[i]==t && i>pos)
                {
                    pos=i;
                  //  cout << pos << endl;
                }
            }
            t++;
        }
        cout << ans << endl;
    }
}