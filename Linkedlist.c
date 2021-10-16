#include<stdlib.h>
#include<stdio.h>

struct Node{
    char data;
    struct Node* next;
};

struct Node* head; // This is a global variable, can be aaccessed anywhere


// Here we are inserting the node at the begininng
void Insert(int x){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    // Here we are basically creating a temp node 
    // and malloc is used to create empty space

    //(*temp).data = x;
    temp->data = x;
    temp->next = head;
    //if (head != NULL) temp-> next = head;
    head = temp;

}
void Print(){
    struct Node* temp = head; // we modify temp not head
    while (temp != NULL){
        
        printf(" %d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    head = NULL; // This will create the empty list

    printf("How many numbers?\n");
    int n, i , x;
    scanf("%d", &n);
    for (i = 0; i<n; i++){
        printf("Enter the number: \n");
        scanf("%d", &x);
        Insert(x);
        Print(x);
    }
    

    return 0;
}

