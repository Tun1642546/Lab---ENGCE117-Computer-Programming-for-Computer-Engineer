#include <stdio.h>
#include <string.h>


int *GetSet(int *num ) ;

int main() {
	int *data, num ;
	data = GetSet(&num) ;
		printf("Show Member Set  : { " ) ;
	for(int i = 0 ; i < num ; i++) {
		printf("%d " , data[i]) ;
	}
	printf("}\n") ;
	delete []data ;
	return 0 ;
}//end function

int *GetSet(int *num ){
	int *m ;
	printf("Enter the Mamber : ") ;
	scanf("%d" , num) ;
	m = new int[*num];
	for(int i = 0 ; i < *num ; i++) {
		printf("Enter the Member (%d) value : " , i+1) ;
		scanf("%d" , &(m)[i] ) ;	
	}
	return m ;
}
