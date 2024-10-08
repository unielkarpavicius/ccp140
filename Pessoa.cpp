#pragma once
#include<iostream>
#include "Data.cpp"
#include "Endereco.cpp"
using namespace std;

class Pessoa{
    private:
        string nome;
        string sobrenome;
        long cpf;
        Data nascimento;
        Endereco endereco;

    public:

        //Pessoa(string nome, string sobrenome, long cpf){
            //this -> nome = nome;
            //this -> sobrenome = sobrenome;
            //this -> cpf = cpf;
        //}

        Pessoa(string nome, string sobrenome, long cpf, int dia, int mes, int ano, Endereco endereco):
        nome(nome), sobrenome(sobrenome), cpf(cpf), nascimento(dia, mes, ano), endereco(endereco){}

        void setNome (string nome, string sobrenome) {
            this -> nome = nome;
            this -> sobrenome = sobrenome;

        }
        void setNome(string nome) {
            this -> nome = nome;

        }
        void setSobrenome(string sobrenome) {
            this -> sobrenome = sobrenome;
        }
        void setCPF(long cpf) {
            this -> cpf = cpf;
        }

        string getNome(){
            return nome;
        }
        string getSobrenome(){
            return sobrenome;
        }
        long getCPF(){
            return cpf;
        }

        string getNascimento() {
            return this->nascimento.getData();
        }
        string getEndereco() {
            return this->endereco.getEndereco();
        }
        virtual void print(){
            cout << "Dados da Pessoa" << endl;
            cout << "Nome: " << this->getNome() << " " << this->getSobrenome() << endl;
            cout << "CPF: " << this->getCPF() << endl;
            cout << "Data de Nascimento: " << this->getNascimento() << endl;
            cout << "Endereço: " << this->getEndereco() << endl;
            cout << "\n" << endl;
        }

};
