#pragma once
template <typename type>
class pppp{
	type *pT;
	unsigned m_uiLen;
	unsigned m_uiCap;
public:
	pppp();
	pppp(unsigned int);
	//setSize(unsigned int);
	unsigned int getSize();
	void setCapacity(unsigned int);
	unsigned int getCapacity();
	void append(type);
	typedef type* iterator;
	type* begin();
	type* end();
	type* next(type*);
};
