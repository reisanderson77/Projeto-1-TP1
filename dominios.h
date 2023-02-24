#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <iostream>
#include <string.h>

using namespace std;


///
/// @brief Padrao para representacao de nome
///
/// Regras de formato:
///
/// - Nome e composto por prenome e ate dois sobrenomes.
/// - Texto (prenome mais sobrenomes e espacos em branco) e composto por total de ate 20 caracteres.
/// - Cada caractere e letra (A-Z, a-z) ou espaço em branco.
/// - Primeira letra de prenome ou de sobrenome e maiuscula (A-Z) e as outras sao minusculas (a-z).
/// - Nao ha espaços em branco em sequencia.
/// - Acentuacao pode ser desconsiderada.
///
///

// Classe Nome feita por Adriele Evellen 202042785
class Nome{
    private:
        string valor;
        void validar(string valor);

    public:
        ///
        /// Armazena o nome informado caso seja valido
        ///
        /// Lanca excecao caso o nome nao esteja de acordo com as regras de formato
        ///
        /// @param valor nome
        ///
        /// @throw invalid_argument
        ///
        void setValor(string valor);

        ///
        /// Retorna o nome armazenado
        ///
        /// @return nome
        ///
        string getValor() const;

};

inline string Nome::getValor() const{
    return valor;
}


///
/// @brief Padrao para representacao de matricula
///
/// Regras de formato:
///
/// - Formato LLLLDDDD
/// - L e letra maiuscula (A-Z).
/// - D e digito (0-9).
///

// Classe Metricula feita por Adriele Evellen 202042785
class Matricula{
    private:
        string valor;
        void validar(string valor);

    public:
        ///
        /// Armazena a matricula informada caso seja valido
        ///
        /// Lança excecao caso o matricula nao esteja de acordo com as regras de formato
        ///
        /// @param valor matricula
        ///
        /// @throw invalid_argument
        ///

        void setValor(string valor);

        ///
        /// Retorna o matricula armazenado
        ///
        /// @return matricula
        ///
        string getValor() const;

};
inline string Matricula::getValor() const{
    return valor;
}

///
/// @brief Padrao para representacao de senha
///
/// Regras de formato:
///
/// - Formato XXXXXX onde X e letra, ponto ou espaço em branco;
/// - Nao existe caracter repetido;
/// - E necessario pelo menos uma letra minuscula, uma letra maiuscula e um digito.
///

// Classe Senha feita por Adriele Evellen 202042785
class Senha{
    private:
        string valor;
        void validar(string valor);

    public:
        ///
        /// Armazena a senha informada caso seja valida
        ///
        /// Lança excecao caso a senha nao esteja de acordo com as regras de formato
        ///
        /// @param valor senha
        ///
        /// @throw invalid_argument
        ///
        void setValor(string valor);
        ///
        /// Retorna a senha armazenada
        ///
        /// @return senha
        ///
        string getValor() const;

};
inline string Senha::getValor() const{
    return valor;
}


///
/// @brief Padrao para representacao de Texto
///
/// Regras de formato:
///
/// - Formato por 10 a 40 caracteres.
/// - Cada caractere X e letra (A-Z ou a-z), digito (0-9) ou sinal de pontuacao ( . , ; ? ! : - ).
/// - Nao ha espacos em branco em sequencia.
/// - Nao ha sinal de pontuacao (. , ; : ? ! -) em sequencia.
///

// Classe Texto feita por Anderson Ribeiro Reis 150057326
class Texto{
    private:
        string valor;
        void validar(string valor);

    public:
        ///
        /// Armazena o texto informado caso seja valida
        ///
        /// Lanca excecao caso o texto nao esteja de acordo com as regras de formato
        ///
        /// @param valor texto
        ///
        /// @throw invalid_argument
        void setValor(string valor);
        ///
        /// Retorna o texto armazenado
        ///
        /// @return texto
        ///
        string getValor() const;
};

inline string Texto::getValor() const{
    return valor;
}

///
/// @brief Padrao para representacao de Texto
///
/// Regras de formato:
///
/// - Formato por 10 a 40 caracteres.
/// - Cada caractere X e letra (A-Z ou a-z), digito (0-9) ou sinal de pontuacao ( . , ; ? ! : - ).
/// - Nao ha espacos em branco em sequencia.
/// - Nao ha sinal de pontuacao (. , ; : ? ! -) em sequencia.
///

// Classe Codigo feita por Anderson Ribeiro Reis 150057326
class Codigo{
    private:
        string valor;
        void validar(string valor);

    public:
        ///
        /// Armazena o codigo informado caso seja valida
        ///
        /// Lanca excecao caso o codigo nao esteja de acordo com as regras de formato
        ///
        /// @param valor codigo
        ///
        /// @throw invalid_argument
        void setValor(string valor);
        ///
        /// Retorna o codigo armazenado
        ///
        /// @return codigo
        ///
        string getValor() const;
};

inline string Codigo::getValor() const{
    return valor;
}


///
/// @brief Padrao para representacao de Data
///
/// Regras de formato:
///
/// - Formato DD-MES-ANO;
/// - DD - 01 a 31;
/// - MES - 01 a 12;
/// - ANO - 00 a 99;
/// - Deve ser levado em consideracao se ano e ou nao e bissexto.
///

// Classe Data feita por Anderson Ribeiro Reis 150057326
class Data{
    private:
        string valor;
        void validar(string valor);

    public:
        ///
        /// Armazena a data informada caso seja valida
        ///
        /// Lanca excecao caso a data nao esteja de acordo com as regras de formato
        ///
        /// @param valor data
        ///
        /// @throw invalid_argument
        void setValor(string valor);
        ///
        /// Retorna o data armazenado
        ///
        /// @return data
        ///
        string getValor() const;
};

inline string Data::getValor() const{
    return valor;
}

///
/// @brief Padrao para representacao de Disciplina
///
/// Regras de formato:
///
/// - Disciplinas disponiveis: Arquitetura, Desenvolvimento, Gerenciamento, Implantacao, Requisitos, TesteFormato DD-MES-ANO;
///

// Classe Data feita por Anderson Ribeiro Reis 150057326
class Disciplina{
    private:
        string valor;
        void validar(string valor);

    public:
        ///
        /// Armazena a disciplina informada caso seja valida
        ///
        /// Lanca excecao caso a disciplina nao esteja de acordo com as regras de formato
        ///
        /// @param valor data
        ///
        /// @throw invalid_argument
        void setValor(string valor);
        ///
        /// Retorna a disciplina armazenado
        ///
        /// @return data
        ///
        string getValor() const;
};

inline string Disciplina::getValor() const{
    return valor;
}

#endif

