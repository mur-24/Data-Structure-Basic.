#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }

    //For Accending Order sorting
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(ar[i] >= ar[j])
            {
                swap(ar[i],ar[j]);
            }
        }
    }
    for(int i: ar)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    
    // For Decending Order sorting
    vector<int> ar_2(n);
    for(int i=0; i<n; i++)
    {
        cin>>ar_2[i];
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(ar_2[i] <= ar_2[j])
            {
                swap(ar_2[i],ar_2[j]);
            }
        }
    }

    for(int value: ar_2)
    {
        cout<<value<<" ";
    }

    
    return 0;
}