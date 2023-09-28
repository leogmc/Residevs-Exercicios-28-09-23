#include <iostream>
#include <string>

using namespace std;

class Ave
{
    private:
        string especie;
        float peso;
        string nomeCientifico;
        string habitat;
        bool ameacadoEstincao;

    public:
        Ave();
        Ave(string especie, float peso, string nomeCientifico, string habitat, bool ameacadoEstincao);
        ~Ave();
};

Ave::Ave(string especie, float peso, string nomeCientifico, string habitat, bool ameacadoEstincao)
{
    especie = especie; 
    peso = peso; 
    nomeCientifico = nomeCientifico; 
    habitat = habitat; 
    ameacadoEstincao = ameacadoEstincao;
}

Ave::Ave()
{
    especie = ""; 
    peso = 0; 
    nomeCientifico = ""; 
    habitat = ""; 
    ameacadoEstincao = false;
}

Ave::~Ave()
{
}
