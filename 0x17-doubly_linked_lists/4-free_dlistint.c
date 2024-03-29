#include "lists.h"
/**
 *free_dlistint - function frees a dlistint_t list.
 *@head: pointer address to current head node
 *Return: void
 */
void free_dlistint(dlistint_t *head)
{
        dlistint_t *node;

        while (head)
        {
                node = head;
                head = head->next;
                free (node);
        }

}