#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n,k;
        cin >> n >> k;
        int arr[n];
        int arr1[n]={0};
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        int count=0;
        for(int j=1; j<=2; j++)
        {
            int sum=0;
             for(int i=0, p=0; i<n; i++)
              {
                 if(j==1)
                 {
                        if(sum<k && i%2==0)
                    {
                        sum+=arr[n-i-1];
                        count++;
                    }
                    else if(i==n-1 && sum<k)
                    {
                        count= -1;
                    }
                    else
                    {
                        arr1[p++]=arr[n-i-1];
                    }
                 }
                 if(count== -1)
                     break;
                 else if(j==2)
                 {
                     sum+=arr1[i];
                     count++;
                     if(sum>=k)
                       break;
                     else if(i==n-1 && sum<k)
                     {
                         count= -1;
                     }
                 }
                 if(count== -1)
                   break;
              }
              if(count== -1)
                break;
        }
        cout << count << endl;
    }
    return 0;
}