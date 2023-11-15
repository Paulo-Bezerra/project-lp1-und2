#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>

class Funcionario {
private:
private:
  std::string matricula;
  float salario;
  std::string departamento;
  int cargaHoraria;
  std::string dataIngresso;
public:
  Funcionario(std::string, float, std::string, int, std::string);
  
  std::string getMatricula();
  float getSalario();
  std::string getDepartamento();
  int getCargaHoraria();
  std::string getDataIngresso();

  void setMatricula(std::string);
  void setSalario(float);
  void setDepartamento(std::string);
  void setCargaHoraria(int);
  void setDataIngresso(std::string);
};

#endif