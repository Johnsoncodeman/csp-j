//
//  main.cpp
//  霓虹灯
//
//  Created by zhongwen wang on 2022/7/2.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int arr[100][100]={0},h,w;
    cin>>h>>w;
    for(int i=0;i<100;i+=2){
        for(int j=0;j<100;j+=2){
            arr[i][j]=1;
        }
    }
    int count=0;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(arr[i][j]==1){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
