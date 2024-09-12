#include<iostream>
#include "Pessoa.cpp"
using namespace std;

int main () {
    Endereco e("Rua R", 1, "Bairro B");
    Pessoa p ("Nome", "Sobrenome", 7865270256, 11, 9, 2001, e);
    //p.setNome("Nome");
    //p.setSobrenome("Sobrenome");
    //p.setCPF(7865270256);

    cout << "Dados da Pessoa" << endl;
    cout << "Nome: " << p.getNome() << " " << p.getSobrenome() << endl;
    cout << "CPF: " << p.getCPF() << endl;
    cout << "Data de Nascimento: " << p.getNascimento() << endl;
    cout << "Endereço: " << p.getEndereco() << endl;

}
