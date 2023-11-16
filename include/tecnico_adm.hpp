#ifndef TECNICO_ADM_HPP
#define TECNICO_ADM_HPP

#include <iostream>
#include "pessoa.hpp"
#include "funcionario.hpp"

class TecnicoAdm : public Pessoa, public Funcionario{
private:
  float adicionalProdutividade = 0.25;
  std::string funcaoDesempenhada;
public:
TecnicoAdm(std::string funcaoDesempenhada,
            std::string nome, std::string cpf, std::string dataNascimento, std::string genero,
            std::string rua, int numero, std::string bairro, std::string cidade, std::string cep,
            std::string matricula, float salario, std::string departamento, int cargaHoraria, std::string dataIngresso);

  float getAdicionalProdutividade();
  std::string getFuncaoDesempenhada();

  void setAdicionalProdutividade(float adicionalProdutividade);
  void setFuncaoDesempenhada(std::string funcaoDesempenhada);
};

#endif