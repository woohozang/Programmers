#include<iostream>
#include<string>

using namespace std;

int d_c =50;
int main(){
    string A,B;
    cin>>A>>B;
    for(int i=0; i<=B.length() - A.length(); i++){
        int count =0;
        for(int j=0; j<A.length(); j++){
            if(A[j]!=B[j+i]){
                count ++;
            }
        }
        if(d_c>=count){
            d_c = count;
        }
        
    }
    cout <<d_c;
}