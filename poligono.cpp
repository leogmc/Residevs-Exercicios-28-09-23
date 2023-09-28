#include <iostream>
#include <vector>

using namespace std;

class Ponto{
    public:
    float x, y;
};

class Poligono {
    public:
    vector<Ponto> pontos;
};

int main (){
    Poligono poli;
    cout << "Criando um polígono!" << endl;
    char sn;
    do {
        cout << "Digite as coordenadas do ponto: ";
        Ponto p;
        cin >> p.x >> p.y;
        poli.pontos.push_back(p);
        cout << "Deseja inserir mais pontos (s/n)?";
        cin >> sn;
    } while (sn!= 'n');
    cout << "As coordenadas digitadas foram" << endl;
    for (Ponto p:poli.pontos)
    cout << "(" << p.x << " , " << p.y << ") ";
}