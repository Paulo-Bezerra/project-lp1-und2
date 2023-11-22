#include "../include/sistema.hpp"
#include <iostream>

using namespace std;

void execucao() {
  BancoDAO dados;
  Professor p;
  TecnicoAdm t;
  int opcao = -1, indice = -1;
  string matricula;

  dados.carregarBanco();

  do {
    opcao = menuPrincipal();
    switch (opcao) {
    case 0:
      cout
        << "╠═══════════════╗" << endl
        << "║ Encerrando... ║" << endl
        << "╚═══════════════╝" << endl;
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
      cout
        << "╔══════════════════════╗" << endl
        << "║ Deletar professor(a) ║" << endl
        << "╠══════════════════════╝" << endl
        << "║ Informe a matrícula do(a) professor(a) a ser deletado(a): ";
      cin >> matricula;
      dados.deletarProfessor(matricula);
      break;
    case 6:
      cout
        << "╔═══════════════════════════════════╗" << endl
        << "║ Deletar técnico(a) administrativo ║" << endl
        << "╠═══════════════════════════════════╝" << endl
        << "║ Informe a matrícula do(a) técnico(a) a ser deletado(a): ";
      cin >> matricula;
      dados.deletarTecnicoAdm(matricula);
      break;
    case 7:
      cout
        << "╔═════════════════════╗" << endl
        << "║ Buscar professor(a) ║" << endl
        << "╠═════════════════════╝" << endl
        << "║ Informe a matrícula do(a) professor(a) que deseja buscar: ";
      cin >> matricula;
      p = dados.buscarProfessor(matricula);
      if (t.getMatricula() == "invalida") {
        cout
          << "╠═════════════════════╗" << endl
          << "║ Matrícula inválida! ║" << endl
          << "╚═════════════════════╝" << endl;
        break;
      }
      cout
        << "╔══════════════════════════╗" << endl
        << "║ Dados do(a) professor(a) ║" << endl
        << "╠══════════════════════════╝" << endl
        << "║ Nome: " << p.getNome() << ", CPF: " << p.getCpf() << ", data de nascimento: " << p.getDataNascimento() << ", genero: " << p.getGenero() << endl
        << "║ Rua: " << p.getEndereco().getRua() << ", endereço: " << p.getEndereco().getNumero() << ", bairro: " << p.getEndereco().getBairro() << ", cidade: " << p.getEndereco().getCidade() << ", CEP: " << p.getEndereco().getCep() << endl
        << "║ Matrícula: " << p.getMatricula() << ", salário: R$ " << p.getSalario() << ", departamento: " << p.getDepartamento() << ", carga horaria: " << p.getCargaHoraria() << ", data de ingresso: " << p.getDataIngresso() << endl
        << "║ Formação: " << p.getFormacaoProfessor() << ", nível: " << p.getNivelProfessor() << endl
        << "╙――――――――――" << endl;
      break;
    case 8:
      cout
        << "╔══════════════════════════════════╗" << endl
        << "║ Buscar técnico(a) administrativo ║" << endl
        << "╠══════════════════════════════════╝" << endl
        << "║ Informe a matrícula do(a) técnico(a) que deseja buscar: ";
      cin >> matricula;
      t = dados.buscarTecnicoAdm(matricula);
      if (t.getMatricula() == "invalida") {
        cout
          << "╠═════════════════════╗" << endl
          << "║ Matrícula inválida! ║" << endl
          << "╚═════════════════════╝" << endl;
        break;
      }
      cout
        << "╔═══════════════════════════════════════╗" << endl
        << "║ Dados do(a) técnico(a) administrativo ║" << endl
        << "╠═══════════════════════════════════════╝" << endl
        << "║ Nome: " << t.getNome() << ", CPF: " << t.getCpf() << ", data de nascimento: " << t.getDataNascimento() << ", genero: " << t.getGenero() << endl
        << "║ Rua: " << t.getEndereco().getRua() << ", endereço: " << t.getEndereco().getNumero() << ", bairro: " << t.getEndereco().getBairro() << ", cidade: " << t.getEndereco().getCidade() << ", CEP: " << t.getEndereco().getCep() << endl
        << "║ Matrícula: " << t.getMatricula() << ", salário: R$ " << t.getSalario() << ", departamento: " << t.getDepartamento() << ", carga horaria: " << t.getCargaHoraria() << ", data de ingresso: " << t.getDataIngresso() << endl
        << "║ Função desempenhada: " << t.getFuncaoDesempenhada() << ", adcional de profutividade: " << t.getAdicionalProdutividade() << endl
        << "╙――――――――――" << endl;
      break;
    default:
      cout
          << "╠═════════════════╗" << endl
          << "║ Opção inválida! ║" << endl
          << "╚═════════════════╝" << endl;
      break;
    }
  } while (opcao != 0);

  dados.salvarBanco();
}