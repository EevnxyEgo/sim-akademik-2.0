#include <iostream>
#include "include/matkul.hpp"


matkul::matkul(std::string namamatkul, std::string namadosen, int sks)
		: namamatkul(namamatkul), namadosen(namadosen), sks(sks)
{
}

void matkul::setNamamatkul(std::string namamatkul)
{
	this->namamatkul = namamatkul;
}

std::string matkul::getNamamatkul() 
{
	return this->namamatkul;
}

void matkul::setNamadosen(std::string namadosen)
{
	this->namadosen = namadosen;
}

std::string matkul::getNamadosen()
{
	return this->namadosen;
}

void matkul::setSks(int sks)
{
	this->sks = sks;
}

int matkul::getSks()
{
	return this->sks;
}
