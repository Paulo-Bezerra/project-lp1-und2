#include "../include/cadastro.hpp"
#include <iostream>

using namespace std;


Endereco formularioCadastrarEndereco() {
  Endereco e;
  int bufferInt = 0;
  string bufferString = "";

  cout << "\t Rua: ";
  getline(cin, bufferString);
  e.setRua(bufferString);
  cout << "\t Número: ";
  cin >> bufferInt;
  e.setNumero(bufferInt);
  cout << "\t Bairro: ";
  getline(cin, bufferString);
  getline(cin, bufferString);
  e.setBairro(bufferString);
  cout << "\t Cidade: ";
  getline(cin, bufferString);
  e.setCidade(bufferString);
  cout << "\t CEP: ";
  getline(cin, bufferString);
  e.setCep(bufferString);

  return e;
}


Pessoa formularioCadastrarPessoa() {
  Pessoa p;
  Endereco e;
  int bufferInt = 0;
  string bufferString = "";

  cout << "\t Nome: ";
  getline(cin, bufferString);
  getline(cin, bufferString);
  p.setNome(bufferString);
  cout << "\t CPF: ";
  getline(cin, bufferString);
  p.setCpf(bufferString);
  cout << "\t Data de nascimento: ";
  getline(cin, bufferString);
  p.setDataNascimento(bufferString);
  cout << "\t Gênero: ";
  getline(cin, bufferString);
  p.setGenero(bufferString);
  e = formularioCadastrarEndereco();
  p.setEndereco(e.getRua(), e.getNumero(), e.getBairro(), e.getCidade(), e.getCep());

  return p;
}

Funcionario formularioCadastrarFuncionario() {
  Funcionario f;
  int bufferInt = 0;
  float bufferFloat = 0.0;
  string bufferString = "";

  cout << "\t Matrícula: ";
  getline(cin, bufferString);
  f.setMatricula(bufferString);
  cout << "\t Salário: ";
  cin >> bufferFloat;
  f.setSalario(bufferFloat);
  cout << "\t Departamento: ";
  getline(cin, bufferString);
  getline(cin, bufferString);
  f.setDepartamento(bufferString);
  cout << "\t Carga horária: ";
  cin >> bufferInt;
  f.setCargaHoraria(bufferInt);
  cout << "\t Data de ingresso: ";
  getline(cin, bufferString);
  getline(cin, bufferString);
  f.setDataIngresso(bufferString);

  return f;
}

Professor formularioCadastrarProfessor() {
  Pessoa pessoa;
  Funcionario funcionario;
  int formacaoProfessor, nivelProfessor;

  cout
    << "+++++++++++++++++++++++++++" << endl
    << "+ Cadatro de professor(a) +" << endl
    << "+++++++++++++++++++++++++++" << endl
    << "Informe os dados a seguir:" << endl;
  pessoa = formularioCadastrarPessoa();
  funcionario = formularioCadastrarFuncionario();
  cout
    << "\t Legenda: {GRADUACAO = 1, ESPECIALIZACAO = 2, MESTRADO = 3, DOUTORADO = 4}" << endl
    << "\t Formação do professor(a): ";
  cin >> formacaoProfessor;
  cout
    << "\t Legenda: {I = 1, II = 2, III = 3, IV = 4, V = 5, VI = 6, VII = 7, VIII = 8}" << endl
    << "\t Nível do professor(a): ";
  cin >> nivelProfessor;

  Professor professor(pessoa, funcionario, formacaoProfessor, nivelProfessor);

  return professor;
}

TecnicoAdm formularioCadastrarTecnicoAdm() {
  Pessoa pessoa;
  Funcionario funcionario;
  string funcaoDesempenhada;

  cout
    << "+++++++++++++++++++++++++++" << endl
    << "+ Cadatro de professor(a) +" << endl
    << "+++++++++++++++++++++++++++" << endl
    << "Informe os dados a seguir:" << endl;
  pessoa = formularioCadastrarPessoa();
  funcionario = formularioCadastrarFuncionario();
  cout << "\t Função desempenhada: ";
  cin >> funcaoDesempenhada;

  TecnicoAdm tecnicoAdm(pessoa, funcionario, funcaoDesempenhada);

  return tecnicoAdm;
}