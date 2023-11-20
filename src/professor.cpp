#include "../include/professor.hpp"

using namespace std;

Professor::Professor(Pessoa pessoa, Funcionario funcionario, int formacaoProfessor, int nivelProfessor) {
  // herança de pessoa
  this->setNome(pessoa.getNome());
  this->setCpf(pessoa.getCpf());
  this->setDataNascimento(pessoa.getDataNascimento());
  this->setGenero(pessoa.getGenero());
  // endereço
  this->setEndereco(pessoa.getEndereco().getRua(), pessoa.getEndereco().getNumero(), pessoa.getEndereco().getBairro(),
                    pessoa.getEndereco().getCidade(), pessoa.getEndereco().getCep());
  // herança de funcionario
  this->setMatricula(funcionario.getMatricula());
  this->setSalario(funcionario.getSalario());
  this->setDepartamento(funcionario.getDepartamento());
  this->setCargaHoraria(funcionario.getCargaHoraria());
  this->setDataIngresso(funcionario.getDataIngresso());
  // atribuição ao professor(a)
  if (formacaoProfessor == 1) {
    this->formacaoProfessor = GRADUACAO;
  } else if (formacaoProfessor == 2) {
    this->formacaoProfessor = ESPECIALIZACAO;
  } else if (formacaoProfessor == 3) {
    this->formacaoProfessor = MESTRADO;
  } else if (formacaoProfessor == 4) {
    this->formacaoProfessor = DOUTORADO;
  }

  if (nivelProfessor == 1) {
    this->nivelProfessor = I;
  } else if (nivelProfessor == 2) {
    this->nivelProfessor = II;
  } else if (nivelProfessor == 3) {
    this->nivelProfessor = III;
  } else if (nivelProfessor == 4) {
    this->nivelProfessor = IV;
  } else if (nivelProfessor == 5) {
    this->nivelProfessor = V;
  } else if (nivelProfessor == 6) {
    this->nivelProfessor = VI;
  } else if (nivelProfessor == 7) {
    this->nivelProfessor = VII;
  } else if (nivelProfessor == 8) {
    this->nivelProfessor = VIII;
  }
}
Professor::Professor() {}

int Professor::getFormacaoProfessor() {
  return this->formacaoProfessor;
}
int Professor::getNivelProfessor() {
  return this->nivelProfessor;
}

void Professor::setFormacaoProfessor(int formacaoProfessor) {
  if (formacaoProfessor == 1) {
    this->formacaoProfessor = GRADUACAO;
  } else if (formacaoProfessor == 2) {
    this->formacaoProfessor = ESPECIALIZACAO;
  } else if (formacaoProfessor == 3) {
    this->formacaoProfessor = MESTRADO;
  } else if (formacaoProfessor == 4) {
    this->formacaoProfessor = DOUTORADO;
  }
}
void Professor::setNivelProfessor(int nivelProfessor) {
  if (nivelProfessor == 1) {
    this->nivelProfessor = I;
  } else if (nivelProfessor == 2) {
    this->nivelProfessor = II;
  } else if (nivelProfessor == 3) {
    this->nivelProfessor = III;
  } else if (nivelProfessor == 4) {
    this->nivelProfessor = IV;
  } else if (nivelProfessor == 5) {
    this->nivelProfessor = V;
  } else if (nivelProfessor == 6) {
    this->nivelProfessor = VI;
  } else if (nivelProfessor == 7) {
    this->nivelProfessor = VII;
  } else if (nivelProfessor == 8) {
    this->nivelProfessor = VIII;
  }
}
