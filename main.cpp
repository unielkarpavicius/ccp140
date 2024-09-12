#include<iostream>
#include "Pessoa.cpp"
#include "MinhasExececoes.cpp"
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

    int dia, mes, ano;

    while (true) {
        try{
        cout << "Informe o dia: " << endl;
        cin >> dia;
        cout << "Informe o mês: " << endl;
        cin >> mes;
        cout << "Informe o ano: " << endl;
        cin >> ano;

        if (dia<1 || dia>31){
            throw MinhasExececoes ("Dia invalido!");
        }

        Data d(dia, mes, ano);
        cout << d.getData();
        break;

        } catch(MinhasExececoes e){
        cout<< e.mensagem << endl;
        }
    }

}
