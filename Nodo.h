#pragma once
#include <iostream>
class Nodo
{
public:
	int info;
	Nodo* sig; // clase auntoreferenciada
	inline Nodo() { 
		info = NULL;
		sig = NULL; }// contructor//  {sig=NULL;}
	Nodo(int dato)
	{
		info = dato;
		sig = NULL;
	}
};
