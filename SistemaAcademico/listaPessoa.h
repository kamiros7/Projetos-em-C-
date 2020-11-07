#ifndef LISTAPESSOA_H_INCLUDED
#define LISTAPESSOA_H_INCLUDED
#include "lista.h"
#include "elemento.h"
#include "pessoa.h"

class listaPessoa
{
private:
    Lista<Pessoa> ListaTemplatePessoa;

public:
    listaPessoa();
    ~listaPessoa();

    void setPessoaLista(Pessoa* pessoa);
    void listePessoaProximo();
    void listePessoaAnterior();
    void gravarPessoa();
    void recuperarPessoa();
    void limpaLista();
    // fun��o que cont�m o polimorfismo da classe ( pessoa, aluno, professor e estagi�rio )
    void listeDados();

};


#endif // LISTAPESSOA_H_INCLUDED
