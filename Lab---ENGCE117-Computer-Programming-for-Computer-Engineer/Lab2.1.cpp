#include <stdio.h>
#include <string.h>

void reverse( char str1[], char str2[], int j ) ;

int main() {
 int j ;
 char text[ 50 ] = "I Love You" ;
 char out[ 50 ] ;
 j = 9 ;
 printf("show input before reverse : %s \n" , text) ;
 reverse( text, out , j) ;
 printf("show input after reverse : %s \n" , out) ;
 char text2[ 50 ] = "Hello World" ;
 char out2[ 50 ] ;
 j = 10 ;
 printf("show input before reverse : %s \n" , text2) ;
 reverse( text2, out2, j ) ;
 printf("show input after reverse : %s\n " , out2) ;
}//end function

void reverse( char str1[], char str2[] , int j ) { 
 for(int i = 0 ; i < j ; i++){
 	    char re = str1[i];
        str1[i] = str1[j];
        str1[j] = re;
        j--;       
 }


 strcpy(str2 , str1) ;
}

