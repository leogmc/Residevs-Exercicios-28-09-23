#include <iostream>
#include <string>

using namespace std;

class celular
{
private:
    string marca;
    string modelo;
    string imei;
    int armazenamento;
    int memoria;

public:
    celular(string _marca, string _modelo = "", string _imei = "", int _armazenamento = 64, int _memoria = 4){
        marca = _marca;
        modelo = _modelo;
        imei = _imei;
        armazenamento = _armazenamento;
        memoria = _memoria;
    };

    ~celular();

};
