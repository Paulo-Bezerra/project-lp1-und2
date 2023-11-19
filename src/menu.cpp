#include "../include/menu.hpp"
#include <iostream>

using namespace std;



int menuPrincipal() {
  int opcao;
  cout
    << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl
    << "= Sistema de gerenciamento de empregados da empresa IMDCorp =" << endl
    << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
  cout << "++++++++" << endl << "+ Menu +" << endl << "++++++++" << endl;

  cout
    << "1. Cadastrar Professor" << endl
    << "2. Cadastrar Tecnico Administrativo" << endl
    << "3. Listar Professores" << endl
    << "4. Listar Tecnico Administrativo" << endl
    << "5. Deletar Professor" << endl
    << "6. Deletar Tecnico Administrativo" << endl
    << "7. Buscar Professor" << endl
    << "8. Buscar Tecnico Administrativo" << endl
    << "0. Sair" << endl
    << "Selecione a opção desejada: ";
  cin >> opcao;
  if (opcao >= 0 || opcao <= 8) return opcao;
  return -1;
}

void menuCadastrarProfessor() {
  cout << "Cadatro de professor(a)" << endl
    << "Informe os dados da seguinte maneira:" << endl
    << "\t Nome" << endl
    << "\t CPF" << endl
    << "\t Data Nascimento" << endl
    << "\t Genero" << endl
    << "\t Rua" << endl
    << "\t Número" << endl
    << "\t Bairro" << endl
    << "\t Cidade" << endl
    << "\t CEP" << endl
    << "\t Matrícula" << endl
    << "\t Salário" << endl
    << "\t Departamento" << endl
    << "\t Carga horária" << endl
    << "\t Data de ingresso" << endl
    << "\t Formação do professor {GRADUACAO = 1, ESPECIALIZACAO = 2, MESTRADO = 3, DOUTORADO = 4}" << endl
    << "\t Nível do professor {I = 1, II = 2, III = 3, IV = 4, V = 5, VI = 6, VII = 7, VIII = 8}" << endl
    << "Informe os dados abaixo:" << endl;
}