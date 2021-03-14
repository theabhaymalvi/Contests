#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n,m;
        cin >> n >> m;
        int arr1[n];
        int arr2[m];
        for(int i=0; i<n; i++)
        {
            cin >> arr1[i];
        }
        sort(arr1, arr1+n);
        for(int i=0; i<m; i++)
        {
            cin >> arr2[i];
        }
        sort(arr2, arr2+m);

        int sum1=0;
        int sum2=0;
        sum1= accumulate(arr1, arr1+n, sum1);
        sum2= accumulate(arr2, arr2+m, sum2);

        int counter=0;
        for(int i=0; i<min(n,m); i++)
        {
            if(sum1>sum2)
               break;
            swap(arr1[i],arr2[m-i-1]);
            sum1=sum1+arr1[i]-arr2[m-i-1];
            sum2=sum2+arr2[m-i-1]-arr1[i];
            counter++;   
        }
        if(counter==min(n,m) && sum1<=sum2)
        {
            cout << "-1" <<  endl;
        }
        else
        {
            cout << counter << endl;
        }
    }
}