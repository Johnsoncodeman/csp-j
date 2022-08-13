//
//  main.cpp
//  星空关卡
//
//  Created by zhongwen wang on 2022/7/20.
//

#include <iostream>
using namespace std;
void f(int a[105][105],int i,int j){
    if(a[i+1][j]!=0){
        a[i+1][j]=0;
        i++;
        f(a,i,j);
    }
    if(a[i][j+1]!=0){
        a[i][j+1]=0;
        j++;
        f(a,i,j);
    }
    else if(a[i-1][j]!=0){
        a[i-1][j]=0;
        i--;
        f(a,i,j);
    }
    if(a[i][j-1]!=0){
        a[i][j-1]=0;
        j--;
        f(a,i,j);
    }

};
int main() {
    int n,m,a[105][105]={0};
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int count=0;
    for (int i=0;i<n;i++) {
        for(int j=0;j<m;j++){
            if(a[i][j]!=0){
                count++;
                f(a,i,j);
            }
        }
    }
    cout<<count<<endl;
    return 0;
}

