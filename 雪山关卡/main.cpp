//
//  main.cpp
//  雪山关卡
//
//  Created by zhongwen wang on 2022/7/26.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,count=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==count){
            count++;
        }
        else
            a[i]=-1;
    }
    count=0;
    for(int i=0;i<n;i++){
        if(a[i]==-1){
            count++;
        }
    }
    if(count==n){
        cout<<-1<<endl;
    }
    else
        cout<<count<<endl;
    return 0;
}
