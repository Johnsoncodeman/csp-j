#include <iostream>
#include <string>
using namespace std;
int main() {
    string s="";
    int n;
    cin>>n;
    string str[20];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(str[j]<str[j+1]){
                string tmp;
                tmp=str[j];
                str[j]=str[j+1];
                str[j+1]=tmp;
            }
        }
    }
    for(int i=0;i<n;i++){
        s.append(str[i]);
    }
    cout<<s<<endl;
    return 0;
}
