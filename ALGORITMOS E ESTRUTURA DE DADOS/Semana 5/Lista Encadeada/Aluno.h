#pragma once

#include <iostream>

using namespace std;

class Aluno
{
public:
	unsigned chave{};
	string nome;

	Aluno();
	Aluno(unsigned chave, const string& nome);
	~Aluno();
};

