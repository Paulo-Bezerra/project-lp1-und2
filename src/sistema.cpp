#include "../include/sistema.hpp"
#include "../include/menu.hpp"
#include "../include/banco_dao.hpp"



using namespace std;

void execucao(BancoDAO dados) {
  Professor p;
  TecnicoAdm t;
  int opcao = -1;

  do {
    opcao = menuPrincipal();
    switch (opcao) {
    case 1:

    }
  } while (opcao != 0);
  cout << "Enderrando...";
}

// << "1. Cadastrar Professor" << endl
// << "2. Cadastrar Tecnico Administrativo" << endl
// << "3. Listar Professores" << endl
// << "4. Listar Tecnico Administrativo" << endl
// << "5. Deletar Professor" << endl
// << "6. Deletar Tecnico Administrativo" << endl
// << "7. Buscar Professor" << endl
// << "8. Buscar Tecnico Administrativo" << endl
// << "0. Sair" << endl