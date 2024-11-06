#include <iostream>
using namespace std;

int main()
 {
    int i
    float media,livello,somma
    i=1
    somma=0
    while(i<=7) {
        cout<<"di quanto si alza l'acqua"<< endl;
        cin>> livello;
        if(livello>=10) {
            cout<<"nel giorno"<< i <<"l'acqua è alta"<<endl;
        }
        somma=somma+livello;
        media=somma/7;
        i=i+1;
    }
    if (media>0) {
        cout<<"l'acqua è  alta"<<endl;
    } else {
        cout << "l'acqua è bassa" << endl;
    }
    cout<< "La media dei valori è"<<media<<endl;
}
        
        

