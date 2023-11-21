#include "../include/banco_dao.hpp"

using namespace std;

BancoDAO::BancoDAO() {}

void BancoDAO::cadastrarProfessor(Professor professor) {
  professores.push_back(professor);
  
  cout
    << "╠═════════════════════════════════════════╗" << endl
    << "║ Professor(a) cadastrado(a) com sucesso! ║" << endl
    << "╚═════════════════════════════════════════╝" << endl;
}

void BancoDAO::cadastrarTecnicoAdm(TecnicoAdm tecnicoAdm) {
  tecnicosAdm.push_back(tecnicoAdm);
  
  cout
    << "╠══════════════════════════════════════════════════════╗" << endl
    << "║ Técnico(a) administrativo cadastrado(a) com sucesso! ║" << endl
    << "╚══════════════════════════════════════════════════════╝" << endl;
}

void BancoDAO::listarProfessores() {
  cout
    << "╔═════════════════════════╗" << endl
    << "║ Professores cadastrados ║" << endl
    << "╠═════════════════════════╝" << endl;
  for (Professor p : professores) {
    cout
      << "║ Nome: " << p.getNome() << ", CPF: " << p.getCpf() << ", data de nascimento: " << p.getDataNascimento() << ", genero: " << p.getGenero() << endl
      << "║ Rua: " << p.getEndereco().getRua() << ", endereço: " << p.getEndereco().getNumero() << ", bairro: " << p.getEndereco().getBairro() << ", cidade: " << p.getEndereco().getCidade() << ", CEP: " << p.getEndereco().getCep() << endl
      << "║ Matrícula: " << p.getMatricula() << ", salário: " << p.getSalario() << ", departamento: " << p.getDepartamento() << ", carga horaria: " << p.getCargaHoraria() << ", data de ingresso: " << p.getDataIngresso() << endl
      << "║ Formação: " << p.getFormacaoProfessor() << ", nível: " << p.getNivelProfessor() << endl
      << "╙――――――――――" << endl;
  }
}

void BancoDAO::listarTecnicosAdm() {
  cout
    << "╔═════════════════════════════════════════╗" << endl
    << "║ Técnicos(as) administrativo cadastrados ║" << endl
    << "╠═════════════════════════════════════════╝" << endl;
  for (TecnicoAdm t : tecnicosAdm) {
    cout
      << "║ Nome: " << t.getNome() << ", CPF: " << t.getCpf() << ", data de nascimento: " << t.getDataNascimento() << ", genero: " << t.getGenero() << endl
      << "║ Rua: " << t.getEndereco().getRua() << ", endereço: " << t.getEndereco().getNumero() << ", bairro: " << t.getEndereco().getBairro() << ", cidade: " << t.getEndereco().getCidade() << ", CEP: " << t.getEndereco().getCep() << endl
      << "║ Matrícula: " << t.getMatricula() << ", salário: " << t.getSalario() << ", departamento: " << t.getDepartamento() << ", carga horaria: " << t.getCargaHoraria() << ", data de ingresso: " << t.getDataIngresso() << endl
      << "║ Função desempenhada: " << t.getFuncaoDesempenhada() << ", adcional de profutividade: " << t.getAdicionalProdutividade() << endl
      << "╙――――――――――" << endl;
  }
}

void BancoDAO::deletarProfessor(string matricula) {
  int posDelete = indiceProfessor(matricula);
  if (posDelete < 0) {
    cout << "matrícula não encotrada. operação cancelada!";
  } else {
    professores.erase(professores.begin() + posDelete);
  }
}

void BancoDAO::deletarTecnicoAdm(string matricula) {
  int posDelete = indiceTecnicoAdm(matricula);
  if (posDelete < 0) {
    cout << "matrícula não encotrada. operação cancelada!";
  } else {
    tecnicosAdm.erase(tecnicosAdm.begin() + posDelete);
  }
}

int BancoDAO::indiceProfessor(string matricula) {
  for (int i = 0; i < professores.size(); i++) {
    if (professores[i].getMatricula() == matricula) {
      return i;
    }
  }
  return -1;
}

int BancoDAO::indiceTecnicoAdm(string matricula) {
  for (int i = 0; i < tecnicosAdm.size(); i++) {
    if (tecnicosAdm[i].getMatricula() == matricula) {
      return i;
    }
  }
  return -1;
}

Professor BancoDAO::buscarProfessor(string matricula) {
  for (int i = 0; i < professores.size(); i++) {
    if (professores[i].getMatricula() == matricula) {
      return professores[i];
    }
  }
  Professor p;
  p.setMatricula("invalida");
  return p;
}


TecnicoAdm BancoDAO::buscarTecnicoAdm(string matricula) {
  for (int i = 0; i < tecnicosAdm.size(); i++) {
    if (tecnicosAdm[i].getMatricula() == matricula) {
      return tecnicosAdm[i];
    }
  }
  TecnicoAdm t;
  t.setMatricula("invalida");
  return t;
}
