#include <stdio.h>
#include <string.h>


void GetMatrix(int **value, int *row, int *col ) ;

int main() {
 int *data, m, n ;
 GetMatrix( &data, &m, &n ) ;
 printf("Show all Member in Matrix [%d]x[%d] \n ", m , n) ;
 
 for(int i = 0 ; i < m ; i++){
 	 for(int j = 0 ; j < n ; j++){
 	 	printf("Matrix [%d][%d] == %d\n", i , j , data[i * n + j]);
 	}
 }
 
 return 0 ;
}//end function


void GetMatrix(int **value, int *row, int *col ) {
	int * a ; 
	printf("Please , Enter Row  : ") ;
	scanf("%d", row);
	printf("Please , Enter  Col : ") ;
	scanf("%d", col);
	*value = new int[*row * *col] ;
	
	for(int i = 0 ; i < *row ; i++){
		for(int j = 0 ; j < *col ; j++){
			printf("Set [%d][%d] == ", i , j) ;
			scanf("%d\n", &(*value)[i * (*col) + j]) ;
			
		}
	}	
}
