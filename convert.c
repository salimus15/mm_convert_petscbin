#include "mm_in_matrix.h"


int main( int argc, char * argv[]){
	
	MatrixStruct Mat;
	int i,j; 
	
	Mat = mm_in_matrix(argc, argv);
	for( i = 0; i < Mat.M; ++i){
		for( j = 0; j < Mat.N; ++j){
			fprintf(stdout, "%d %d %20.19g\n", i,j, Mat.Matrice[i][j]);	
		}

	}




  return 0;
}



