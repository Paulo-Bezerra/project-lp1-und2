#include "../include/professor.hpp"

using namespace std;

Professor::Professor(int formacaoProfessor, int nivelProfessor,
                     string nome, string cpf, string dataNascimento, string genero,
                     string rua, int numero, string bairro, string cidade, string cep,
                     string matricula, float salario, string departamento, int cargaHoraria, string dataIngresso) :
  Pessoa(nome, cpf, dataNascimento, genero, rua, numero, bairro, cidade, cep),
  Funcionario(matricula, salario, departamento, cargaHoraria, dataIngresso) {

  Professor::getFormacaoProfessor(formacaoProfessor);

  Professor::setNivelProfessor(nivelProfessor);
}


int Professor::getFormacaoProfessor() {
  return this->formacaoProfessor;
}
int Professor::getNivelProfessor() {
  return this->nivelProfessor;
}

void Professor::getFormacaoProfessor(int formacaoProfessor) {
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
