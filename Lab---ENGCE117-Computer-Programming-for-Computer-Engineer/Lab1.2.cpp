#include <stdio.h>
#include <string.h>


void GetSet( int *data[] , int *num ) ;

int main() {
	int *data, num ;
	GetSet( &data , &num) ;
		printf("Show Member Set  : { " ) ;
	for(int i = 0 ; i < num ; i++) {
		printf("%d " , data[i]) ;
	}
	printf("}\n") ;
	return 0 ;
}//end function

void GetSet( int *data[] , int *num ){
	printf("Enter the Mamber : ") ;
	scanf("%d" , num) ;
	*data = new int[*num];
	for(int i = 0 ; i < *num ; i++) {
		printf("Enter the Member (%d) vuale : " , i+1) ;
		scanf("%d" , &(*data)[i] ) ;	
	}
}
