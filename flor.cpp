#include <iostream>
#include <string>
using namespace std;
class Flor
{
private:
    string nome;
    string especie;
    string cor;
    double tamanho;
    char androceu_gineceu;//'a' androceu e 'g' gineceu
    
public:
    Flor(string _nome, string _especie = "", string _cor = "", double _tamanho=0.0, char _androceu_gineceu = '0'){
        nome = _nome;
        especie = _especie;
        cor = _cor;
        tamanho = _tamanho;
        androceu_gineceu = _androceu_gineceu;
    };
    ~Flor();
};
