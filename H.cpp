#include <iostream>
#include "cmath"
using namespace std;

int N,V,X;
long double A;

void count(long double V,long double N){
    for(int i=1;i<9;i++){
        A=((N*V)/10)*i;
        X=ceil(A);
        cout<<X<<" ";
    }
        A=((N*V)/10)*9;
        X=ceil(A);
        cout<<X<<endl;
    
}


int main() {
    cin>>V>>N;
    count(V,N);

    return 0;
}
