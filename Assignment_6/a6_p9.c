/*
CH-230-A
a6_p9.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

struct list {
    int data;
    struct list *next;
};

int k = 0;

struct list* goEnd(struct list* myList, int val) {

    struct list *cursor, *nl;
    cursor= myList;

    nl=(struct list *) malloc(sizeof(struct list));
    if (nl==NULL) {

        printf("Memory Allocation Failed\n");

        return myList;
    }

    nl->data=val;
    nl->next=NULL;
    //pushing values

    if(myList==NULL) {
        return nl;
    }

    while(cursor->next!=NULL) {
        
        cursor=cursor->next;
    }

    cursor->next=nl;
    k++;

    return myList;
}

struct list* pushup(struct list* myList, int val)
{
    struct list *nl;
    nl = (struct list*)malloc(sizeof(struct list));

    if(nl==NULL)
    {
        printf("Error allocating memory\n");
        return myList;
    }

    nl->data=val;
    nl->next=myList;
    k++;
    return nl;
}

void releaseList(struct list* myList)
{
    struct list *nl;
    /*copy struct so that
    it won't clash the original list*/
    while(myList!=NULL)
    {
        nl=myList->next;
        free(myList);
        myList=nl;
    }
    k=0;
}

void dis(struct list* myList) {
    while (myList != NULL)
    {
        
        printf("%d ", myList ->data);
        myList = myList->next;
    }
    printf("\n");
}

struct list* rem(struct list *myList)
{
    struct list *nl;
    nl = myList;
    if(nl==NULL)
    {
        return myList;
    }
    nl = nl->next;
    myList=nl;
    k--;
    return myList;
    free(nl);

}

struct list* insert_node(struct list *myList,
                         int n,int val)
{

    if (n<0 || n>k)
    {
        printf("Invalid position!\n");
        return myList;
    }
    else
    {
        struct list *cursor,*nl,*next;
        nl =(struct list *)malloc(sizeof(struct list));
     
        cursor = myList;
    
        if (nl==NULL)
        {
            printf("Error allocating memory\n");
            return myList;
        }
        if (n==0)
        {
            nl->data = val;
            nl->next = myList;
        }
 
        else
        {
            while(n>1)
            {

                cursor = cursor->next;
                n--;
            }

            next = cursor->next;
            nl->data = val;
            nl->next = next;
            cursor->next = nl;
        }
        k++;
        return myList;
    }
}

struct list* reverse(struct list *myList)
{
 
    if (myList==NULL)
        return myList;
    else
    {
        struct list *cursor,*next,*prev;

        cursor = myList;
        
        prev = NULL;
        while (cursor != NULL)
        {
            next = cursor->next;
            cursor->next = prev;
            prev = cursor;
            cursor = next;
        }
        myList = prev;
        return myList;
    }
}
int main() {

    struct list * myList = NULL;
    char c;
    int i,n;
    
    while(1)
    {
        scanf("%c",&c);

        switch(c)
        {
            case 'b':
                scanf("%d",&i);
                myList = pushup(myList,i);
                break;
            case 'a':
                scanf("%d",&i);
                myList = goEnd(myList,i);
                break;
            case 'r':
                myList= rem(myList);
                break;
            case 'p':
                dis(myList);
                break;
            case 'q':
                releaseList(myList);
                return 0;
                break;
            case 'i':
                scanf("%d",&n);
                scanf("%d",&i);
                myList= insert_node(myList,n,i);
                break;
            case 'R':
                myList=reverse(myList);
                break;
        }
        getchar();
    }
}