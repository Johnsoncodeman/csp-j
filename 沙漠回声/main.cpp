//
//  main.cpp
//  沙漠回声
//
//  Created by zhongwen wang on 2022/7/19.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    string a;
    cin>>a;
    if(n%2!=0){
        cout<<"No"<<endl;
        return 0;
    }
    int count=0;
    int k = n/2;
    for(int i=0;i<k;i++){
        if(a[i]==a[i+k]){
            count++;
        }
    }
    if(count==k){
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;
    return 0;
}
