#pragma once

// Une structure est une classe minimaliste qui ne contient que des champs "simples"
typedef struct nombre
{
	int n;
	nombre* suivant;
} N;

// Classe de liste chainee
class ListeChainee
{
public:
	void afficher(N* liste);
};