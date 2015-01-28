#include "pppp.h"

template<typename type>
pppp<type>::pppp(){
	m_uiLen=0;
	m_ulCap=0;		
}

template<typename type>
DArray<type>::DArray(unsigned int uiLen=0){
	m_uiLen=uiLen;
	m_ulCap=uiLen;
	pT=new type[uiLen];
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
void setCapacity(unsigned int uiCap){
	m_uiCap=uiCap;
	unsigned int uilen=m_uiLen;
	type *pPre=pT;
	pT=new type[uiCap];
	for(pT;pT!=(DArray<type>*)0->next(pT)){
		*pT=*pPre;
		pPre=pPre+sizeof(type);
	}
	delete pPre;
}

template<typename type>
type* DArray<type>::begin(){
	return pT;
}

template<typename type>
type* DArray<type>::end(){
	return pT+m_uiLen*sizeof(type);
}

template<typename type>
type* DArray<type>::next(type *p){
	return p+sizeof(type);
}

template<typename type>
void DArray<type>::append(type ty){
	if(m_uiCap>=m_uiLen+sizeof(type)){
		m_uiLen++;
		*(pT+m_uiLen*sizeof(type))=ty;
	}
	else{
		if(m_uiCap==0){
			pT=new type;
			m_uiCap=1;
			m_uiLen=1;
			*pT=ty;
		}
		else{
			m_uiCap*=2;			
			*(pT+m_uiLen*sizeof(type))=ty;
			m_uiLen++;
		}

	}
}