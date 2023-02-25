#include "testesEntidades.h"
#include <iostream>
#include <string.h>

using namespace std;

// Criancao dos metodos para testes de entidade Usuario
void TUUsuario::setUp(){
    usuario = new Usuario();
    estado = SUCESSO;
}

void TUUsuario::tearDown(){
    delete usuario;
}

void TUUsuario::testarCenarioSucesso(){
    Nome nome;
    nome.setValor(VALOR_VALIDO_NOME);
    usuario->setNome(nome);
    if(usuario->getNome().getValor() != VALOR_VALIDO_NOME)
        estado = FALHA;

    Matricula matricula;
    matricula.setValor(VALOR_VALIDO_MATRICULA);
    usuario->setMatricula(matricula);
    if(usuario->getMatricula().getValor() != VALOR_VALIDO_MATRICULA)
        estado = FALHA;

    Senha senha;
    senha.setValor(VALOR_VALIDO_SENHA);
    usuario->setSenha(senha);
    if(usuario->getSenha().getValor() != VALOR_VALIDO_SENHA)
        estado = FALHA;
}

int TUUsuario::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

// Criancao dos metodos para testes de entidade Projeto
void TUProjeto::setUp(){
    projeto = new Projeto();
    estado = SUCESSO;
}

void TUProjeto::tearDown(){
    delete projeto;
}

void TUProjeto::testarCenarioSucesso(){
    Texto nome;
    nome.setValor(VALOR_VALIDO_NOME);
    projeto->setTextoNome(nome);
    if(projeto->getTextoNome().getValor() != VALOR_VALIDO_NOME)
        estado = FALHA;

    Codigo codigo;
    codigo.setValor(VALOR_VALIDO_CODIGO);
    projeto->setCodigo(codigo);
    if(projeto->getCodigo().getValor() != VALOR_VALIDO_CODIGO)
        estado = FALHA;

    Texto descricao;
    descricao.setValor(VALOR_VALIDO_DESCRICAO);
    projeto->setTextoDescricao(descricao);
    if(projeto->getTextoDescricao().getValor() != VALOR_VALIDO_DESCRICAO)
        estado = FALHA;

}

int TUProjeto::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}


// Criancao dos metodos para testes de entidade Tarefa
void TUTarefa::setUp(){
    tarefa = new Tarefa();
    estado = SUCESSO;
}

void TUTarefa::tearDown(){
    delete tarefa;
}

void TUTarefa::testarCenarioSucesso(){
    Texto nome;
    nome.setValor(VALOR_VALIDO_NOME);
    tarefa->setTarefaNome(nome);
    if(tarefa->getTarefaNome().getValor() != VALOR_VALIDO_NOME)
        estado = FALHA;

    Codigo codigo;
    codigo.setValor(VALOR_VALIDO_CODIGO);
    tarefa->setTarefaCodigo(codigo);
    if(tarefa->getTarefaCodigo().getValor() != VALOR_VALIDO_CODIGO)
        estado = FALHA;

    Data data;
    data.setValor(VALOR_VALIDO_DATA);
    tarefa->setDataInicio(data);
    if(tarefa->getDataInicio().getValor() != VALOR_VALIDO_DATA)
        estado = FALHA;

}

int TUTarefa::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}
