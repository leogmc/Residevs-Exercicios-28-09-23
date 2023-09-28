#include <iostream>
#include <string>

using namespace std;

class Mamifero
{
    private:
        string especie;
        float peso;
        string nomeCientifico;
        string habitat;
        bool ameacadoEstincao;

    public:
        Mamifero();
        Mamifero(string especie, float peso, string nomeCientifico, string habitat, bool ameacadoEstincao);
        ~Mamifero();
};

Mamifero::Mamifero(string especie, float peso, string nomeCientifico, string habitat, bool ameacadoEstincao)
{
    especie = especie; 
    peso = peso; 
    nomeCientifico = nomeCientifico; 
    habitat = habitat; 
    ameacadoEstincao = ameacadoEstincao;
}

Mamifero::Mamifero()
{
    especie = ""; 
    peso = 0; 
    nomeCientifico = ""; 
    habitat = ""; 
    ameacadoEstincao = false;
}

Mamifero::~Mamifero()
{
}
