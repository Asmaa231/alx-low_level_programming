#include "lists.h"

/**
*get_dnodeint_at_index - function returns the nth node of
     a dlistint_t linked list.
*@head: pointer address to current head node
*@index:  index of the node will be returned
*Return: node adress at index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
        unsigned int i = 0;

        while (head)
        {
                if (i == index)
                        return (head);
                head = head->next;
                i++;
        }
        return (NULL);

}