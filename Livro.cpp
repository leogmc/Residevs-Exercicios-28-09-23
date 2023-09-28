#include <iostream>
#include <string>

using namespace std;

class Livro
{
    private:
        string editora;
        string autor;
        string isbn;
        string dataPublicacao;

    public:
        Livro();
        Livro(string editora, string autor, string isbn, string dataPublicacao);
        ~Livro();
};

Livro::Livro() {
    editora = "";
    autor = ""; 
    isbn = ""; 
    dataPublicacao = "";
}

Livro::Livro(string editora, string autor, string isbn, string dataPublicacao)
{
    editora = editora;
    autor = autor; 
    isbn = isbn;
    dataPublicacao = dataPublicacao;
}

Livro::~Livro()
{

}
