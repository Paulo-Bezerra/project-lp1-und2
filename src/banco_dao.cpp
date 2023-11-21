#include "../include/banco_dao.hpp"
#include <iostream>
#include <fstream>

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
  if (posDelete == -1) {
    cout
      << "╠══════════════════════════════════════════════╗" << endl
      << "║ Matrícula não encotrada. Operação cancelada! ║" << endl
      << "╚══════════════════════════════════════════════╝" << endl;
  } else {
    professores.erase(professores.begin() + posDelete);
    cout
      << "╠═══════════════════════╗" << endl
      << "║ Excluído com sucesso! ║" << endl
      << "╚═══════════════════════╝" << endl;
  }
}

void BancoDAO::deletarTecnicoAdm(string matricula) {
  int posDelete = indiceTecnicoAdm(matricula);
  if (posDelete == -1) {
    cout
      << "╠══════════════════════════════════════════════╗" << endl
      << "║ Matrícula não encotrada. Operação cancelada! ║" << endl
      << "╚══════════════════════════════════════════════╝" << endl;
  } else {
    tecnicosAdm.erase(tecnicosAdm.begin() + posDelete);
    cout
      << "╠═══════════════════════╗" << endl
      << "║ Excluído com sucesso! ║" << endl
      << "╚═══════════════════════╝" << endl;
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

void BancoDAO::carregarBanco() {
  carregarProfessores();
  carregarTecnicos();
}


void BancoDAO::carregarProfessores() {
  Professor p;
  Endereco e;
  fstream arq_prof;
  string buffer, path = "db/professores.txt";
  arq_prof.open(path, ios::in);

  while (getline(arq_prof, buffer)) {
    p.setNome(buffer);
    getline(arq_prof, buffer);
    p.setCpf(buffer);
    getline(arq_prof, buffer);
    p.setDataNascimento(buffer);
    getline(arq_prof, buffer);
    p.setGenero(buffer);

    getline(arq_prof, buffer);
    e.setRua(buffer);
    getline(arq_prof, buffer);
    e.setNumero(stoi(buffer));
    getline(arq_prof, buffer);
    e.setBairro(buffer);
    getline(arq_prof, buffer);
    e.setCidade(buffer);
    getline(arq_prof, buffer);
    e.setCep(buffer);
    p.setEndereco(e);

    getline(arq_prof, buffer);
    p.setMatricula(buffer);
    getline(arq_prof, buffer);
    p.setSalario(stoi(buffer));
    getline(arq_prof, buffer);
    p.setDepartamento(buffer);
    getline(arq_prof, buffer);
    p.setCargaHoraria(stoi(buffer));
    getline(arq_prof, buffer);
    p.setDataIngresso(buffer);

    getline(arq_prof, buffer);
    p.setFormacaoProfessor(stoi(buffer));
    getline(arq_prof, buffer);
    p.setNivelProfessor(stoi(buffer));
    professores.push_back(p);
  }
  arq_prof.close();
}

void BancoDAO::carregarTecnicos() {
  TecnicoAdm t;
  Endereco e;
  fstream arq_tecn;
  string buffer, path = "db/tecnicos_adm.txt";
  arq_tecn.open(path, ios::in);

  while (getline(arq_tecn, buffer)) {
    t.setNome(buffer);
    getline(arq_tecn, buffer);
    t.setCpf(buffer);
    getline(arq_tecn, buffer);
    t.setDataNascimento(buffer);
    getline(arq_tecn, buffer);
    t.setGenero(buffer);

    getline(arq_tecn, buffer);
    e.setRua(buffer);
    getline(arq_tecn, buffer);
    e.setNumero(stoi(buffer));
    getline(arq_tecn, buffer);
    e.setBairro(buffer);
    getline(arq_tecn, buffer);
    e.setCidade(buffer);
    getline(arq_tecn, buffer);
    e.setCep(buffer);
    t.setEndereco(e);

    getline(arq_tecn, buffer);
    t.setMatricula(buffer);
    getline(arq_tecn, buffer);
    t.setSalario(stoi(buffer));
    getline(arq_tecn, buffer);
    t.setDepartamento(buffer);
    getline(arq_tecn, buffer);
    t.setCargaHoraria(stoi(buffer));
    getline(arq_tecn, buffer);
    t.setDataIngresso(buffer);

    getline(arq_tecn, buffer);
    t.setFuncaoDesempenhada(buffer);
    tecnicosAdm.push_back(t);
  }
  arq_tecn.close();
}

void BancoDAO::salvarBanco() {
  salvarProfessores();
  salvarTecnicos();
}

void BancoDAO::salvarProfessores() {
  fstream arq_prof;
  string path = "db/professores.txt";
  arq_prof.open(path, ios::out);
  for (Professor p : professores) {
    arq_prof
      << p.getNome() << endl
      << p.getCpf() << endl
      << p.getDataNascimento() << endl
      << p.getGenero() << endl
      << p.getEndereco().getRua() << endl
      << p.getEndereco().getNumero() << endl
      << p.getEndereco().getBairro() << endl
      << p.getEndereco().getCidade() << endl
      << p.getEndereco().getCep() << endl
      << p.getMatricula() << endl
      << p.getSalario() << endl
      << p.getDepartamento() << endl
      << p.getCargaHoraria() << endl
      << p.getDataIngresso() << endl
      << p.getFormacaoProfessor() << endl
      << p.getNivelProfessor() << endl;
  }
  arq_prof.close();
}

void BancoDAO::salvarTecnicos() {
  fstream arq_tecn;
  string path = "db/professores.txt";
  arq_tecn.open(path, ios::out);
  for (TecnicoAdm t : tecnicosAdm) {
    arq_tecn
      << t.getNome() << endl
      << t.getCpf() << endl
      << t.getDataNascimento() << endl
      << t.getGenero() << endl
      << t.getEndereco().getRua() << endl
      << t.getEndereco().getNumero() << endl
      << t.getEndereco().getBairro() << endl
      << t.getEndereco().getCidade() << endl
      << t.getEndereco().getCep() << endl
      << t.getMatricula() << endl
      << t.getSalario() << endl
      << t.getDepartamento() << endl
      << t.getCargaHoraria() << endl
      << t.getDataIngresso() << endl
      << t.getFuncaoDesempenhada() << endl;
  }
  arq_tecn.close();
}
