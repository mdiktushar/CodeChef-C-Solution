#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    double x,n;
    cin>>x>>n;
    if((int)x%5==0 && x+.50<=n)
        n-=(x+.50);
    cout<<fixed<<setprecision(2)<<n<<endl;

    return 0;
}
