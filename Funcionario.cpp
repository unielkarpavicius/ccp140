#include "Pessoa.cpp"
using namespace std;

class Funcionario: public Pessoa{

    private:
        double salario;
        int cadastro;

    public:
        Funcionario(string nome, string sobrenome, long cpf, 
            int dia, int mes, int ano, Endereco endereco, 
            double salario, int cadastro):  
        Pessoa(nome, sobrenome, cpf, dia, mes, ano, endereco),
        salario{salario}, cadastro{cadastro}{}

        double getSalario() {
            return salario;
        }
        int getCadastro() {
            return cadastro;
        }

        virtual void print(){
            cout << "Dados do Funcionário" << endl;
            cout << "Nome: " << this->getNome() << " " << this->getSobrenome() << endl;
            cout << "CPF: " << this->getCPF() << endl;
            cout << "Data de Nascimento: " << this->getNascimento() << endl;
            cout << "Endereço: " << this->getEndereco() << endl;
            cout << "Salario: " << this->getSalario() << endl;
            cout << "Cadastro: " << this->getCadastro() << endl;
            cout << "\n" << endl;
        }
};