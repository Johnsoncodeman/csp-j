//
//  main.cpp
//  神奇的幻方
//
//  Created by zhongwen wang on 2022/7/2.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int arr[39][39],n;
    for(int i=0;i<39;i++){
        for(int j=0;j<39;j++){
            arr[i][j]=0;
        }
    }
    cin>>n;
    arr[0][n/2]=1;
    int x,y;
    x=0;
    y=n/2;
    for(int i=1;i<n*n;i++){
        if(x==0 && y!=n-1){
            x=n-1;
            y++;
            arr[x][y]=i+1;
        }
        else if(x!=0 && y==n-1){
            x--;
            y=0;
            arr[x][y]=i+1;
        }
        else if(x==0 && y==n-1){
            x++;
            arr[x][y]=i+1;
        }
        else if(x!=0 && y!=n-1){
            if(arr[x-1][y+1]==0){
                arr[x-1][y+1]=i+1;
                x--;
                y++;
            }
            else{
                x++;
                arr[x][y]=i+1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }
}
