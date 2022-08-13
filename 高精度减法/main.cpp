//
//  main.cpp
//  高精度减法
//
//  Created by zhongwen wang on 2022/8/10.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a[256],b[256],c[256],la,lb,lc,i;
    char n[256],n1[256],n2[256];
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    gets(n1);
    gets(n2);
    if(strlen(n1)<=strlen(n2) && strcmp(n1,n2)<0){
        strcpy(n,n1);
        strcpy(n1,n2);
        strcpy(n2,n);
        cout<<"-";
    }
    la=strlen(n1);
    lb=strlen(n2);
    for(int i=0;i<=la-1;i++){
        a[la-i]=int(n1[i]-48);
    }
    for(int i=0;i<=lb-1;i++){
        b[lb-i]=int(n2[i]-48);
    }
    i=1;
    while(i<=la || i<=lb){
        if(a[i]<b[i]){
            a[i]+=10;
            a[i+1]--;
        }
        c[i]=a[i]-b[i];
        i++;
    }
    lc=i;
    while(c[lc]==0 && lc>1){
        lc--;
    }
    for(i=lc;i>=1;i--){
        cout<<c[i];
    }
    cout<<endl;
    return 0;
}
