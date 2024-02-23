#include <stdio.h>
#include <string.h>

struct student {
 char name[ 20 ] ;
 int age ;
 char sex[10] ;
 float gpa ;
} ;

void GetStudent( struct student child[][ 10 ], int *room ) ;

int main() {
 struct student children[ 20 ][ 10 ] ;
 int group ;
 printf("Enter Numbers of Room : ");
 scanf("%d" , &group);
 GetStudent( children, &group ) ;
 for(int i = 1 ; i <= group ; i++){
 	 printf("Room : %d\n", i);
		for(int j = 0 ; j < 10 ; j++){
			printf("Number %d Student name : %s \n", j+1 ,children[i][j].name);
			printf("Age : %d \n",children[i][j].age);	 
			printf("Sex : %s \n",children[i][j].sex);	 
			printf("GPA : %.2f \n",children[i][j].gpa);	 	 
		}
	}
 return 0 ;
}//end function

void GetStudent( struct student child[][ 10 ], int *room ){
	for(int i = 1 ; i <= *room ; i++){
		printf("Room : %d ----------------------------------\n", i);
		for(int j = 0 ; j < 10 ; j++){
			 printf("Enter Student name : ");
 			 scanf("%s" , &child[i][j].name);
 			 printf("Enter Student Age : ");
 			 scanf("%d" , &child[i][j].age);
 			 printf("Enter Student Sex : ");
 			 scanf("%s" , &child[i][j].sex);
 			 printf("Enter Student GPA : ");
 			 scanf("%f" , &child[i][j].gpa);
		}
	}
}