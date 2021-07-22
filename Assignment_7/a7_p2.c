/*
CH-230-A
a7_p2.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

struct list {
// This is a node

    char data ; 
    // Actual information in the node

    struct list *next ; 
    struct list *point ;
    // Pointers used as cursor to traverse the list
    
};

struct list *push_front (struct list *my_list, char letter) {
// Function to insert node at the start

// letter is passed as 'data' as defined in the struct
// the data is the character to be placed in the list

    struct list *head ;
    // This is a cursor pointing to the very first element
    // Line is used to initialize the pointer

    head = (struct list *) malloc (sizeof(struct list)) ;

    if (head == NULL) {
        printf("Error allocating memory\n");
        return my_list ;
    }
    // Dynamically allocating memory for the node
    head -> data = letter; 
    head -> point = NULL;

    if(my_list == NULL){
        head -> next = NULL;
    }else{
        head -> next = my_list;
        my_list -> point = head;
    }
    
    // Cursor pointing to data of struct node, which is the letter

     

    // Cursor pointing to the address of the first node 
    // Which is the first element
    // Which is also the only element of the list hitherto

    return head ;
    // returns this new letter as the first element
}

void display (struct list *my_list) {
// Function to print list

    while (my_list != NULL) {

        printf("%c ", my_list -> data);
        // Retrieving the information 'data' stored in the node

        my_list = my_list -> next ;
        // Updating the pointer to the next in the list
    }

    printf("\n");
    // New line after every printing
    
}

void dispose (struct list *my_list) {

    struct list *nextelem;
    // New pointer declared

    while (my_list != NULL) {

        nextelem = my_list -> next ;
        // Pointer points to the address of first node

        free(my_list);
        // Releasing memory of that node

        my_list = nextelem;
        // Pointer to the next element of the list in while loop
    }
    
// We need a new pointer for this function
// Because we need to free the memory for each node
// Once we do that, that node won't exist anymore

}

struct list *delete (struct list *my_list, char letter) {
// Function to remove all occurences of a character from the list

    struct list *cursor = my_list;
    struct list *check;

    if (my_list == NULL){
        return my_list;
    }
    
    //go throught the list
    while (cursor != NULL){
        //check if there is a matching character
        if(cursor -> data == letter){
            check = cursor;
            //check if the character is at the beginning of the list
            if(check == my_list){
                //check if there is another element after it
                if(cursor -> next != NULL){
                    cursor = cursor ->next;
                    my_list = my_list -> next;
                    my_list ->point = NULL;
                    free(check);
                }else{
                    free(check);
                    my_list = NULL;
                    return my_list;
                }
            }else if(cursor -> next != NULL){
                cursor->point->next = cursor->next;
                cursor->next->point = cursor->point;
                cursor=cursor->next;
                free(check);
            }else{
                // the matching character is at the end
                cursor->point->next = NULL;
                cursor = cursor->next;
                free(check);
            }
        }else{
            cursor = cursor->next;
        }
    }
    return my_list;
}

void reverse (struct list *my_list) {

    struct list * temp;
    struct list * current;

    // Initializing two new cursors

    temp = NULL;
    current = my_list ;

    // Swap next and point for all nodes of linked list
    while((*current).next != NULL) {
        current = (*current).next;
    }
    while (current != NULL) {

        printf("%c ", (*current).data);
        current = (*current).point;
    }
    printf("\n");
    // Before changing head, check for cases like empty
    // lists and lists with only one node

    if (temp == NULL) {

        my_list = temp -> point ;

    }
}
    
int main () {

    struct list *my_list = NULL;
    // Initializing struct list which is set to empty

    char c ;
    // Initializing character to be placed in the list

    int m ;
    // Initializing integer to be used in the switch function

    while (1) { // while loop to take in input until terminated

        scanf("%d", &m); 
        // Scanning integer to be placed as cases in switch function
        getchar();
        switch (m) {
            
            case 1 :
                
                scanf("%c", &c);
                // Reading input into the list
                // Each input is an individual node

                my_list = push_front(my_list, c);
                // Calling push_front function to add 
                // Element to the head of the list
                // Passing arguments: the list and the letter
        
            break;

            case 2 :

               
                scanf("%c", &c);
                //printf("%c", my_list->data);
                my_list = delete(my_list ,c);

            break;

            case 3 :

                display(my_list);
                // Calling display function to print list

            break ;


            case 4 :

                reverse(my_list);
                // Calling display function to reverse list

            
            break ;

            case 5 :

                dispose(my_list);
                // Calling function to free memory

                return 0 ;
                // To actually terminate the list
            
            break ;
            
            
        }

        
    
    }
    return 0 ;
}