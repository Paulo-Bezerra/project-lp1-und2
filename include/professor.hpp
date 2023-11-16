#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP

#include <iostream>
#include "pessoa.hpp"
#include "funcionario.hpp"

class Professor : public Pessoa, public Funcionario {
private:
  enum Formacao {
    GRADUACAO = 1, ESPECIALIZACAO = 2, MESTRADO = 3, DOUTORADO = 4
  };
  enum Nivel {
    I = 1, II = 2, III = 3, IV = 4, V = 5, VI = 6, VII = 7, VIII = 8
  };
  Formacao formacaoProfessor = GRADUACAO;
  Nivel nivelProfessor = I;
public:
  Professor(int formacaoProfessor, int nivelProfessor,
            std::string nome, std::string cpf, std::string dataNascimento, std::string genero,
            std::string rua, int numero, std::string bairro, std::string cidade, std::string cep,
            std::string matricula, float salario, std::string departamento, int cargaHoraria, std::string dataIngresso);

  int getFormacaoProfessor();
  int getNivelProfessor();

  void getFormacaoProfessor(int formacaoProfessor);
  void setNivelProfessor(int nivelProfessor);
};


#endif
