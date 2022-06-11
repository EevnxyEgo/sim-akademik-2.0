#ifndef __MATKUL_HPP__
#define __MATKUL_HPP__

#include <iostream>

class matkul {
private:
	
	std::string namamatkul;
    std::string namadosen;
    int sks;

public:
	matkul(std::string namamatkul, std::string namadosen, int sks);

	void setNamamatkul(std::string namamatkul);
	std::string getNamamatkul();

	void setNamadosen(std::string namadosen);
	std::string getNamadosen();

	void setSks(int sks);
	int getSks();
};


#endif