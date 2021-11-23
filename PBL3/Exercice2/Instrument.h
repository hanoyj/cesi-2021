#pragma once

/*
* Ma classe instrument est une interface (d'ou le I en préfixe)
* Elle contient une methode virtuelle pure permettant de jouer un son car on considere ici que tout instrument doit jouer un son
* Toute classe derivant (ou implementant cette interface) doit obligatoirement redefinir la methode virtuelle pure
*/
class IInstrument
{
public:
	// methode virtuelle pure
	virtual void jouer() = 0;
};

/*
* La classe piano implémente l'interface IInstrument, elle doit jouer un son
*/
class Piano : public IInstrument
{
public:
	// Constructeur par defaut (pas forcement utile ici, je n'ai pas de membre de classe)
	Piano();

	// La methode virtuelle dérivée, spécifique à la classe Piano
	void jouer();
};

/*
* La classe saxo implémente l'interface IInstrument, elle doit jouer un son
*/
class Saxo : public IInstrument
{
public:
	// Constructeur par defaut (pas forcement utile ici, je n'ai pas de membre de classe)
	Saxo();

	// La methode virtuelle dérivée, spécifique à la classe Saxo
	void jouer();
};