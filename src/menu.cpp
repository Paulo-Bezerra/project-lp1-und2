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