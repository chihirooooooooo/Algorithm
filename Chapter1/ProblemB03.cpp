#include <iostream>
using namespace std;

int main(){
  int N;
  cin >> N;
  int goods[N];
  for(int i = 0; i< N; i++){
    cin >> goods[i];
  }
  for(int i = 0; i < N; i++){
    for(int x = i + 1; x < N; x++){
      for(int y = x + 1 ; y < N; y++){
        if(goods[i] + goods[x] + goods[y] == 1000){
          cout<<"Yes"<<endl;
          return 0;
        }
      }
    }
  }
  cout<<"No"<<endl;
  return 0;
}
