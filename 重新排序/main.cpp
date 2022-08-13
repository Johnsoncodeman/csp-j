//
//  main.cpp
//  重新排序
//
//  Created by zhongwen wang on 2022/7/12.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    string str="NO";
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]*a[i+1]%4==0 && a[i]*a[i+1]>4){
            str="YES";
            break;
        }
    }
    cout<<str<<endl;
    return 0;
}
