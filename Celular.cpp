#include <iostream>
#include <string>

using namespace std;

class Celular
{
    private:
        string marca;
        string modelo;
        string imei;
        string cor;

    public:
        Celular();
        Celular(string marca, string modelo, string imei, string cor);
        ~Celular();
};

Celular::Celular()
{
    marca = "";
    modelo = "";
    imei = "";
    cor = "";
}

Celular::Celular(string marca, string modelo, string imei, string cor)
{
    marca = marca;
    modelo = modelo;
    imei = imei;
    cor = cor;
}

Celular::~Celular()
{

}
