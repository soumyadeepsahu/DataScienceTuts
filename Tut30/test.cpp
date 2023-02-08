#include<iostream>
#include<conio.h>

using namespace std;

int fun(int n){
    //int n = 10000;
    //int count = 0;
    int i, j, k = 0;
    for (i = n; i>0 ; i--){
        for(j = 1; j<=n; j = j*2){
            k = k + 2/n;
            //count++;
        }
        
    }
    //cout<<count;
    return k;
}

int main(){
    int a = fun(10000);
    cout<< a;
}