//
//  main.cpp
//  高精度乘法
//
//  Created by zhongwen wang on 2022/8/10.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    char a1[100];
    int a[100],c[100],la,i,x=0,lc,b;
    memset(a,0,sizeof(a));
    memset(c,0,sizeof(c));
    gets(a1);
    cin>>b;
    la=strlen(a1);
    for(int i=0;i<=la-1;i++){
        a[i+1]=a1[i]-48;
    }
    for(int i=1;i<=la;i++){
        c[i]=(x*10+a[i])/b;
        x=(x*10+a[i])%b;
    }
    lc=1;
    while(c[lc]==0 && lc<la){
        lc++;
    }
    for(int i=lc;i<=la;i++){
        cout<<c[i];
    }
    cout<<endl;
    return 0;
}
