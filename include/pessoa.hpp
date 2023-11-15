#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <iostream>
#include "../include/endereco.hpp"

class Pessoa {
private:
  std::string nome;
  std::string cpf;
  std::string dataNacimento;
  std::string genero;
  Endereco *endereco;

public:
  Pessoa(std::string, std::string, std::string, std::string, std::string, int, std::string, std::string, std::string);
  std::string getNome();
  std::string getCpf();
  std::string getDataNacimento();
  std::string getGenero();
  Endereco getEndereco();

  void setNome(std::string);
  void setCpf(std::string);
  void setDataNacimento(std::string);
  void setGenero(std::string);
  void setEndereco(std::string, int, std::string, std::string, std::string);
};

#endif