#include <stdio.h>
#include <string.h>


struct node {
	int data ;
	struct node * next ;
};

struct node *AddNode ( struct node **walk , int data) ;
void ShowAll(struct node **walk);
struct node *Insert(struct node **walk , int data , struct node **begin);
void DelNode(struct node **walk , int key); // HOW TO USE : &START GIVE TO WALK AND DATA SUCH AS 1, 4, 9 GIVE TO KEY FOR DELETE ; 
void Swap (struct node **walk , int x , int y);


int main(){
	struct node *start , *now ;
	start = NULL ;
	int x , y ;
	now = AddNode(&start , 1);
	now = AddNode(&start , 4);
	now = AddNode(&start , 9);
	now = AddNode(&start , 12);
	now = AddNode(&start , 15);
	printf("before swap\n");
	ShowAll(&start);
	printf("first Node to Swap : ");
	scanf("%d" , &x );
	printf("second Node to Swap : ");
	scanf("%d" , &y );
	Swap(&start,x,y);
	printf("after swap\n");
	ShowAll(&start);
	
}


struct node *AddNode ( struct node **walk , int data){
	while(*walk != NULL){
		walk = &(*walk)->next; 
	}
	*walk = new struct node;
	(*walk)->data = data;
	(*walk)->next = NULL;
	return *walk;
}


void ShowAll(struct node **walk){
	while(*walk != NULL){
		printf("%d " ,(*walk)->data );
		walk = &(*walk)->next; 
	}
	printf("\n" );
}


struct node *Insert(struct node **walk , int data , struct node **begin){
	struct node *temp;
	if(*walk != NULL){
			temp = (*walk)->next;
		(*walk)->next = new struct node;
		(*walk)->next->data = data;
		(*walk)->next->next = temp;
		temp = NULL;
	}else {
		(*begin)->next = new struct node;
		(*begin)->next->data = data;
		(*begin)->next->next = *walk;
	}	
}

void DelNode(struct node **walk , int key) { 
    
    struct node *temp = *walk, *prev; 
  
     
    if (temp != NULL && temp->data == key) { 
        *walk = temp->next; 
        delete temp; 
        return; 
    } 
   
    while (temp != NULL && temp->data != key) { 
        prev = temp; 
        temp = temp->next; 
    } 
   
    if (temp == NULL) {
    	 return;	
	} 

    prev->next = temp->next; 
  
    delete temp; 
} 

void Swap (struct node **walk , int x , int y){
	struct node *temp = *walk;
	int n = 0;
	while (temp != NULL){
		n++;
		temp = temp->next;
	}
	if(n == 1){
		printf("!!!!NOT SWAP IN LINKED LIST!!!!\n");
		printf("!!!!BECAUSE LINKED LIST HAVE 1!!!!\n");
	}
	if(x < 1 || x > n || y < 1 || y > n){
		printf("!!!!NOT DATA IN LINKED LIST!!!!\n");
		return;
	}
	
	struct node *node1 = *walk;
	struct node *node2 = *walk;
	
	for(int i = 1; i < x; i++){
		node1 = node1->next;
	}
	
	for(int i = 1; i < y; i++){
		node2 = node2->next;
	}
	
	int val = node1->data;
  	node1->data = node2->data;
 	node2->data = val;
}
