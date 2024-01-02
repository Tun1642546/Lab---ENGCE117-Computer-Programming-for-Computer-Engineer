#include <stdio.h>
#include <string.h>

void explode( char str1[], char splitter, char str2[][10], int *count ) ;

int main() {
 char out[ 20 ][ 10 ] ;
 int num ;
 explode( "I/Love/You", '/' , out , &num) ;
 for(int i = 0 ; i < 3 ; i++){
 printf("str[%d] = %s\n" , i , out[i]) ;
}
printf("count = %d" , num) ;
 return 0 ;
}//end function

void explode( char str1[], char splitter, char str2[][10], int *count ) {
	int k;
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 10 ; j++){
			if(str1[k] != splitter){
				str2[i][j] = str1[k] ;
				k++;	
			}else if(str1[k] == splitter){
				if(i == 0){
							k = 2;
				}else if(i == 1){
							k = 7;
				}
				str2[i][j] = NULL ;
				*count += 1 ;
				break;
			
			}
			
		}
	}
	}
