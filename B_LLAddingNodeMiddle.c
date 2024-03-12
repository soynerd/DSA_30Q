// adding node in between.

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
    
};
int main(){
    struct node s1, s2, s3, s4, s5, before, after;
    s1.data=10;
    s2.data=20;
    s3.data=30;
    s4.data=40;
    s5.data=50;
    s1.link=&s2;
    s2.link=&s3;
    s3.link=&s4;
    s4.link=&s5;
    s5.link=NULL;

    //struct node *p= (struct node*) malloc (sizeof(struct node));
    
    struct node *q=&s1;
    printf("%d\n",q->data);
    while((*q).link !=NULL){
        q=(*q).link;
        printf("%d\n", q->data);
    }

    printf("After Adding\n");
    before.data=25;
    s2.link=&before;
    before.link=&s3;
    after.data=35;
    s3.link=&after;
    after.link=&s4;

    q=&s1;
    printf("%d\n",q->data);
    while((*q).link !=NULL){
        q=(*q).link;
        printf("%d\n", q->data);
    }
}