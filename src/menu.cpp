#include "../include/menu.hpp"
#include <iostream>

using namespace std;



int menuPrincipal() {
  int opcao;
  cout
    << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl
    << "= Sistema de gerenciamento de empregados da empresa IMDCorp =" << endl
    << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
  cout << "++++++++" << endl << "+ Menu +" << endl << "++++++++" << endl;

  cout
    << "1. Cadastrar Professor" << endl
    << "2. Cadastrar Tecnico Administrativo" << endl
    << "3. Listar Professores" << endl
    << "4. Listar Tecnico Administrativo" << endl
    << "5. Deletar Professor" << endl
    << "6. Deletar Tecnico Administrativo" << endl
    << "7. Buscar Professor" << endl
    << "8. Buscar Tecnico Administrativo" << endl
    << "0. Sair" << endl
    << "Selecione a opção desejada: ";
  cin >> opcao;
  if (opcao >= 0 || opcao <= 8) return opcao;
  
  return -1;
}

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
  Professor p;
  Endereco e;
  int bufferInt = 0;
  float bufferFloat = 0.0;
  string bufferString = "";


  cout
    << "+++++++++++++++++++++++++++" << endl
    << "+ Cadatro de professor(a) +" << endl
    << "+++++++++++++++++++++++++++" << endl
    << "Informe os dados a seguir:" << endl;

  cout
    << "\t Legenda: {GRADUACAO = 1, ESPECIALIZACAO = 2, MESTRADO = 3, DOUTORADO = 4}" << endl
    << "\t Formação do p: " << endl;
  cin >> bufferInt;
  p.setFormacaoProfessor(bufferInt);
  cout
    << "\t Legenda: {I = 1, II = 2, III = 3, IV = 4, V = 5, VI = 6, VII = 7, VIII = 8}" << endl
    << "\t Nível do p: " << endl;
  cin >> bufferInt;
  p.setNivelProfessor(bufferInt);

  

  return p;
}