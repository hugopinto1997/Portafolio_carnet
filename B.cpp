#include <iostream>


using namespace std;

int N;
int D=0;

  void check(int a[]){
      for(int i=1;i<N;i++){
          if(a[0]<a[i]){
              cout<<'N'<<endl;
              return;
          }
      }
      cout<<'S'<<endl;
      return;
  }

int main() {
    cin>>N;
    int array[N];

    for(int i=0;i<N;i++){
        cin>>D;
        array[i]=D;
       
    }

     check(array);
    

    return 0;
}
