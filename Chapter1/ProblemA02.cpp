#include <iostream>
using namespace std;

int main(){
  int N, X;
  bool check = false;
  cin >> N >> X;
  int A[N];
  for(int i = 0; i < N; i++){
    cin>>A[i];
    if(A[i] == X){
      check = true;
    }
  }
  if(check){
    cout<< "Yes" <<endl;
  }else{
    cout<< "No" <<endl;
  }
  return 0;
}
