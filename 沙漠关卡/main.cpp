//
//  main.cpp
//  沙漠关卡
//
//  Created by zhongwen wang on 2022/7/18.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,q;
    cin>>n;
    char s[n*2];
    cin>>s;
    cin>>q;
    for(int i=0;i<q;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==1){
            char tmp;
            tmp=s[c-1];
            s[c-1]=s[b-1];
            s[b-1]=tmp;
        }
        else{
            for(int l=0;l<n;l++){
                for(int j=n*2-1;j>=n;j--){
                    char tmp;
                    tmp=s[j];
                    s[j]=s[l];
                    s[l]=tmp;
                }
            }
        }
    }
    for(int i=0;i<n*2;i++){
        cout<<s[i];
    }
    cout<<endl;
    return 0;
}
