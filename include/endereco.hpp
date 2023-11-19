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
  Endereco(std::string, int, std::string, std::string, std::string);
  Endereco();
  // declarações dos métodos get
  std::string getRua();
  int getNumero();
  std::string getBairro();
  std::string getCidade();
  std::string getCep();
  // declarações dos métodos set
  void setRua(std::string);
  void setNumero(int);
  void setBairro(std::string);
  void setCidade(std::string);
  void setCep(std::string);
};

#endif