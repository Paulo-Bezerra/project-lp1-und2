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
  Professor(Pessoa pessoa, Funcionario funcionario, int formacaoProfessor, int nivelProfessor);
  Professor();

  int getFormacaoProfessor();
  int getNivelProfessor();

  void setFormacaoProfessor(int formacaoProfessor);
  void setNivelProfessor(int nivelProfessor);
};


#endif
