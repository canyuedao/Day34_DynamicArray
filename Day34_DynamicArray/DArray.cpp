#include "stdafx.h"
//#include "DArray.h"
//
//template<typename type>
//DArray<type>::DArray(){
//	m_uiLen=0;
//	m_uiCap=0;		
//}
//
//template<typename type>
//DArray<type>::DArray(unsigned int uiLen=0){
//	m_uiLen=uiLen;
//	m_ulCap=uiLen;
//	pT=new type[uiLen];
//}
//template<typename type>
//unsigned int DArray<type>::getSize(){
//	return m_uiLen;
//}
//
//template<typename type>
//unsigned int DArray<type>::getCapacity(){
//	return m_uiCap;
//}
//
//template<typename type>
//void setCapacity(unsigned int uiCap){
//	m_uiCap=uiCap;
//	unsigned int uilen=m_uiLen;
//	type *pPre=pT;
//	type *pEnd=pT+m_uiLen;
//	pT=new type[uiCap];
//	for(pT;pT!=pEnd;pT++/*=(DArray<type>*)0->next(pT)*/){
//		*pT=*pPre;
//		pPre++;
//	}
//	delete pPre;
//}
//
//template<typename type>
//type* DArray<type>::begin(){
//	return pT;
//}
//
//template<typename type>
//type* DArray<type>::end(){
//	return pT+m_uiLen;
//}
//
////template<typename type>
////type* DArray<type>::next(type *p){
////	return ++p;
////}
//
//template<typename type>
//void DArray<type>::append(type ty){
//	if(m_uiCap>=m_uiLen+1){
//		m_uiLen++;
//		*(pT+m_uiLen*1)=ty;
//	}
//	else{
//		if(m_uiCap==0){
//			pT=new type;
//			m_uiCap=1;
//			m_uiLen=1;
//			*pT=ty;
//		}
//		else{
//			m_uiCap*=2;			
//			*(pT+m_uiLen*1)=ty;
//			m_uiLen++;
//		}
//
//	}
//}