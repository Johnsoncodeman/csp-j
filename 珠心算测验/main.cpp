//
//  main.cpp
//  珠心算测验
//
//  Created by zhongwen wang on 2022/6/30.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                a[i]=0;
            }
        }
    }
    int b[100]={0};
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
//            cout<<a[i]<<' '<<a[j]<<endl;
            for(int l=0;l<n;l++){
                if(l!=i && l!=j && a[i]!=0 && a[j]!=0 && a[l]!=0 && a[i]+a[j]==a[l]){
//                    cout<<"count: "<<a[i]<<' '<<a[j]<<endl;
                    b[l]=1;
                }
            }
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(b[i]==1){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
