//
//  main.cpp
//  小鱼比可爱
//
//  Created by zhongwen wang on 2022/7/11.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<0<<' ';
    int count=0;
    for(int i=1;i<n;i++){
        count=0;
        for(int j=i;j>=0;j--){
            if(a[i]>a[j]){
                count++;
            }
        }
        cout<<count<<' ';
    }
    return 0;
}
