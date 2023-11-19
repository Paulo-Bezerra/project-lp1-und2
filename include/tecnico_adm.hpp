#ifndef TECNICO_ADM_HPP
#define TECNICO_ADM_HPP

#include <iostream>
#include "pessoa.hpp"
#include "funcionario.hpp"

class TecnicoAdm : public Pessoa, public Funcionario {
private:
  float adicionalProdutividade = 0.25;
  std::string funcaoDesempenhada;
public:
  TecnicoAdm(Pessoa pessoa, Funcionario funcionario, std::string funcaoDesempenhada);
  TecnicoAdm();
  float getAdicionalProdutividade();
  std::string getFuncaoDesempenhada();

  void setAdicionalProdutividade(float adicionalProdutividade);
  void setFuncaoDesempenhada(std::string funcaoDesempenhada);
};

#endif