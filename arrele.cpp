#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int n,k,a[5],i;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<k;i++)
    {
        sum=sum+a[i];
    }
    cout<<sum;
    return 0;
}
