#include<iostream>
#include "Pessoa.cpp"
#include "Funcionario.cpp"
#include "MinhasExececoes.cpp"
using namespace std;


int main () {
    Endereco e("Rua R", 1, "Bairro B");
    Pessoa p ("Pessoa", "Sobrenome", 7865270256, 11, 9, 2001, e);
    //p.setNome("Nome");
    //p.setSobrenome("Sobrenome");
    //p.setCPF(7865270256);
    Funcionario f ("Funcionário", "Sobrenome", 7865270256, 11, 9, 2001, e, 1000, 1234);

    Pessoa*pessoas[2];
    pessoas [0] = &p;
    pessoas [1] = &f;


    for(int i=0; i<2; i++){
        pessoas[i]->print();
    }

    //cout << "Dados da Funcionário" << endl;
    //cout << "Nome: " << f.getNome() << " " << f.getSobrenome() << endl;
    //cout << "CPF: " << f.getCPF() << endl;
    //cout << "Data de Nascimento: " << f.getNascimento() << endl;
    //cout << "Endereço: " << f.getEndereco() << endl;


    //int dia, mes, ano;

    //while (true) {
        //try{
        //cout << "Informe o dia: " << endl;
        //cin >> dia;
        //cout << "Informe o mês: " << endl;
        //cin >> mes;
        //cout << "Informe o ano: " << endl;
        //cin >> ano;

        //if (((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0)) {
            //if (mes == 2){ 
                //if(dia <1 || dia>29){
                  //  throw MinhasExececoes ("Dia invalido!");
                //}
            //}
             //else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12 ){ 
                //if(dia <1 || dia>31){
                //    throw MinhasExececoes ("Dia invalido!");
              //  }
            //}
            //else{
                //if(dia<1 || dia> 30){
              //      throw MinhasExececoes ("Dia invalido!");
            //    }
          //  }
        //}
        //else{
            //if (mes == 2){ 
                //if(dia <1 || dia>28){
                //    throw MinhasExececoes ("Dia invalido!");
              //  }
            //}
             //else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12 ){ 
                //if(dia <1 || dia>31){
                //    throw MinhasExececoes ("Dia invalido!");
              //  }
            //}
            //else{
                //if(dia<1 || dia> 30){
              //      throw MinhasExececoes ("Dia invalido!");
            //    }
          //  }

        //}


        //if (dia<1 || dia>31){
          //  throw MinhasExececoes ("Dia invalido!");
        //}

        //if (mes<1 || mes>12){
          //  throw MinhasExececoes ("Mês invalido!");
        //}

        //if (ano<1900 || ano>2024){
          //  throw MinhasExececoes ("Ano invalido!");
        //}

        //Data d(dia, mes, ano);
        //cout << d.getData();
        //break;

        //} catch(MinhasExececoes e){
        //cout<< e.mensagem << endl;
      //  }
    //}

}
