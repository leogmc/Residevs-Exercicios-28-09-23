#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Ponto{
    private:
    float x, y;

public:
    Ponto(){
        x = 0;
        y = 0;
    }
    Ponto(float _x, float _y){
        x = _x;
        y = _y;
    }
    float getX();
    float getY();
    void setX(float _x);
    void setY(float _y);
};
Ponto :: Ponto()
{
    x = 0;
    y = 0;
};

Ponto:: Ponto(float _x, float _y)
{
    x = _x;
    y = _y;


};

float Ponto :: getX()
{
    return x;
}

float Ponto :: getY()
{
    return y;
}

// FALTA COMPLETAR !!!



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