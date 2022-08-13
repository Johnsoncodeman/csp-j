#include <iostream>
#include <cmath>
using namespace std;
int gcd(int m,int n){
    if(m<n){
        int tmp;
        tmp=m;
        m=n;
        n=tmp;
    }
    if(n==0){
        return m;
    }
    else
        return gcd(n,m%n);
}

bool prime(int p){
    for(int i=2;i<=sqrt(p);i++){
        if(p%i==0)
            return false;
    }
    return true;
}

int main() {
    long long x,y;
    cin>>x>>y;
    long long c=0,d=0;
    c=gcd(x,y);
    if(c==1){
        d=x+y;
        cout<<d<<endl;
    }
    else{
        d=x*y;
        cout<<d<<endl;
        cout<<"NO"<<endl;
        return 0;
    }
    if(prime(d))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
