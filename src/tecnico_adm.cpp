#include "../include/tecnico_adm.hpp"

using namespace std;

TecnicoAdm::TecnicoAdm(Pessoa pessoa, Funcionario funcionario, std::string funcaoDesempenhada) {
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
  // atribuição ao tecnico(a) administrativo
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