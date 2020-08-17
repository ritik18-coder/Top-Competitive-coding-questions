#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double x,y,k;
    cin>>x>>y>>k;
    if(x>=y || x>=k)
        cout<<fixed<<setprecision(8)<<k;
/*The use of fixed is to add extra zeroes at the end if the floating point value has decimal precision lesser than that */
    else{
       long double current = x+(y-x)/2;
       //cout<<current;
       long double time=0;
       int quotient =k/current;
    long double remaining = k-(current*quotient);
    if(remaining>=x) remaining = x + (remaining-x)*2;
        time = y*quotient + remaining;
       cout<<fixed<<setprecision(8)<<time;
    }
    return 0;
}
