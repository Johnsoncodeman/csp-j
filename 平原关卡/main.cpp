//
//  main.cpp
//  平原关卡
//
//  Created by zhongwen wang on 2022/7/14.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n,count=0;
    cin>>n;
    int a[20];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<a[i];j++){
            for(int l=1;l<a[i];l++){
                if(4*j*l+3*j+3*l==a[i]){
                    a[i]=0;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
