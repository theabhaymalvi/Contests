#include<iostream>
#include<numeric>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n,k,d;
        cin >> n >> k >> d;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        int days=0, sum=0;
        sum = accumulate(arr, arr+n, sum);
        if(sum>=k)
        {
            if(sum/k>d)
            {
                days=d;
            }
            else
            {
                days=sum/k;
            }
            
        }
        cout << days << endl;
    }
}