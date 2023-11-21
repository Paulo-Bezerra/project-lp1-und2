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

  Professor buscarProfessor(std::string matricula);

  TecnicoAdm buscarTecnicoAdm(std::string matricula);

  void carregarBanco();

  void salvarBanco();

protected:
  int indiceProfessor(std::string matricula);
  int indiceTecnicoAdm(std::string matricula);
  void carregarProfessores();
  void carregarTecnicos();
  void salvarProfessores();
  void salvarTecnicos();
};



#endif


