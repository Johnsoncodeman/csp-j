#include <iostream>
using namespace std;
int main() {
    int a[8]={1,1,1,0,0,-1,-1,-1};
    int b[8]={-1,0,1,-1,1,-1,0,1};
    char c[105][105]={' '};
    int n,m;
    cin>>n>>m;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            cin>>c[i][j];
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(c[i][j]=='*'){
                cout<<'*';
                continue;
            }
            int d=0;
            for(int l=0;l<8;l++){
                int e=i+a[l];
                int f=j+b[l];
                if(c[e][f]=='*'){
                    d++;
                }
            }
            cout<<d;
        }
        cout<<endl;
    }
    return 0;
}
/*
#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    char a[150][150];
    for(int i=0;i<150;i++){
        for(int j=0;j<150;j++){
            a[i][j]='0';
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            int count=0;
            if(a[i][j]!='*'){
                if(a[i][j+1]=='*'){
                    count++;
                    a[i][j]='1';
                    if(count==0){
                        a[i][j]='0';
                    }
                }
                if(a[i+1][j+1]=='*'){
                    count++;
                    if(count==0){
                        a[i][j]='0';
                    }
                    if(count==1){
                        a[i][j]='1';
                    }
                    if(count==2){
                        a[i][j]='2';
                    }
                    if(count==3){
                        a[i][j]='3';
                    }
                    if(count==4){
                        a[i][j]='4';
                    }
                    if(count==5){
                        a[i][j]='5';
                    }
                    if(count==6){
                        a[i][j]='6';
                    }
                    if(count==7){
                        a[i][j]='7';
                    }
                    if(count==8){
                        a[i][j]='8';
                    }
                }
                if(a[i-1][j+1]=='*'){
                    count++;
                    if(count==0){
                        a[i][j]='0';
                    }
                    if(count==1){
                        a[i][j]='1';
                    }
                    if(count==2){
                        a[i][j]='2';
                    }
                    if(count==3){
                        a[i][j]='3';
                    }
                    if(count==4){
                        a[i][j]='4';
                    }
                    if(count==5){
                        a[i][j]='5';
                    }
                    if(count==6){
                        a[i][j]='6';
                    }
                    if(count==7){
                        a[i][j]='7';
                    }
                    if(count==8){
                        a[i][j]='8';
                    }
                }
                if(a[i-1][j-1]=='*'){
                    count++;
                    if(count==0){
                        a[i][j]='0';
                    }
                    if(count==1){
                        a[i][j]='1';
                    }
                    if(count==2){
                        a[i][j]='2';
                    }
                    if(count==3){
                        a[i][j]='3';
                    }
                    if(count==4){
                        a[i][j]='4';
                    }
                    if(count==5){
                        a[i][j]='5';
                    }
                    if(count==6){
                        a[i][j]='6';
                    }
                    if(count==7){
                        a[i][j]='7';
                    }
                    if(count==8){
                        a[i][j]='8';
                    }
                }
                if(a[i+1][j-1]=='*'){
                    count++;
                    if(count==0){
                        a[i][j]='0';
                    }
                    if(count==1){
                        a[i][j]='1';
                    }
                    if(count==2){
                        a[i][j]='2';
                    }
                    if(count==3){
                        a[i][j]='3';
                    }
                    if(count==4){
                        a[i][j]='4';
                    }
                    if(count==5){
                        a[i][j]='5';
                    }
                    if(count==6){
                        a[i][j]='6';
                    }
                    if(count==7){
                        a[i][j]='7';
                    }
                    if(count==8){
                        a[i][j]='8';
                    }
                }
                if(a[i][j-1]=='*'){
                    count++;
                    if(count==0){
                        a[i][j]='0';
                    }
                    if(count==1){
                        a[i][j]='1';
                    }
                    if(count==2){
                        a[i][j]='2';
                    }
                    if(count==3){
                        a[i][j]='3';
                    }
                    if(count==4){
                        a[i][j]='4';
                    }
                    if(count==5){
                        a[i][j]='5';
                    }
                    if(count==6){
                        a[i][j]='6';
                    }
                    if(count==7){
                        a[i][j]='7';
                    }
                    if(count==8){
                        a[i][j]='8';
                    }
                }
                if(a[i+1][j]=='*'){
                    count++;
                    if(count==0){
                        a[i][j]='0';
                    }
                    if(count==1){
                        a[i][j]='1';
                    }
                    if(count==2){
                        a[i][j]='2';
                    }
                    if(count==3){
                        a[i][j]='3';
                    }
                    if(count==4){
                        a[i][j]='4';
                    }
                    if(count==5){
                        a[i][j]='5';
                    }
                    if(count==6){
                        a[i][j]='6';
                    }
                    if(count==7){
                        a[i][j]='7';
                    }
                    if(count==8){
                        a[i][j]='8';
                    }
                }
                if(a[i-1][j]=='*'){
                    count++;
                    if(count==0){
                        a[i][j]='0';
                    }
                    if(count==1){
                        a[i][j]='1';
                    }
                    if(count==2){
                        a[i][j]='2';
                    }
                    if(count==3){
                        a[i][j]='3';
                    }
                    if(count==4){
                        a[i][j]='4';
                    }
                    if(count==5){
                        a[i][j]='5';
                    }
                    if(count==6){
                        a[i][j]='6';
                    }
                    if(count==7){
                        a[i][j]='7';
                    }
                    if(count==8){
                        a[i][j]='8';
                    }
                }
            }
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(a[i][j]=='?'){
                a[i][j]='0';
            }
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}
*/
