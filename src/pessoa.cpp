#include "../include/pessoa.hpp"

using namespace std;

// construtor
Pessoa::Pessoa(string nome, string cpf, string dataNascimento, string genero, Endereco endereco) {
  this->nome = nome;
  this->cpf = cpf;
  this->dataNascimento = dataNascimento;
  this->genero = genero;
  this->endereco.setRua(endereco.getRua());
  this->endereco.setNumero(endereco.getNumero());
  this->endereco.setBairro(endereco.getBairro());
  this->endereco.setCidade(endereco.getCidade());
  this->endereco.setCep(endereco.getCep());
}

Pessoa::Pessoa(){}

string Pessoa::getNome() {
  return this->nome;
}
string Pessoa::getCpf() {
  return this->cpf;
}
string Pessoa::getDataNascimento() {
  return this->dataNascimento;
}
string Pessoa::getGenero() {
  return this->genero;
}
Endereco Pessoa::getEndereco() {
  return this->endereco;
}

void Pessoa::setNome(string nome) {
  this->nome = nome;
}
void Pessoa::setCpf(string cpf) {
  this->cpf = cpf;
}
void Pessoa::setDataNascimento(string dataNacimento) {
  this->dataNascimento = dataNacimento;
}
void Pessoa::setGenero(string genero) {
  this->genero = genero;
}
void Pessoa::setEndereco(string rua, int numero, string bairro, string cidade, string cep) {
  this->endereco.setRua(rua);
  this->endereco.setNumero(numero);
  this->endereco.setBairro(bairro);
  this->endereco.setCidade(cidade);
  this->endereco.setCep(cep);
}
