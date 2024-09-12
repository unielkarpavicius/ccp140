#include<iostream>
#include "Data.cpp"
using namespace std;

class Pessoa{
    private:
        string nome;
        string sobrenome;
        long cpf;
        Data Nascimento;

    public:

        Pessoa(string nome, string sobrenome, long cpf){
            this -> nome = nome;
            this -> sobrenome = sobrenome;
            this -> cpf = cpf;
        }

        //Pessoa(string nome, string sobrenome, long cpf):nome(nome), sobrenome(sobrenome), cpf(cpf){}

        void setNome (string nome, string sobrenome) {
            this -> nome = nome;
            this -> sobrenome = sobrenome;

        }
        void setNome (string nome) {
            this -> nome = nome;

        }
        void setSobrenome (string sobrenome) {
            this -> sobrenome = sobrenome;
        }
        void setCPF (long cpf) {
            this -> cpf = cpf;
        }

        string getNome (){
            return nome;
        }
        string getSobrenome (){
            return sobrenome;
        }
        long getCPF (){
            return cpf;
        }
        
};
