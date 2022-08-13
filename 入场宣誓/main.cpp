//
//  main.cpp
//  入场宣誓
//
//  Created by zhongwen wang on 2022/7/13.
//

#include <iostream>
using namespace std;
int f(int *a,int b){
    a[b]=a[b-1]+a[b-2];
    return 0;
};
int main(int argc, const char * argv[]) {
    int a[20];
    a[0]=1;
    a[1]=1;
    for(int i=2;i<20;i++){
        f(a,i);
    }
    int n;
    cin>>n;
    cout<<a[n-1]<<endl<<"I'm ready!"<<endl;
    return 0;
}
