#include<iostream>
bool isPrime(int n) {
        if(n==1) return false;
        for(int i=2;i<=n-1;i++){
            if(n%i==0) return false;
        }
        return true;
    }
int main(){
    int n;
    cout<<"ENTER THE NUMBER:";
    cin>>n;
}