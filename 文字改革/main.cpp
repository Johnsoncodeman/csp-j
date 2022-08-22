#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    char a[26];
    string s;
    cin>>s;
    for(int i=0;i<26;i++){
        a[i]=s[i];
    }
    int n;
    cin>>n;
    string s1[n];
    for(int i=0;i<n;i++){
        cin>>s1[i];
    }
    
    return 0;
}
