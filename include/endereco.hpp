#ifndef ENDERECO_HPP
#define ENDERECO_HPP

#include <iostream>

class Endereco {
private:
  std::string rua;
  int numero;
  std::string bairro;
  std::string cidade;
  std::string cep;

public:
  // declaração do construtor
  Endereco(std::string rua, int numero, std::string bairro, std::string cidade, std::string cep);
  Endereco();
  // declarações dos métodos get
  std::string getRua();
  int getNumero();
  std::string getBairro();
  std::string getCidade();
  std::string getCep();
  // declarações dos métodos set
  void setRua(std::string rua);
  void setNumero(int numero);
  void setBairro(std::string bairro);
  void setCidade(std::string cidade);
  void setCep(std::string cep);
};

#endif