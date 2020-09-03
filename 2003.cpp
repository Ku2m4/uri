#include<iostream>

using namespace std;

int main()
{
    int hora, minutos;
    char pontos;

    while(cin >> hora >> pontos >> minutos){
        int h = hora-7;
        int m = minutos;

        if(h<0) cout << "Atraso maximo: 0\n";
        else{
            cout << "Atraso maximo: " << (h*60)+m << endl;
        }
    }


    return 0;
}
