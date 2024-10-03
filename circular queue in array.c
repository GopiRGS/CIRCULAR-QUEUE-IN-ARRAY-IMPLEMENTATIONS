#include<stdio.h>
#define max 50
int queue[max];
int front = -1;
int rear = -1;
void enqueue(int val){
    if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=val;

    }
    else if((rear+1)%max==front){
            printf("over flow....\n");

    }
    else{
        rear = (rear+1)%max;
        queue[rear]=val;
    }
printf("Done..\n");
 }
void dequeue(){
    if(front==-1 && rear ==-1){
        printf("under flow..\n");
    }
    else if(front==0 && rear==0){
            front = rear = -1;

    }
    else{
        front = (front+1)%max;
    }
    printf("Done..\n");
}
void display(){
    int i = front;
    if(front == -1 && rear == -1){
        printf("empty...\n");
    }
    else{
            printf("the elements are ..\n");
        while(1){

            printf("%d\n",queue[i]);
            if(i==rear)
                break;
            i=(i+1)%max;
        }
    }
}
int main(){
    enqueue(34);
    dequeue();
    display();
    enqueue(576);
    enqueue(687);
    display();
}
