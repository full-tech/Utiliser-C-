//television.cpp
#include <Television.h>
//Définition du constructeur
Television::Television(string marque)
{
	this->marque = marque;
	this->estAllumee = false;
}
void Television::Allumer()
{
	this->estAllumee = true;
}
void Television::Eteindre()
{
	this->estAllumee = false;
}
void Television::SetVolume(int vol);
{
	this->volume = vol;
}
void Television::ChangeDeChaine(int c)
{
	this->chaine = c;
}
int Television:: GetVolume()
{
	return this->volume;
}