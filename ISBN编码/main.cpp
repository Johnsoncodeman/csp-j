//
//  main.cpp
//  ISBN编码
//
//  Created by zhongwen wang on 2022/8/11.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    string s;
    cin>>s;
    int a[s.size()];
    int num=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>47 && s[i]<58){
            a[num]=int(s[i])-48;
            num++;
        }
    }
    int count=0;
    for(int i=0;i<num-1;i++){
        count+=a[i]*(i+1);
        //cout<<count<<' ';
    }
    if(count%11==int(s[s.size()-1])-48){
        cout<<"Right"<<endl;
    }
    else{
        for(int i=0;i<s.size()-1;i++){
            cout<<s[i];
        }
        if(count%11==10){
            cout<<'X'<<endl;
        }
        else{
            if(count%11==10){
                cout<<'x'<<endl;
            }
            else
                cout<<count%11<<endl;;
        }
    }
    return 0;
}
