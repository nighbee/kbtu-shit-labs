#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
bool isPrime(int n){
    if(n<2)
     return false;
    for (int i=2;i<n;i++){
        if(n%i==0)
        return false;
    }
    return true;

}
int main(){
    int n;
    cin >> n;
    string str("is prime");
    for(int i=2; i<=n; i++){
        if(isPrime(i))
        cout<<i<< " "<< str<<endl;
    }
}