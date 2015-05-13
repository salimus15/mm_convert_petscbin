#ifndef MM_IN_MATRIX_H
#define MM_IN_MATRIX_H

#include <stdio.h>
#include <stdlib.h>
#include "mmio.h"

#endif

struct MatrixStruct{
	int M;
	int N;
	double ** Matrice;
};

typedef struct MatrixStruct MatrixStruct;


MatrixStruct mm_in_matrix(int argc, char *argv[]);
