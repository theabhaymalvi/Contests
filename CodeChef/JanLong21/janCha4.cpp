#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n,k,x,y;
        cin >> n >> k >> x >> y;
        if(x==y)
        {
            x=n;
            y=n;
            cout << x << " " << y << endl;
            continue;
        }
        if((k+3)%4==0)
        {
            if(x>y)
            {
                y+=(n-x);
                x=n;
            }
            else
            {
                x+=(n-y);
                y=n;
            }
        }
        else if((k+2)%4==0)
        {
            if(x>y)
            {
                y+=(n-x);
                x=n;
                swap(x,y);
            }
            else
            {
                x+=(n-y);
                y=n;
                swap(x,y);
            }
        }
        else if((k+1)%4==0)
        {
            if(x>y)
            {
                y=(x-y);
                x=0;
            }
            else
            {
                x=(y-x);
                y=0;
            }
        }
        else if(k%4==0)
        {
             if(x>y)
            {
                y=(x-y);
                x=0;
                swap(x,y);
            }
            else
            {
                x=(y-x);
                y=0;
                swap(x,y);
            }
        }
        cout << x << " " << y << endl;
    }
    return 0;
}