#include <stdio.h>
#include <string.h>


int GetSet(int **data , int *num ) ;

int main() {
	int *data, num ;
	num = GetSet(&data) ;
		printf("Show Member Set  : { " ) ;
	for(int i = 0 ; i < *data ; i++) {
		printf("%d " , num) ;
	}
	printf("}\n") ;
	delete []data ;
	return 0 ;
}//end function

int GetSet(int **data ){
	int n ;
	int *m ;
	printf("Enter the Mamber : ") ;
	scanf("%d" , &data) ;
	m = new int[**data] ;
	for(int i = 0 ; i < **data ; i++) {
		printf("Enter the Member (%d) value : " , i+1) ;
		scanf("%d" , &(m)[i] ) ;	
	}
	return *m ;
}
