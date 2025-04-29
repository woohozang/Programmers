#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str; //문자열 -> 초기화 안된 문자열
    cin >> str;

    for(int i=0; i<str.size();++i){
        if('a'<=str[i]&&'z'>=str[i]) str[i]-=32;
        else if('A'<=str[i]&&'Z'>=str[i]) str[i]+=32;
    }
    cout<<str;
    return 0;
}