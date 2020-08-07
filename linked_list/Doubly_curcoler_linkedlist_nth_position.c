#include<stdio.h>
#include<stdlib.h>
typedef struct node Node;
struct node{
int data;
Node* next;
Node* pre;

};
Node* head;

void node(int value){
Node* new_node = (Node*)malloc(sizeof(Node));
new_node->data = value;
new_node->next = head;
if(head == NULL){
    head = new_node;
}
else{
    Node* temp = head;
    Node* temp2 = head;
    while(temp2->next!=head){
     temp2 = temp2->next;
    }
    temp2->next = new_node;
    new_node->pre = temp2;
    new_node->next = head;
    head->pre = new_node;
    head  = new_node;
}

}

void Print(){
Node* temp = head;
while(temp->next!=head){

  printf("%d\n\n",temp->data);
  temp = temp->next;
}
printf("%d\n\n",temp->data);
printf("\n");

}

int main(){

int value ;
head = NULL;
node(54);
node(67);
node(98);
node(34);
node(99);

Print();



}
