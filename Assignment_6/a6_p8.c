/*
CH-230-A
a6_p8.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

struct list {
    int data;
    struct list *next;
};

struct list *top;

struct list* pushFront(struct list *myList, int value) {
    struct list *add;
    add = (struct list*)malloc(sizeof(struct list));
    if (add == NULL) {
        printf("Memory Allocation Error\n");
        return top;
    }

    add -> data = value;
    add -> next = myList;
return add;
}

struct list* goEnd(struct list *myList, int value) {
    struct list *p1, *p2;
    p1 = myList;
    p2 = (struct list*)malloc(sizeof(struct list));
    if (p2 == NULL) {
        printf("Memory Allocation Error\n");
    }

    p2 -> data = value ;
    p2 -> next = NULL;
    if (myList == NULL) {
        return p2;
    }
    while (p1 -> next != NULL) {
        p1 = p2 -> next;
    }

    p1 -> next = p2;
    return myList;
}   

void dis(struct list* myList) {

    struct list *p ;
    for (p = myList; p ; p= p -> next) {
        printf("%d", p -> data);
    }
    printf("\n");
}

void releaseList(struct list* myList) {
    struct list* n;
    while (myList != NULL) {
        n = myList -> next;
        free(myList);
        myList = n;
    }
}

struct list* rem(struct list* top) {
    struct list* delete;
    if (top == NULL) {
        // do nothing
    } else {
        delete = top;
        top = top -> next;
        free(delete);
    }
}

int main () {

    char c;
    while(1) {
        scanf("%c", &c);
    }

    switch(c) {
        case ('b'): {
            int x;
            scanf("%d", &x);
            getchar();
            top= pushFront(top, x);
            break;        
    }
        case ('a'): {
            int x;
            scanf("%d", &x);
            getchar();
            top = goEnd(top, x);
            break;
        }

        case ('r'): {
            top = rem(top);
            break;
        }

        case('p'): {
            dis(top);
            break;
        }

        case('q'): {
            releaseList(top);
            break;
        }
    }
    return 0 ;
}    

