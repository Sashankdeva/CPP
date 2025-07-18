#ifndef QUEUES_CUSTOM_H
#define QUEUES_CUSTOM_H
#include <iostream>
#include <cstdlib>
using namespace std;
struct node{
	int data;
	node*next;
};
node *front=NULL;
node *rear=NULL;
void enq(int val){
	node* newnode = (node*)malloc(sizeof(node));
	if (newnode == NULL) {
        cout<<"FAILED TO ALLOCATE MEMORY "<<endl;
        return;
    }
    newnode->data=val;
    newnode->next=NULL;
    if(rear == NULL)
    	front =rear=newnode;
    else{
	rear->next=newnode;
	rear=newnode;
}
}
void deq()
{
	if(front==NULL){
		return;
	}
	node *temp=front;
	cout<<endl<<"Deleted Element is "<<endl<<front->data << endl;
	front =front->next;
	free(temp);
	if(front==NULL)
		rear=NULL;
}
void display(){
	node*temp=front;
	if(front==NULL){
		return;
	}
	cout<<"Queue Elements : "<<endl;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	
}
#endif
