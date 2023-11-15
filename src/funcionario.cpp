#include "../include/funcionario.hpp"

using namespace std;
  
Funcionario::Funcionario(string matricula, float salario, string departamento, int cargaHoraria, string dataIngresso) {
}

string Funcionario::getMatricula() {
  return this->matricula;
}
float Funcionario::getSalario() {
  return this->salario;
}
string Funcionario::getDepartamento() {
  return this->departamento;
}
int Funcionario::getCargaHoraria() {
  return this->cargaHoraria;
}
string Funcionario::getDataIngresso() {
  return this->dataIngresso;
}

void Funcionario::setMatricula(string matricula) {
  this->matricula = matricula;
}
void Funcionario::setSalario(float salario) {
  this->salario = salario;
}
void Funcionario::setDepartamento(string departamento) {
  this->departamento = departamento;
}
void Funcionario::setCargaHoraria(int cargaHoraria) {
  this->cargaHoraria = cargaHoraria;
}
void Funcionario::setDataIngresso(string dataIngresso) {
  this->dataIngresso = dataIngresso;
}
