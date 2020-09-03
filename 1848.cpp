#include <iostream>
#include <string>

using namespace std;

int main(){

    string str;

    int cont = 1, soma=0;

    while(cont<=3){
        getline(cin,str);

        if(str[0] == 'c'){
            cout << soma << endl;
            soma = 0;
            cont++;
        }
        else{
            if(str == "---") soma =0;
            else if (str == "--*") soma+=1;
            else if (str == "-*-") soma+=2;
            else if (str == "*--") soma+=4;
            else if (str == "-**") soma+=3;
            else if (str == "*-*") soma+=5;
            else if (str == "**-") soma+=6;
            else if (str == "***") soma+=7;
        }
    }
    return 0;


}