#include <stdlib.h>
#include <stdio.h>
#include <time.h> 

typedef struct node {
    char day;
    struct node *next;
} Node;

void insert(Node *n, char key) {
    Node *temp = n;
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->day = key;
    newNode->next = NULL;
    
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    temp->next = newNode;
}

int main() {
    srand(time(NULL)); 
    
    char c_days[4] = {'M', 'T', 'W', 'F'}; 
    Node W15[14]; 

    for (int i = 0; i < 14; i++) {
        W15[i].next = NULL; 
        
        for (int j = 0; j < 2; j++) {
            char random_day = c_days[rand() % 4]; 
            insert(&W15[i], random_day);
        }
    }
    
    
    for (int i = 0; i < 14; i++) {
        Node *temp= &W15[i];
        printf("on %d week: \n",i);
        while(temp){
            printf("%c ",temp->day);
            temp=temp->next;
        }
        printf("\n");
    }
    
    return 0;
}
