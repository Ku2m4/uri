#include<iostream>

using namespace std;

int main(){

  int t, n;
  while(cin >> t){
    if(t==0) break;
    while(t--){
   
      cin >> n;

      if(n%2!=0)
        cout << ((n*2)-1) << endl;
      else
        cout << ((n*2)-2) << endl;
    }
  }

    return 0;
}