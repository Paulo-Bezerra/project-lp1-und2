#include "../include/cadastro.hpp"
#include <iostream>

using namespace std;


Endereco formularioCadastrarEndereco() {
  Endereco e;
  int bufferInt = 0;
  string bufferString = "";

  cout << "\t Rua: " << endl;
  cin >> bufferString;
  e.setRua(bufferString);
  cout << "\t Número: " << endl;
  cin >> bufferInt;
  e.setNumero(bufferInt);
  cout << "\t Bairro: " << endl;
  cin >> bufferString;
  e.setBairro(bufferString);
  cout << "\t Cidade: " << endl;
  cin >> bufferString;
  e.setCidade(bufferString);
  cout << "\t CEP: " << endl;
  cin >> bufferString;
  e.setCep(bufferString);

  return e;
}


Pessoa formularioCadastrarPessoa() {
  Pessoa p;
  Endereco e;
  int bufferInt = 0;
  string bufferString = "";

  cout << "\t Nome: ";
  cin >> bufferString;
  p.setNome(bufferString);
  cout << "\t CPF: " << endl;
  cin >> bufferString;
  p.setCpf(bufferString);
  cout << "\t Data Nascimento: " << endl;
  cin >> bufferString;
  p.setDataNascimento(bufferString);
  cout << "\t Genero: " << endl;
  cin >> bufferString;
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

  cout << "\t Matrícula: " << endl;
  cin >> bufferString;
  f.setMatricula(bufferString);
  cout << "\t Salário: " << endl;
  cin >> bufferFloat;
  f.setSalario(bufferFloat);
  cout << "\t Departamento: " << endl;
  cin >> bufferString;
  f.setDepartamento(bufferString);
  cout << "\t Carga horária: " << endl;
  cin >> bufferInt;
  f.setCargaHoraria(bufferInt);
  cout << "\t Data de ingresso: " << endl;
  cin >> bufferString;
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