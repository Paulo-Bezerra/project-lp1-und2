#include "../include/sistema.hpp"
#include <iostream>

using namespace std;

void execucao() {
  BancoDAO dados;
  Professor p;
  TecnicoAdm t;
  int opcao = -1, indice = -1;
  string matricula;


  do {
    opcao = menuPrincipal();
    switch (opcao) {
    case 0:
      break;
    case 1:
      dados.cadastrarProfessor(formularioCadastrarProfessor());
      break;
    case 2:
      dados.cadastrarTecnicoAdm(formularioCadastrarTecnicoAdm());
      break;
    case 3:
      dados.listarProfessores();
      break;
    case 4:
      dados.listarTecnicosAdm();
      break;
    case 5:
      cout << "Informe a matrícula do(a) professor(a) a ser deletado(a): ";
      cin >> matricula;
      dados.deletarProfessor(matricula);
    case 6:
      cout << "Informe a matrícula do(a) técnico(a) a ser deletado(a): ";
      cin >> matricula;
      dados.deletarProfessor(matricula);
    case 7:
      cout << "Informe a matrícula do(a) professor(a) que deseja buscar: ";
      cin >> matricula;
      p = dados.buscarProfessor(matricula);
      if (p.getMatricula() == "invalida") {
        cout << "Matrícula inválida!" << endl;
        break;
      }
      cout << "Dados do(a) professor(a):" << endl << endl;
      cout << "================================================================================" << endl;
    cout
      << "Nome: " << p.getNome() << ", cpf: " << p.getCpf() << ", data de nascimento: " << p.getDataNascimento() << ", genero: " << p.getGenero() << endl
      << "Rua: " << p.getEndereco().getRua() << ", endereço: " << p.getEndereco().getNumero() << ", bairro: " << p.getEndereco().getBairro() << ", cidade: " << p.getEndereco().getCidade() << ", CEP: " << p.getEndereco().getCep() << endl
      << "Formação: " << p.getFormacaoProfessor() << ", nível: " << p.getNivelProfessor() << endl
      << "--------------------------------------------------------------------------------" << endl;
      break;
    case 8:
      cout << "Informe a matrícula do(a) técnico(a) que deseja buscar: ";
      cin >> matricula;
      t = dados.buscarTecnicoAdm(matricula);
      if (p.getMatricula() == "invalida") {
        cout << "Matrícula inválida!" << endl;
        break;
      }
      cout << "tecnicos administrativos cadastrados:" << endl << endl;
      cout << "================================================================================" << endl;
      cout
        << "Nome: " << t.getNome() << ", cpf: " << t.getCpf() << ", data de nascimento: " << t.getDataNascimento() << ", genero: " << t.getGenero() << endl
        << "Rua: " << t.getEndereco().getRua() << ", endereço: " << t.getEndereco().getNumero() << ", bairro: " << t.getEndereco().getBairro() << ", cidade: " << t.getEndereco().getCidade() << ", CEP: " << t.getEndereco().getCep() << endl
        << "funcao desempenhada: " << t.getFuncaoDesempenhada() << ", adcional de profutividade: " << t.getAdicionalProdutividade() << endl
        << "--------------------------------------------------------------------------------" << endl;
      break;
    default:
      cout << "Opção inválida!" << endl;
      break;
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