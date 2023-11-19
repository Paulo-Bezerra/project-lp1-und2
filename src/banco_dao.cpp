#include "../include/banco_dao.hpp"
#include "banco_dao.hpp"

using namespace std;

BancoDAO::BancoDAO(){}

void BancoDAO::cadastrarProfessor(Professor professor) {
  professores.push_back(professor);
}

void BancoDAO::cadastrarTecnicoAdm(TecnicoAdm tecnicoAdm) {
  tecnicosAdm.push_back(tecnicoAdm);
}

void BancoDAO::listarProfessores() {
  cout << "professores cadastrados:" << endl << endl;
  cout << "================================================================================" << endl;
  for (Professor p : professores) {
    cout << "nome: " << p.getNome() << ", cpf: " << p.getCpf() << p.getDataNascimento() << p.getGenero() << endl
      << "rua: " << p.getEndereco().getRua() << ", endereço: " << p.getEndereco().getNumero() << ", bairro: " << p.getEndereco().getBairro() << ", cidade: " << p.getEndereco().getCidade() << ", cep: " << p.getEndereco().getCep() << endl
      << "formação: " << p.getFormacaoProfessor() << ", nível: " << p.getNivelProfessor() << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
  }
}

void BancoDAO::listarTecnicosAdm() {
  cout << "tecnicos administrativos cadastrados:" << endl << endl;
  cout << "================================================================================" << endl;
  for (TecnicoAdm t : tecnicosAdm) {
    cout << "nome: " << t.getNome() << ", cpf: " << t.getCpf() << t.getDataNascimento() << t.getGenero() << endl
      << "rua: " << t.getEndereco().getRua() << ", endereço: " << t.getEndereco().getNumero() << ", bairro: " << t.getEndereco().getBairro() << ", cidade: " << t.getEndereco().getCidade() << ", cep: " << t.getEndereco().getCep() << endl
      << "funcao desempenhada: " << t.getFuncaoDesempenhada() << ", adcional de profutividade: " << t.getAdicionalProdutividade() << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
  }
}

void BancoDAO::deletarProfessor(string matricula) {
  int posDelete = buscarProfessor(matricula);
  if(posDelete < 0) {
    cout << "matrícula não encotrada. operação cancelada!";
  } else {
    professores.erase(professores.begin() + posDelete);
  }
}

void BancoDAO::deletarTecnicoAdm(string matricula) {
  int posDelete = buscarTecnicoADM(matricula);
  if(posDelete < 0) {
    cout << "matrícula não encotrada. operação cancelada!";
  } else {
    tecnicosAdm.erase(tecnicosAdm.begin() + posDelete);
  }
}

int BancoDAO::buscarProfessor(string matricula) {
  for (int i = 0; i < professores.size(); i++) {
    if (professores[i].getMatricula() == matricula) { 
      return i;
    }
  }
  return -1;
}

int BancoDAO::buscarTecnicoADM(string matricula) {
  for (int i = 0; i < tecnicosAdm.size(); i++) {
    if (tecnicosAdm[i].getMatricula() == matricula) { 
      return i;
    }
  }
  return -1;
}