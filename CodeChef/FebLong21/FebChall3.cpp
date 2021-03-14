#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore();
    while(T--)
    {
        string time;
        getline(cin,time);

        int h= stoi(time.substr(0,2));
        int m= stoi(time.substr(3,2));
         if(h==12 && time[6]=='A')
            {
                h=0;
            }
        if(time[6]=='P' && h<12)
        {
            h+=12;
        }

        int n;
        cin >> n;
        cin.ignore();
        while(n--)
        {
            string time1;
            getline(cin,time1);
            int h1= stoi(time1.substr(0,2));
            int m1= stoi(time1.substr(3,2));
            int h2= stoi(time1.substr(9,2));
            int m2= stoi(time1.substr(12,2));
            if(h1==12 && time1[6]=='A')
            {
                h1=0;
            }
            if(h2==12 && time1[15]=='A')
            {
                h2=0;
            }
            if(time1[6]=='P' && h1<12)
            {
                h1+=12;
            }
            if(time1[15]=='P' && h2<12)
            {
                h2+=12;
            }
            string ans="";
            if(h>h1 && h<h2)
            {
                ans+="1";
            }
            else if(h==h1 && h==h2 && m>=m1 && m<=m2)
            {
                ans+="1";
            }
            else if(h==h1 && m>=m1 && h!=h2)
            {
                ans+="1";
            }
            else if(h==h2 && m<=m2 && h!=h1)
            {
                ans+="1";
            }
            else
            {
                ans+="0";
            }

            cout << ans;
            

        }
        cout << endl;

    }
}