#pragma once
template <typename type>
class DArray{
	type *pBegin;
	unsigned m_uiLen;
	unsigned m_uiCap;
public:
	DArray();
	DArray(unsigned int);
	//setSize(unsigned int);
	unsigned int getSize();
	void setCapacity(unsigned int);
	unsigned int getCapacity();
	void append(type);
	typedef type* iterator;
	type* begin();
	type* end();
	type& operator[](unsigned int);
	//type* next(type*);
};


template<typename type>
DArray<type>::DArray(){
	m_uiLen=0;
	m_uiCap=0;		
}

template<typename type>
DArray<type>::DArray(unsigned int uiLen=0){
	m_uiLen=uiLen;
	m_ulCap=uiLen;
	pBegin=new type[uiLen];
}
template<typename type>
unsigned int DArray<type>::getSize(){
	return m_uiLen;
}

template<typename type>
unsigned int DArray<type>::getCapacity(){
	return m_uiCap;
}

template<typename type>
void DArray<type>::setCapacity(unsigned int uiCap){
	m_uiCap=uiCap;
	unsigned int uilen=m_uiLen;
	type *pPre=pBegin;
	type *pPreBegin=pBegin;	
	pBegin=new type[uiCap];	
	type *pEnd=pBegin+m_uiLen;	
	type *pT=pBegin;
	for(pT;pT!=pEnd;pT++/*=(DArray<type>*)0->next(pT)*/){
		*pT=*pPre;
		pPre++;
	}
	delete pPreBegin;
}

template<typename type>
type* DArray<type>::begin(){
	return pBegin;
}

template<typename type>
type* DArray<type>::end(){
	return pBegin+m_uiLen;
}

//template<typename type>
//type* DArray<type>::next(type *p){
//	return ++p;
//}

template<typename type>
void DArray<type>::append(type ty){
	if(m_uiCap>=m_uiLen+1){		
		*(pBegin+m_uiLen)=ty;
		m_uiLen++;
	}
	else{
		if(m_uiCap==0){
			pBegin=new type;
			m_uiCap=1;
			m_uiLen=1;
			*pBegin=ty;
		}
		else{
			m_uiCap*=2;				
			//m_uiCap=uiCap;
			//unsigned int uilen=m_uiLen;
			type *pPre=pBegin;
			type *pPreBegin=pBegin;
			pBegin=new type[m_uiCap];
			type *pEnd=pBegin+m_uiLen;
			type *pT=pBegin;
			for(pT;pT!=pEnd;pT++/*=(DArray<type>*)0->next(pT)*/){
				*pT=*pPre;
				pPre++;
			}
			delete pPreBegin;
			*(pBegin+m_uiLen)=ty;
			m_uiLen++;
		}

	}
}

template<typename type>
type& DArray<type>::operator[](unsigned int iindex){
	return pBegin[iindex];
}




