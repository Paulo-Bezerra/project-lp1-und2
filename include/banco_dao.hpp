#ifndef BANCO_DAO_HPP
#define BANCO_DAO_HPP

#include "professor.hpp"
#include "tecnico_adm.hpp"
#include <vector>

class BancoDAO {
private:
  std::vector<Professor> professores;
  std::vector<TecnicoAdm> tecnicosAdm;

public:
  BancoDAO();

  void cadastrarProfessor(Professor professor);

  void cadastrarTecnicoAdm(TecnicoAdm tecnicoAdm);

  void listarProfessores();

  void listarTecnicosAdm();

  void deletarProfessor(std::string matricula);

  void deletarTecnicoAdm(std::string matricula);

  int buscarProfessor(std::string matricula);

  int buscarTecnicoADM(std::string matricula);
};



#endif


