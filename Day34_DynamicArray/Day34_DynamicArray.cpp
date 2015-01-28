// Day34_DynamicArray.cpp : 定义控制台应用程序的入口点。
//


#include "stdafx.h"
#include <stdio.h>
#include "DArray.h"

int _tmain(int argc, _TCHAR* argv[])
{
	//DArray<int> iDArray;
	//iDArray.append(5);
	//iDArray.append(6);
	//iDArray.append(9);
	//DArray<int>::iterator iter=iDArray.begin();
	//for(iter;iter!=iDArray.end();iter++){
	//	printf("%d\n",*iter);
	//}
	//iDArray.setCapacity(10);
	//unsigned int a=iDArray.getCapacity();
	//unsigned int b=iDArray.getSize();
	//iDArray.append(10);
	//iDArray.append(2);
	//iDArray.append(7);
	//for(int i=0;i<10;i++){
	//	iDArray.append(i);
	//}

	DArray<double> iDArray;
	iDArray.append(5.4);
	iDArray.append(6.9);
	iDArray.append(9.23);
	DArray<double>::iterator iter=iDArray.begin();
	for(iter;iter!=iDArray.end();iter++){
		printf("%f\n",*iter);
	}
	iDArray.setCapacity(10);
	unsigned int a=iDArray.getCapacity();
	unsigned int b=iDArray.getSize();
	iDArray.append(10.92);
	iDArray.append(2.2);
	iDArray.append(7.9);
	for(int i=0;i<10;i++){
		iDArray.append(i);
	}
	printf("\n");
	for(int i=0;i<iDArray.getSize();i++){
		iDArray[i]=i;
		printf("%f\n",iDArray[i]);
	}
	return 0;
}

