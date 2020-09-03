#include<iostream>
#include<iomanip>

using namespace std;

int main(){

  float v, d, aux;

  while(cin >> v >> d){
    aux = d/2;

    cout << fixed << setprecision(2);
    cout << "ALTURA = " << v/(3.14*(aux*aux)) << endl;
    cout << "AREA = " <<  3.14*(aux*aux) << endl;
  }
    
}