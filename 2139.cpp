#include <iostream>
#include<iostream>

using namespace std;
#define diaNatal 25
#define mesNatal 12

int main()
{
    int qtdDiasMes[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int mes, dia, qdias;

    while(cin >> mes >> dia)
    {
        if(mes == mesNatal && dia == diaNatal)
        {
            cout << "E natal!\n";
        }

        else if(mes == mesNatal && dia+1 == diaNatal)
        {
            cout << "E vespera de natal!\n";
        }

        else if(mes == mesNatal && dia > diaNatal)
        {
            cout << "Ja passou!\n";
        }

        else
        {
            qdias = 0;
            for(int i=0; i<mes; i++)
            {
                qdias += (qtdDiasMes[i]);
            }
            qdias += dia;
            cout << "Faltam " << 366-qdias-6 << " dias para o natal!\n";
        }
    }
    return 0;
}
