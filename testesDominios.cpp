#include "testesDominios.h"

#include <iostream>
#include <string.h>

using namespace std;

// Definicoes de metodos de teste de unidade do dominio None
void TUNome::setUp(){
    nome = new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown(){
    delete nome;
}

void TUNome::testarCenarioSucesso(){
    try{
        nome->setValor(VALOR_VALIDO);
        if (nome->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha(){
    try{
        nome->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (nome->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Definicoes de metodos de teste de unidade do dominio Matricula
void TUMatricula::setUp(){
    matricula = new Matricula();
    estado = SUCESSO;
}

void TUMatricula::tearDown(){
    delete matricula;
}

void TUMatricula::testarCenarioSucesso(){
    try{
        matricula->setValor(VALOR_VALIDO);
        if (matricula->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUMatricula::testarCenarioFalha(){
    try{
        matricula->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (matricula->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUMatricula::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Definicoes de metodos de teste de unidade do dominio Senha
void TUSenha::setUp(){
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown(){
    delete senha;
}

void TUSenha::testarCenarioSucesso(){
    try{
        senha->setValor(VALOR_VALIDO);
        if (senha->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha(){
    try{
        senha->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (senha->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Definicoes de metodos de teste de unidade do dominio Texto
void TUTexto::setUp(){
    texto = new Texto();
    estado = SUCESSO;
}

void TUTexto::tearDown(){
    delete texto;
}

void TUTexto::testarCenarioSucesso(){
    try{
        texto->setValor(VALOR_VALIDO);
        if (texto->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUTexto::testarCenarioFalha(){
    try{
        texto->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (texto->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUTexto::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Definicoes de metodos de teste de unidade do dominio Codigo
void TUCodigo::setUp(){
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown(){
    delete codigo;
}

void TUCodigo::testarCenarioSucesso(){
    try{
        codigo->setValor(VALOR_VALIDO);
        if (codigo->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha(){
    try{
        codigo->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (codigo->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUCodigo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Definicoes de metodos de teste de unidade do dominio Data
void TUData::setUp(){
    data = new Data();
    estado = SUCESSO;
}

void TUData::tearDown(){
    delete data;
}

void TUData::testarCenarioSucesso(){
    try{
        data->setValor(VALOR_VALIDO);
        if (data->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha(){
    try{
        data->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (data->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Definicoes de metodos de teste de unidade do dominio Disciplina
void TUDisciplina::setUp(){
    disciplina = new Disciplina();
    estado = SUCESSO;
}

void TUDisciplina::tearDown(){
    delete disciplina;
}

void TUDisciplina::testarCenarioSucesso(){
    try{
        disciplina->setValor(VALOR_VALIDO);
        if (disciplina->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUDisciplina::testarCenarioFalha(){
    try{
        disciplina->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (disciplina->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUDisciplina::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
