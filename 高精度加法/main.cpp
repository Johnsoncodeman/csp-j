#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a1[101],b1[101];
    int  a[101],b[101],c[10001],lena,lenb,lenc,i,j,x;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    cin>>a1>>b1;
    lena=strlen(a1);
    lenb=strlen(b1);
    for( i=0;i<=lena-1;i++){
        a[lena-i]=a1[i]-48;
    }
    for( i=0;i<=lenb-1;i++){
        b[lenb-i]=b1[i]-48;
    }
    lenc=1;
    x=0;
    while(lenc<=lena || lenc<=lenb){
        c[lenc]=a[lenc]+b[lenc]+x;
        x=c[lenc]/10;
        c[lenc]%=10;
        lenc++;
    }
    c[lenc]=x;
    if(c[lenc]==0){
        lenc--;
    }
    for(i=lenc;i>=1;i--){
        cout<<c[i];
    }
    cout<<endl;
    return 0;
}

