#include <stdio.h>
#include <string.h>

char* reverse( char str1[] , int j) ;

int main() {
 char text[ 50 ] = "I Love You" ;
 char *out ;
 int j = 9;
 out = reverse(text , j) ;
 printf("show : ") ;
 printf("%s" , out) ;
}//end function

char* reverse( char str1[] , int j) {
 for(int i = 0 ; i < j ; i++){
	  	char re = str1[i];
        str1[i] = str1[j];
        str1[j] = re; 	       
        j--;
}
 return str1 ;
}
