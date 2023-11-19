#include "../include/sistema.hpp"
#include "../include/menu.hpp"
#include "../include/professor.hpp"
#include "../include/tecnico_adm.hpp"


using namespace std;

void execucao(BancoDAO dados) {
  
  int opcao = -1;
  do {
    opcao = menuPrincipal();
    switch (opcao) {
    case 1:
      void menuCadastrarProfessor();

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