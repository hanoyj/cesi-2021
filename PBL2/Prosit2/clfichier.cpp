#include "clfichier.h"
#include <iostream>
#include <fstream>

using namespace CryptoComponents;
using namespace std;

string CLFichier::read(string path) 
{
	string f;
	string x;
	ifstream flux(path);
	while (getline(flux, f))
	{
		x.append(f);
	}
	flux.close();
	return x;
}

void CLFichier::write(string text, string path)
{
	ofstream flux(path);
	flux << text;
	flux.close();
}

void CLFichier::writeBIN(string text, const char* path, int buffL)
{
	FILE* file;
	const char* t = &text[0];
	int i;
	file = fopen(path, "w+b");
	for (i = 0; i < buffL; i++)
	{
		fprintf(file, "%c", t[i]);
	}
	fclose(file);
}

string CLFichier::readBIN(const char* path, int buffL)
{
	FILE* file;
	int i = 0;
	string s;
	string c;
	file = fopen(path, "r+b");
	fseek(file, i, SEEK_SET);
	for (i = 0; i < buffL;i++)
	{
		c = (char)fgetc(file);
		s.append(c);
	}
	fclose(file);
	return s;
}
