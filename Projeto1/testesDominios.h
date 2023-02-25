#ifndef TESTESDOMINIOS_H_INCLUDED
#define TESTESDOMINIOS_H_INCLUDED

#include <iostream>
#include <string.h>

#include "dominios.h"

using namespace std;

/// @brief Declaracao de classe de teste de unidade do dominio Nome
// Classe Senha feita por Adriele Evellen 202042785
class TUNome {
private:

    /// Definicoes de constantes para evitar numeros magicos.

    const string VALOR_VALIDO = "Adriele Evellen";
    const string VALOR_INVALIDO = "Adriele.Evellen";

    /// Referencia ao objeto a ser testado
    Nome *nome;

    /// Estado do teste
    int estado;

    /// Declaracoes de metodos para o teste

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    /// Definicoes de constantes para mostrar o resultado do teste

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    /// Metodo que executa o teste
    int run();
};

/// @brief Declaracao de classe de teste de unidade do dominio Matricula
// Classe Senha feita por Adriele Evellen 202042785
class TUMatricula{
private:

    /// Definicoes de constantes para evitar numeros magicos.

    const string VALOR_VALIDO = "ABCD1234";
    const string VALOR_INVALIDO = "1234ABcD";

    /// Referencia ao objeto a ser testado
    Matricula *matricula;

    /// Estado do teste
    int estado;

    /// Declaracoes de metodos para o teste

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

/// Definicoes de constantes para mostrar o resultado do teste

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    /// Metodo que executa o teste
    int run();
};

/// @brief Declaracao de classe de teste de unidade do dominio Senha
// Classe Senha feita por Adriele Evellen 202042785
class TUSenha{
private:

    /// Definicoes de constantes para evitar numeros magicos.

    const string VALOR_VALIDO = "ADC134";
    const string VALOR_INVALIDO = "AbAc12";

    /// Referencia ao objeto a ser testado
    Senha *senha;

    /// Estado do teste
    int estado;

    /// Declaracoes de metodos para o teste

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    /// Definicoes de constantes para mostrar o resultado do teste

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    /// Metodo que executa o teste
    int run();
};

/// @brief Declaracao de classe de teste de unidade do dominio Texto
// Classe Texto feita por Tainara Santos 202042800
class TUTexto{
private:

    /// Definicoes de constantes para evitar numeros magicos.

    const string VALOR_VALIDO = "Adriele vai passar com 10 com TP1.";
    const string VALOR_INVALIDO = "Adriele, Anderson e Tainara vao passar com 10 com TP1..";

    /// Referencia ao objeto a ser testado
    Texto *texto;

    /// Estado do teste
    int estado;

    /// Declaracoes de metodos para o teste

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    /// Definicoes de constantes para mostrar o resultado do teste

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    /// Metodo que executa o teste
    int run();
};

/// @brief Declaracao de classe de teste de unidade do dominio Codigo
// Classe Texto feita por Tainara Santos 202042800
class TUCodigo{
private:

    /// Definicoes de constantes para evitar numeros magicos.

    const string VALOR_VALIDO = "06499125199";
    const string VALOR_INVALIDO = "34512345684";

    /// Referencia ao objeto a ser testado
    Codigo *codigo;

    /// Estado do teste
    int estado;

    /// Declaracoes de metodos para o teste

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    /// Definicoes de constantes para mostrar o resultado do teste

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    /// Metodo que executa o teste
    int run();
};

/// @brief Declaracao de classe de teste de unidade do dominio Data
// Classe Texto feita por Tainara Santos 202042800
class TUData{
private:

    /// Definicoes de constantes para evitar numeros magicos.

    const string VALOR_VALIDO = "29-02-20";
    const string VALOR_INVALIDO = "34-13-20";

    /// Referencia ao objeto a ser testado
    Data *data;

    /// Estado do teste
    int estado;

    /// Declaracoes de metodos para o teste

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    /// Definicoes de constantes para mostrar o resultado do teste

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    /// Metodo que executa o teste
    int run();
};

/// @brief Declaracao de classe de teste de unidade do dominio Data
// Classe Projeto feita por Anderson Ribeiro Reis 150057326
class TUDisciplina{
private:

    /// Definicoes de constantes para evitar numeros magicos.

    const string VALOR_VALIDO = "Arquitetura";
    const string VALOR_INVALIDO = "Fisica1";

    /// Referencia ao objeto a ser testado
    Disciplina *disciplina;

    /// Estado do teste
    int estado;

    /// Declaracoes de metodos para o teste

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    /// Definicoes de constantes para mostrar o resultado do teste

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    /// Metodo que executa o teste
    int run();
};

#endif

