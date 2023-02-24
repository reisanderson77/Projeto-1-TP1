#ifndef TESTESENTIDADES_H_INCLUDED
#define TESTESENTIDADES_H_INCLUDED

#include "entidades.h"

#include <iostream>
#include <string.h>

using namespace std;

/// @brief Teste de unidade da classe Usuario
// Classe feita por Adriele Evellen 202042785
class TUUsuario {
private:

    /// Valor valido de nome para o teste da entidade
    const string VALOR_VALIDO_NOME  = "Adriele Evellen";
    /// Valor valido de metriucla para o teste da entidade
    const string VALOR_VALIDO_MATRICULA  = "ABCD1234";
    /// Valor valido de senha para o teste da entidade
    const string VALOR_VALIDO_SENHA  = "ABC123";

    /// Referencia para o objeto a ser testado
    Usuario *usuario;

    /// Estado do teste
    int estado;

    /// Metodo para criar a entidade a ser testada
    void setUp();

    /// Metodo para deletar a entidade criada
    void tearDown();

    /// Metodo que efetua teste dos casos validos
    void testarCenarioSucesso();
public:

    /// Constante que mostra o resultado de sucesso do teste
    const static int SUCESSO =  0;
    /// Constante que mostra o resultado de falha do teste
    const static int FALHA   = -1;

    /// Metodo que executa o teste
    int run();
};

/// @brief Teste de unidade da classe Usuario
// Classe Texto feita por Anderson Ribeiro Reis 150057326
class TUProjeto {
private:

    /// Valor valido de nome para o teste da entidade
    const string VALOR_VALIDO_NOME  = "Tecnicas de Programacao 1";
    /// Valor valido de metriucla para o teste da entidade
    const string VALOR_VALIDO_CODIGO  = "06499125199";
    /// Valor valido de senha para o teste da entidade
    const string VALOR_VALIDO_DESCRICAO  = "Disciplina de Fisica 1";

    /// Referencia para o objeto a ser testado
    Projeto *projeto;

    /// Estado do teste
    int estado;

    /// Metodo para criar a entidade a ser testada
    void setUp();

    /// Metodo para deletar a entidade criada
    void tearDown();

    /// Metodo que efetua teste dos casos validos
    void testarCenarioSucesso();
public:

    /// Constante que mostra o resultado de sucesso do teste
    const static int SUCESSO =  0;
    /// Constante que mostra o resultado de falha do teste
    const static int FALHA   = -1;

    /// Metodo que executa o teste
    int run();
};

/// @brief Teste de unidade da classe Usuario
// Classe Texto feita por Tainara Santos 202042800
class TUTarefa {
private:

    /// Valor valido de nome para o teste da entidade
    const string VALOR_VALIDO_NOME  = "Fisica1";
    /// Valor valido de metriucla para o teste da entidade
    const string VALOR_VALIDO_CODIGO  = "06790921370";
    /// Valor valido de metriucla para o teste da entidade
    const string VALOR_VALIDO_DATA  = "10-03-29";
    /// Valor valido de senha para o teste da entidade
    const string VALOR_VALIDO_DISCIPLINA  = "Arquitetura";

    /// Referencia para o objeto a ser testado
    Tarefa *tarefa;

    /// Estado do teste
    int estado;

    /// Metodo para criar a entidade a ser testada
    void setUp();

    /// Metodo para deletar a entidade criada
    void tearDown();

    /// Metodo que efetua teste dos casos validos
    void testarCenarioSucesso();
public:

    /// Constante que mostra o resultado de sucesso do teste
    const static int SUCESSO =  0;
    /// Constante que mostra o resultado de falha do teste
    const static int FALHA   = -1;

    /// Metodo que executa o teste
    int run();
};

#endif
