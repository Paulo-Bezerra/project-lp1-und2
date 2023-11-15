#include "../include/endereco.hpp"

using namespace std;

// construtor
Endereco::Endereco(string rua, int numero, string bairro, string cidade,
                   string cep) {
  this->rua = rua;
  this->numero = numero;
  this->bairro = bairro;
  this->cidade = cidade;
  this->cep = cep;
}

// declarações dos métodos get
string Endereco::getRua() {
  return this->rua;
}
int Endereco::getNumero() {
  return this->numero;
}
string Endereco::getBairro() {
  return this->bairro;
}
string Endereco::getCidade() {
  return this->cidade;
}
string Endereco::getCep() {
  return this->cep;
}

// declarações dos métodos set
void Endereco::setRua(string rua) {
  this->rua = rua;
}
void Endereco::setNumero(int numero) {
  this->numero = numero;
}
void Endereco::setBairro(string bairro) {
  this->bairro = bairro;
}
void Endereco::setCidade(string cidade) {
  this->cidade = cidade;
}
void Endereco::setCep(string cep) {
  this->cep = cep;
}

