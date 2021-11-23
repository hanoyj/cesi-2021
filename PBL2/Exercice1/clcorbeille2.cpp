#include "clcorbeille2.h"

void CLcorbeille2::ecrire(string text, string path)
{
	f_out.open(path, std::ofstream::out);
	f_out << text;
	f_out.close();
}

string CLcorbeille2::lire(string path)
{
	string line;
	this->message.clear();
	f_in.open(path);
	while (getline(f_in, line))
	{
		this->message.append(line);
	}
	f_in.close();
	return this->message;
}