#include <iostream>
using namespace std ;

int factorial(int n){
    int fact =1;
    for(int i=1; i<=n; i++){
        fact = fact *i;
    }
    return fact;
}

int nCr(int n, int r){
     int num = factorial(n);
     int denomator = factorial(r)* factorial(n-r);
     long long int cal = num/denomator;

     return cal;
}

int main(){
    int n,r;
    cout<<"answer is "<<nCr(n,r)<<endl;

}