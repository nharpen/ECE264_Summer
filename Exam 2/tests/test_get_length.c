#include <stdio.h>
#include <stdlib.h>

#include "acutest.h"
#include "../src/list.h"


void test_empty_list(void)
{
    Node *head = NULL;

    int ret = get_length(head);
    TEST_CHECK(ret == 0);
}

void test_small_list(void)
{
    Node *head = NULL;
    for(int i = 0; i < 5; i++)
    {
        head = alloc_node(i);
    }
int ret = get_length(head);
TEST_CHECK(ret == 5);

Node *ptr = head;
Node *temp = ptr
while (ptr != NULL)
{
    temp = ptr;
    ptr = ptr->next;
    free(temp);

}
free(head);

}




TEST_LIST = {
    {"empty", test_empty_list},
    {"small", test_small_list},
    {NULL, NULL}
}