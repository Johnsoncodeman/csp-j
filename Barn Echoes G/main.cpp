//
//  main.cpp
//  Barn Echoes G
//
//  Created by zhongwen wang on 2022/8/6.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    string a,b;
    cin>>a>>b;
    int count=0;
    for(int  i=a.size()-1;i>0;i--){
        for(int j=1;j<b.size();j++){
            if(a.substr(i)==b.substr(0,j)){
                if(a.substr(i).size()>count){
                    count=a.substr(i).size();
                }
            }
        }
    }
    for(int  i=1;i<a.size();i++){
        for(int j=b.size()-1;j>0;j--){
            if(a.substr(0,i)==b.substr(j)){
                if(a.substr(0,i).size()>count){
                    count=a.substr(0,i).size();
                }
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
