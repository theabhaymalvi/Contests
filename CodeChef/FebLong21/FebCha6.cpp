#include<bits/stdc++.h>
using namespace std;

    int Pno[1000001];
    int prime[1000001];
    void isPrime();
int main()
{
    cin.ignore();
    isPrime();
    cin.ignore();
     cout << Pno[3];
    return 0;
}
void isPrime()
{
        for(int i=2; i<1000001; i++)
        {if(prime[i]==0)
        {
            for(int j=i*i; j<=100000; j+=i)
            {
                if(prime[j]==0)
                {
                    prime[j]=1;   // marks all multiples of no "i" as 1
                   // count++;    will count no of prime no.
                }
            }
        }}
        return;
    }