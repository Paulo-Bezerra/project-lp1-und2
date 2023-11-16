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

  void cadastrarProfessor(int formacaoProfessor, int nivelProfessor,
                          std::string nome, std::string cpf, std::string dataNascimento, std::string genero,
                          std::string rua, int numero, std::string bairro, std::string cidade, std::string cep,
                          std::string matricula, float salario, std::string departamento, int cargaHoraria, std::string dataIngresso);

  void cadastrarTecnicoAdm(std::string funcaoDesempenhada,
                           std::string nome, std::string cpf, std::string dataNascimento, std::string genero,
                           std::string rua, int numero, std::string bairro, std::string cidade, std::string cep,
                           std::string matricula, float salario, std::string departamento, int cargaHoraria, std::string dataIngresso);

  void listarProfessores();

  void listarTecnicosAdm();

  void deletarProfessor(std::string matricula);

  void deletarTecnicoAdm(std::string matricula);

  int buscarProfessor(std::string matricula);

  int buscarTecnicoADM(std::string matricula);
};



#endif


