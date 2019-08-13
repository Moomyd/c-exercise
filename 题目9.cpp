#include <iostream>
using namespace std;
int main()
{
    int N,i,sum,j;
    cin>>N;
    for(i=2; i<=N; i++)
    {
        sum=0;
        for(j=1; j<=i/2; j++)
        {
            if(i%j==0)
            {
                sum+=j;
            }
        }
        if(sum==i)
        {
            cout<<i<<" its factors are ";
            for(j=1; j<=i/2; j++)
                if(i%j==0)
                    cout<<j<<" ";
            cout<<endl;
        }
    }
    return 0;
}

