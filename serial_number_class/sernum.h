#ifndef SERNUM_H
#define SERNUM_H

class Sernum
{
public:
	Sernum();
	~Sernum();

	int getNumber() const;

	static int counter;

private:
	int serialNumber;
};

#endif
