#include <stdio.h>
#include <stdlib.h>

#include "list.h"

Node *alloc_node(int value)
{
    Node *node = malloc(sizeof(Node));
    if(node == NULL)
    {
        fprintf(stderr, "[ERROR]: malloc() failed...\n");
        exit(NULL);
    }
    node->value = value;
    node->next = NULL;

    return node;
}




int get_length(Node *head)
{
    int count = 1;
    Node *ptr = head;
    while((ptr->next) != head)
        {
            count++;
            ptr = ptr->next;
        }

    return count;
}




void print_list(Node *head)
{
    Node *ptr = head;
    int size = get_length(head);
    for(int i = 0; i < size; i++)
        {
            printf("%d\n", ptr->value);
            ptr = ptr-next;
        }
    return;
}


Node *push_node(Node *head, Node *newNode)
{

    Node *ptr = head->prev;
    newNode->next = head;
    newNode->prev = ptr;

    return newNode;
}


Node *pop_node(Node *head)
{
    if(head == NULL)
        {
            return head;
        }

    Node *temp = head->prev;
    Node *node = head->next;
    node->prev = temp;
    Node *ptr = head;
    free(ptr);
    

    return node;

}

Node *search_node(Node *head, int value)
{
    if(head == NULL)
    {
        return head;
    }
    Node *ptr = head;
    int size = get_length(head);


    for(int i = 0; i < size; i++)
    {
        if((ptr->value) == value)
        {
            return ptr;
        }
        ptr = ptr->next;
    }


    return NULL;
}

Node *remove_nth_node(Node *head, int n)
{
    Node *ptr = head;
    int size = get_length(head);
    if(n >= size)
    {
        return head;
    }


    if(n == 0)
    {
        head = ptr->next;
        free(ptr);
    }
    else
    {
        for(int i = 0; i < size; i++)
        {
            if((ptr->value) == n)
            {
                (ptr->prev)->next = ptr-next;
                free(ptr);
            }
            ptr = ptr->next;
        }
    }
    return head;
}

