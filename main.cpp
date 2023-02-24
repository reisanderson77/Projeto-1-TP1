#include <iostream>

#include "dominios.h"
#include "entidades.h"
#include "testesDominios.h"
#include "testesEntidades.h"

using namespace std;

int main(){


    // Declaracao de classes para testes de dominios

    TUMatricula testeMatricula;
    TUNome testeNome;
    TUSenha testeSenha;
    TUTexto testeTexto;
    TUCodigo testeCodigo;
    TUData testeData;
    TUDisciplina testeDisciplina;

    // Declaracao de classes para testes de entidades

    TUUsuario testeUsuario;
    TUProjeto testeProjeto;
    TUTarefa testeTarefa;

    cout << "------------------------------" << endl;
    cout << "|          DOMINIOS          |" << endl;
    cout << "------------------------------" << endl;
    // Teste do dominio Nome
    switch(testeNome.run()){
        case TUNome::SUCESSO: cout << "SUCESSO - Nome" << endl;
                                break;
        case TUNome::FALHA  : cout << "FALHA   - Nome" << endl;
                                break;
    }

    // Teste do dominio Matricula
    switch(testeMatricula.run()){
        case TUMatricula::SUCESSO: cout << "SUCESSO - Matricula" << endl;
                                break;
        case TUMatricula::FALHA  : cout << "FALHA   - Matricula" << endl;
                                break;
    }

    // Teste do dominio Senha
    switch(testeSenha.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO - Senha" << endl;
                                break;
        case TUSenha::FALHA  : cout << "FALHA   - Senha" << endl;
                                break;
    }

    // Teste do dominio Texto
    switch(testeTexto.run()){
        case TUTexto::SUCESSO: cout << "SUCESSO - Texto" << endl;
                                break;
        case TUTexto::FALHA  : cout << "FALHA   - Texto" << endl;
                                break;
    }
    // Teste do dominio Codigo
    switch(testeCodigo.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - Codigo" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA   - Codigo" << endl;
                                break;
    }
    // Teste do dominio Data
    switch(testeData.run()){
        case TUData::SUCESSO: cout << "SUCESSO - Data" << endl;
                                break;
        case TUData::FALHA  : cout << "FALHA   - Data" << endl;
                                break;
    }
    // Teste do dominio Disciplina
    switch(testeDisciplina.run()){
        case TUDisciplina::SUCESSO: cout << "SUCESSO - Disciplina" << endl;
                                break;
        case TUDisciplina::FALHA  : cout << "FALHA   - Disciplina" << endl;
                                break;
    }

    cout << endl;
    cout << "------------------------------" << endl;
    cout << "|         ENTIDADES          |" << endl;
    cout << "------------------------------" << endl;

   // Teste da entidade Usuario
    switch(testeUsuario.run()){
        case TUUsuario::SUCESSO: cout << "SUCESSO - Usuario" << endl;
                                break;
        case TUUsuario::FALHA  : cout << "FALHA   - Usuario" << endl;
                                break;
    }
    //Teste da entidade Projeto
    switch(testeProjeto.run()){
        case TUProjeto::SUCESSO: cout << "SUCESSO - Projeto" << endl;
                                break;
        case TUProjeto::FALHA  : cout << "FALHA   - Projeto" << endl;
                                break;
    }

    //Teste da entidade Tarefa
    switch(testeProjeto.run()){
        case TUProjeto::SUCESSO: cout << "SUCESSO - Tarefa" << endl;
                                break;
        case TUProjeto::FALHA  : cout << "FALHA   - Tarefa" << endl;
                                break;
    }

    return 0;
}
