#include <iostream>
#include <string.h>
#include <stdexcept>
#include <cctype>
#include <map>
#include <algorithm>
#include <cstring>

#include "dominios.h"
using namespace std;


// Definicoes de metodos da classe Nome
void Nome::validar(string nome){
    if(nome.size() > 20)
        throw invalid_argument("Nome precisa ter 20 caracteres");

    char x = '1';
    int cont=0;
    for(char letra : nome){
        if(isalpha(letra) == 0 && letra != ' '){
            throw invalid_argument("Cada caractere e letra(A-Z ou a-z) ou espaco em branco.");
        }
        if(letra == '.' && isalpha(x) == 0){
            throw invalid_argument("Ponto(.) tem que ser precedido por letra.");
        }
        if(letra != ' ' && x == '.'){
            throw invalid_argument("Ponto(.) e ultimo caractere ou seguido por um espaco em branco.");
        }
        if(letra == ' ' && x == ' '){
            throw invalid_argument("Nao pode haver espacos em branco em sequencia.");
        }
        if((x == '1' || x == ' ') && isupper(letra) == 0){
            throw invalid_argument("Primeira letra tem que ser maiuscula.");
        }
        if(cont >=3){
            throw invalid_argument("Nome é composto por prenome e até dois sobrenomes.");
        }
        if(letra == ' '){
            cont = cont+1;
        }
        x = letra;
    }

}



void Nome::setValor(string valor){
    validar(valor);
    this->valor = valor;
}

// Definicoes de metodos da classe Matricula
void Matricula::validar(string matricula){
    if(matricula.size() != 8)
    throw invalid_argument("Matricula precisa ter 8 caracteres");

    for(int num=0; num<8; num++){
        if (num<=3){
            if(isalpha(matricula[num]) == 0 && isupper(matricula[num]) == 0) {
                throw invalid_argument("Os primeiros 4 caracteres precisam ser letras mausculas(A-Z).");}}
        else{
            if(isdigit(matricula[num]) == 0) {
                throw invalid_argument("Os 4 caracteres finais precisam ser numero.");}}
    }

}

void Matricula::setValor(string valor){
    validar(valor);
    this->valor = valor;
}


// Definicoes de metodos da classe Senha
void Senha::validar(string senha){
        map<char, bool>verificaRepeticao;
    int quantidadeMaiusculo = 0, quantidadeNumero = 0;
    if(senha.size() != 6)
        throw invalid_argument("A senha precisa ter 6 digitos.");
    for(char caractere : senha){
        if(verificaRepeticao[caractere] == true){
            throw invalid_argument("Nao pode haver caracter repetido.");
        }else{
            verificaRepeticao[caractere] = true;
        }
        if(isalnum(caractere) == 0 || (isupper(caractere) == 0 && isdigit(caractere) == 0)){
            throw invalid_argument("Cada caractere e letra(A-Z) ou digito(0-9).");
        }
        if(isupper(caractere) != 0)
            quantidadeMaiusculo ++;
        if(isdigit(caractere) != 0)
            quantidadeNumero ++;
    }
    if(quantidadeMaiusculo <= 1 || quantidadeNumero <= 1)
        throw invalid_argument("Dese-se ter ao menos duas letras maiusculas e dois digitos.");
}

void Senha::setValor(string valor){
    validar(valor);
    this->valor = valor;
}

//Definicoes de metodos da classe Texto
void Texto::validar(string texto){
    int n = 0;
    int space2 = 0, punct2 = 0;

    if (texto.size() < 10 || texto.size() > 40) {
        throw invalid_argument("Texto deve ter pelo menos 10 caracteres e no maximo 40 caracteres.");
    }

    while (n < texto.size()) {
        if (isalnum(texto[n]) == false && ispunct(texto[n]) == false && texto[n] != ' ') {
            throw invalid_argument("Texto erro");
        }

        if (ispunct(texto[n]) != false && punct2 == 1) {
            throw invalid_argument("Texto não pode possuir dois sinais de pontuacao em sequencia.");
        } else if (ispunct(texto[n]) != false) {
            punct2 = 1;
        } else {
            punct2 = 0;
        }

        if (texto[n] == ' ' && space2 == 1) {
            throw invalid_argument("Texto nao pode possuir dois espaços seguidos.");
        } else if (texto[n] == ' ') {
            space2 = 1;
        } else {
            space2 = 0;
        }

        n++;
    }

}

void Texto::setValor(string valor){
    validar(valor);
    this->valor = valor;
}

//Definicoes de metodos de classe Codigo
void Codigo::validar(string codigo){
    int n = 0;
    int flag;

    if (codigo.size() != 11) {
        throw invalid_argument("Codigo deve possuir 11 caracteres.");
    }

    while (n < 10) {
        flag = 0;
        for (int i = 48; i < 58; i++) {
            if (codigo[n] == i) {
                flag++;
                break;
            }
        }
        if (flag != 1) {
            throw invalid_argument("Argumento invalido.");
        }
        n++;
    }

    flag = 11 * stoi(codigo.substr(0, 1));
    flag += 10 * stoi(codigo.substr(1, 1));
    flag += 9 * stoi(codigo.substr(2, 1));
    flag += 8 * stoi(codigo.substr(3, 1));
    flag += 7 * stoi(codigo.substr(4, 1));
    flag += 6 * stoi(codigo.substr(5, 1));
    flag += 5 * stoi(codigo.substr(6, 1));
    flag += 4 * stoi(codigo.substr(7, 1));
    flag += 3 * stoi(codigo.substr(8, 1));
    flag += 2 * stoi(codigo.substr(9, 1));
    flag = ((flag * 10) % 11);

    if (stoi(codigo.substr(10, 1))!= flag) {
        throw invalid_argument("Argumento invalido.");
    }

}

void Codigo::setValor(string valor){
    validar(valor);
    this->valor = valor;
}


//Definicoes de metodos de classe Data
void Data::validar(string data){
    int dia, mes, ano, bissex;
    string aux;

    if (data.size() != 8)
        throw invalid_argument("Data deve possuir 8 caracteres.");
    if (isdigit(data[0]) == false)
        throw invalid_argument("O primeiro caracter do dia deve ser um numero.");
    if (isdigit(data[1]) == false)
        throw invalid_argument("O segundo caracter do dia deve ser numero.");
    if (data[2] != 45)
        throw invalid_argument("Numeros devem ser separados por hifen.");
    if (isdigit(data[3]) == false)
        throw invalid_argument("O primeiro caracter de mes deve ser numero.");
    if (isdigit(data[4]) == false)
        throw invalid_argument("O segundo caracter de mes deve ser numero.");
    if (data[5] != 45)
        throw invalid_argument("Numeros devem ser separados por hifen.");
    if (isdigit(data[6]) == false)
        throw invalid_argument("O primeiro caracter de ano deve ser numero.");
    if (isdigit(data[7]) == false)
        throw invalid_argument("O segundo caracter do ano deve ser numero.");

    ano = stoi(data.substr(6, 2));
    mes = stoi(data.substr(3, 2));
    dia = stoi(data.substr(0, 2));

    bissex = 0;
    if (ano % 4 == 0)
        bissex = 1;

    switch (mes) {
        case 1:
            if (dia < 1 || dia > 31)
                throw invalid_argument("Janeiro possui entre 1 a 31 dias.");
            break;
        case 2:
            if (bissex == 0) {
                if (dia < 1 || dia > 28)
                    throw invalid_argument("Fevereiro de ano não bissexto possui entre 1 a 28 dias.");
            }
            else {
                if (dia < 1 || dia > 29)
                    throw invalid_argument("Fevereiro de ano bissexto possui entre 1 a 29 dias.");
            }
            break;
        case  3:
            if (dia < 1 || dia > 31)
                throw invalid_argument("Marco possui entre 1 a 31 dias.");
            break;
        case 4:
            if (dia < 1 || dia > 30)
                throw invalid_argument("Abril possui entre 1 a 31 dias.");
            break;
        case  5:
            if (dia < 1 || dia > 31)
                throw invalid_argument("Maio possui entre 1 a 31 dias.");
            break;
        case 6:
            if (dia < 1 || dia > 30)
                throw invalid_argument("Junho possui entre 1 a 31 dias.");
            break;
        case  7:
            if (dia < 1 || dia > 31)
                throw invalid_argument("Julho possui entre 1 a 31 dias.");
            break;
        case  8:
            if (dia < 1 || dia > 31)
                throw invalid_argument("Agosto possui entre 1 a 31 dias.");
            break;
        case 9:
            if (dia < 1 || dia > 30)
                throw invalid_argument("Setembro possui entre 1 a 31 dias.");
            break;
        case  10:
            if (dia < 1 || dia > 31)
                throw invalid_argument("Outubro possui entre 1 a 31 dias.");
            break;
        case 11:
            if (dia < 1 || dia > 30)
                throw invalid_argument("Novembro possui entre 1 a 31 dias.");
            break;
        case  12:
            if (dia < 1 || dia > 31)
                throw invalid_argument("Dezembro possui entre 1 a 31 dias.");
            break;
        default:
            throw invalid_argument("Esse mes não existe, meses validos estao entre 1 e 12, 1 sendo janeiro e 12 sendo dezembro");
            break;
    }
}

void Data::setValor(string valor){
    validar(valor);
    this->valor = valor;
}

//Definicoes de metodos de classe Disciplina
void Disciplina::validar(string disciplina){
    if (disciplina != "Arquitetura" && disciplina != "Desenvolvimento" && disciplina != "Gerenciamento" && disciplina != "Implantacao" && disciplina != "Requisitos" && disciplina != "Teste") {
        throw invalid_argument("Essa disciplina nao existe ou foi escrita incorretamente.");
   }

}

void Disciplina::setValor(string valor){
    validar(valor);
    this->valor = valor;
}

