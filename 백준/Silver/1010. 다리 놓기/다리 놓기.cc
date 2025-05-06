#include<iostream>
using namespace std;

int main(){
    int a=0;
    cin >> a;
    for(int i=0; i<a; i++){
        int n=0;
        int m=0;
        cin >> n >> m;
        int result =1;
        int x=1;
        for(int j=m; j>m-n; j--){
            result *=j;
            result /=x;
            x++;
        }
        cout << result <<endl;
    }
}