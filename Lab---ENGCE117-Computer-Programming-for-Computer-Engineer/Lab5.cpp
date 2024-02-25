#include <stdio.h>
#include <string.h>

struct studentNode {
 char name[20] ;
 int age ;
 char sex ;
 float gpa ;
 struct studentNode *next ;
} ;

void ShowAll( struct studentNode *walk ) ;
struct studentNode *AddNode(struct studentNode **walk , char n[] , int a , char s , float g);
void InsNode(struct studentNode **walk , char n[] , int a , char s , float g);
void DelNode(struct studentNode **walk);


int main() {
 struct studentNode *start, *now ;
 start = NULL ;
 now = AddNode(&start, "one", 6, 'M', 3.11) ; 
 ShowAll( start ) ;
 now = AddNode(&start, "two", 8, 'F', 3.22) ; 
 ShowAll( start ) ;
 InsNode( &now, "three", 10, 'M', 3.33) ;
 ShowAll( start ) ;
 InsNode( &now, "four", 12, 'F', 3.44) ; 
 ShowAll( start ) ;
 DelNode( &now ) ; ShowAll( start ) ;
 return 0 ;
}//end function


void ShowAll( struct studentNode *walk ) {
 while( walk != NULL ) {
  printf( "%s ", walk->name ) ;
  walk = walk->next ;
 }//end while
 printf( "\n___________________________________\n" ) ;
}//end function


struct studentNode *AddNode(struct studentNode **walk , char n[] , int a , char s , float g){
	while(*walk != NULL ) {
		walk = &(*walk)->next;
	}
	*walk = new struct studentNode ;
	strcpy( (*walk)->name, n );
	(*walk)->age = a ;
	(*walk)->sex = s ;
	(*walk)->gpa = g ;	
	(*walk)->next = NULL ;
	return *walk;
}//end function


void InsNode(struct studentNode **walk , char n[] , int a , char s , float g){
	struct studentNode *temp = new struct studentNode ;
	strcpy( temp->name, n );
	temp->age = a ;
	temp->sex = s ;
   	temp->gpa = g ;	
	temp->next = (*walk)->next ;
	(*walk)->next = temp;
	
}//end function


void DelNode(struct studentNode **walk){
	struct studentNode *temp = (*walk)->next ;
    
    if ( temp != NULL ) {
        (*walk)->next = temp->next ;
        delete temp ;
}
}