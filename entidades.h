#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"

#include <stdexcept>
#include <iostream>
#include <string.h>

using namespace std;

/// @brief Padrao para representacao de usuario:
///
/// Usuario contem entidades Nome, Matricula e Senha.
// Classe criada por Adriele Evellen 202042785
class Usuario{
private:
    Nome nome;
    Matricula matricula;
    Senha senha;

public:
    /// - Armazena o nome do Usuario caso seja valido
    ///
    /// - Caso o nome seja invalido e lacanda execao
    ///
    /// - @param Nome nome
    ///
    /// - @throw invalid argument
    ///
    void setNome(const Nome &nome);
    ///
    /// - Retorna o nome
    ///
    /// - @return nome
    ///
    Nome getNome() const;
    ///
    /// - Armazena a matricula do Usuario caso seja valido
    ///
    /// - Caso o matricula seja invalido e lancada execao
    ///
    /// - @param Matricula matricula
    ///
    /// - @throw invalid argument
    ///
    void setMatricula(const Matricula &matricula);
    ///
    /// - Retorna a matricula
    ///
    /// - @return matricula
    ///
    Matricula getMatricula() const;
    ///
    /// - Armazena a senha do Usuario caso seja valido
    ///
    /// - Caso a senha seja invalido e lancada execao
    ///
    /// - @param Senha senha
    ///
    /// - @throw invalid argument
    ///
    void setSenha(const Senha &senha);
    ///
    /// - Retorna a senha
    ///
    /// - @return senha
    ///
    Senha getSenha() const;

};

inline void Usuario::setNome(const Nome& nome){
    this -> nome = nome;
}
inline Nome Usuario::getNome() const {
    return nome;
}

inline void Usuario::setMatricula(const Matricula& matricula){
    this -> matricula = matricula;
}
inline Matricula Usuario::getMatricula() const {
    return matricula;
}
inline void Usuario::setSenha(const Senha& senha){
    this -> senha = senha;
}
inline Senha Usuario::getSenha() const {
    return senha;
}



/// @brief Padrao para representacao do Projeto:
///
/// Projeto contem entidades Texto (nome), Codigo e Texto(descricao).
// Classe Projeto feita por Anderson Ribeiro Reis 150057326
class Projeto{
private:
    Texto nome;
    Codigo codigo;
    Texto descricao;

public:
    /// - Armazena o nome do Projeto caso seja valido
    ///
    /// - Caso o nome seja invalido e lacanda execao
    ///
    /// - @param Texto nome
    ///
    /// - @throw invalid argument
    ///
    void setTextoNome(const Texto &nome);
    ///
    /// - Retorna o nome
    ///
    /// - @return nome
    ///
    Texto getTextoNome() const;
    ///
    /// - Armazena o codigo do Projeto caso seja valido
    ///
    /// - Caso o codigo seja invalido e lancada execao
    ///
    /// - @param Codigo codigo
    ///
    /// - @throw invalid argument
    ///
    void setCodigo(const Codigo &codigo);
    ///
    /// - Retorna o codigo
    ///
    /// - @return codigo
    ///
    Codigo getCodigo() const;
    ///
    /// - Armazena a descricao do Projeto caso seja valido
    ///
    /// - Caso a descricao seja invalido e lancada execao
    ///
    /// - @param Texto descricao
    ///
    /// - @throw invalid argument
    ///
    void setTextoDescricao(const Texto &descricao);
    ///
    /// - Retorna a descricao
    ///
    /// - @return descricao
    ///
    Texto getTextoDescricao() const;

};

inline void Projeto::setTextoNome(const Texto& nome){
    this -> nome = nome;
}
inline Texto Projeto::getTextoNome() const {
    return nome;
}

inline void Projeto::setCodigo(const Codigo& codigo){
    this -> codigo = codigo;
}
inline Codigo Projeto::getCodigo() const {
    return codigo;
}
inline void Projeto::setTextoDescricao(const Texto& descricao){
    this -> descricao = descricao;
}
inline Texto Projeto::getTextoDescricao() const {
    return descricao;
}


/// @brief Padrao para representacao do Projeto:
///
/// Projeto contem entidades Texto (nome), Codigo e Texto(descricao).
// Classe Texto feita por Tainara Santos 202042800
class Tarefa{
private:
    Texto nome;
    Codigo codigo;
    Data inicio;
    Data termino;
    Disciplina disciplina;

public:
    /// - Armazena o nome da Tarefa caso seja valido
    ///
    /// - Caso o nome seja invalido eh lacanda execao
    ///
    /// - @param Tarefa nome
    ///
    /// - @throw invalid argument
    ///
    void setTarefaNome(const Texto &nome);
    ///
    /// - Retorna o nome
    ///
    /// - @return nome
    ///
    Texto getTarefaNome() const;
    ///
    /// - Armazena o codigo da Tarefa caso seja valido
    ///
    /// - Caso o codigo seja invalido eh lancada execao
    ///
    /// - @param Codigo codigo
    ///
    /// - @throw invalid argument
    ///
    void setTarefaCodigo(const Codigo &codigo);
    ///
    /// - Retorna o codigo
    ///
    /// - @return codigo
    ///
    Codigo getTarefaCodigo() const;
    ///
    /// - Armazena a data inicio da Tarefa caso seja valido
    ///
    /// - Caso a data seja invalido eh lancada execao
    ///
    /// - @param Data data
    ///
    /// - @throw invalid argument
    ///
    void setDataInicio(const Data &inicio);
    ///
    /// - Retorna a data inicio
    ///
    /// - @return data inicio
    ///
    Data getDataInicio() const;
    ///
    /// - Armazena a data termino da Tarefa caso seja valido
    ///
    /// - Caso a data seja invalido e lancada execao
    ///
    /// - @param Tarefa data
    ///
    /// - @throw invalid argument
    ///
    void setDataTermino(const Data &termino);
    ///
    /// - Retorna a data termino
    ///
    /// - @return data termino
    ///
    Data getDataTermino() const;
     ///
    /// - Armazena a disciplina da Tarefa caso seja valido
    ///
    /// - Caso a disciplina seja invalido e lancada execao
    ///
    /// - @param Tarefa disciplina
    ///
    /// - @throw invalid argument
    ///
    void setDisciplina(const Disciplina &disciplina);
    ///
    /// - Retorna a disciplina
    ///
    /// - @return disciplina
    ///
    Disciplina getDisciplina() const;


};

inline void Tarefa::setTarefaNome(const Texto& nome){
    this -> nome = nome;
}
inline Texto Tarefa::getTarefaNome() const {
    return nome;
}
inline void Tarefa::setTarefaCodigo(const Codigo& codigo){
    this -> codigo = codigo;
}
inline Codigo Tarefa::getTarefaCodigo() const {
    return codigo;
}
inline void Tarefa::setDataInicio(const Data& inicio){
    this -> inicio = inicio;
}
inline Data Tarefa::getDataInicio() const {
    return inicio;
}
inline void Tarefa::setDataTermino(const Data& termino){
    this -> termino = termino;
}
inline Data Tarefa::getDataTermino() const {
    return termino;
}
inline void Tarefa::setDisciplina(const Disciplina& disciplina){
    this -> disciplina = disciplina;
}
inline Disciplina Tarefa::getDisciplina() const {
    return disciplina;
}
#endif
