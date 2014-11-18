#include <stdio.h>
#include <stdlib.h>

struct Node{
       int data;
       struct Node* next;
       };

int main(int argc, char *argv[])
{
    /*int arraySize = 5;
    int array[] = {3,1,2,5,4};*/
    struct Node *list = malloc(sizeof(struct Node));
    list->next = NULL;
    struct Node* temp = list->next;
    temp = malloc(sizeof(struct Node));
    temp->next = NULL;
    temp->data = 3;
    temp = temp->next;
    temp = malloc(sizeof(struct Node));
    temp->next = NULL;
    temp->data = 1;
    temp = temp->next;
    temp = malloc(sizeof(struct Node));
    temp->next = NULL;
    temp->data = 2;
    temp = temp->next;
    temp = malloc(sizeof(struct Node));
    temp->next = NULL;
    temp->data = 5;
    temp = temp->next;
    temp = malloc(sizeof(struct Node));
    temp->next = NULL;
    temp->data = 4;
    
    struct Node *p = list->next;
    while (p->next != NULL){
          printf("%d ",p->data);
          p=p->next;
          }  
    
    system("PAUSE");	
    return 0;
}

struct Node * MergeSort (struct Node *list, int listSize){
       if (list->next != NULL){
                      struct Node *left = list;
                      struct Node *right = list;
                      int i;
                      for (i=0;i<listSize/2<i++) right = right->next;
                      struct Node *temp = right->next;
                      right=NULL;
                      right=temp;
                      MergeSort(right);
                      MergeSort(left);
                      
                      }
       else return list;
       }
