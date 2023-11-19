#include "../include/tecnico_adm.hpp"

using namespace std;

TecnicoAdm::TecnicoAdm(std::string funcaoDesempenhada,
                       string nome, string cpf, string dataNascimento, string genero,
                       string rua, int numero, string bairro, string cidade, string cep,
                       string matricula, float salario, string departamento, int cargaHoraria, string dataIngresso) :
  Pessoa(nome, cpf, dataNascimento, genero, rua, numero, bairro, cidade, cep),
  Funcionario(matricula, salario, departamento, cargaHoraria, dataIngresso) {

  this->funcaoDesempenhada = funcaoDesempenhada;
}

TecnicoAdm::TecnicoAdm(){}

float TecnicoAdm::getAdicionalProdutividade() {
  return this->adicionalProdutividade;
}
std::string TecnicoAdm::getFuncaoDesempenhada() {
  return this->funcaoDesempenhada;
}

void TecnicoAdm::setAdicionalProdutividade(float adicionalProdutividade) {
  this->adicionalProdutividade = adicionalProdutividade;
}
void TecnicoAdm::setFuncaoDesempenhada(string funcaoDesempenhada) {
  this->funcaoDesempenhada = funcaoDesempenhada;
}