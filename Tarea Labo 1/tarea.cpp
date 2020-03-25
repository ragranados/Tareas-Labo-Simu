#include <iostream>
#include "math_tools.h"
#include "display_tools.h"
#include "stdlib.h"

int main(){
	Matrix m,cofactores,trans,respuesta;
	Vector f1, f2, f3;
	
	
	f1.push_back(2);
	f1.push_back(2);
	f1.push_back(3);
	
	m.push_back(f1);
	
	f2.push_back(4);
	f2.push_back(5);
	f2.push_back(6);
	
	m.push_back(f2);
	
	f3.push_back(7);
	f3.push_back(8);
	f3.push_back(9);
	
	m.push_back(f3);
	
	float det = determinant(m);
	
	if(determinant(m) != 0){
		
		cofactors(m,cofactores);
		transpose(cofactores,trans);
		productRealMatrix(1/det,cofactores,respuesta);
		
		showMatrix(respuesta);
		
	}else{
		return EXIT_FAILURE;
	}
	
	return 0;
}


