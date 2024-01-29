#include "lists.h"
/**
 *add_dnodeint - function adds a new node at a dlistint_t list start
 *@head: pointer address to head node
 *@n: int new node field
 *Return:new node address or null
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
        dlistint_t *new = malloc(sizeof(dlistint_t));

        if (!head || !new)
                return (new ? free(new), NULL : NULL);

        new->n = n;
        new->prev = NULL;
        if (!*head)
        {
                *head = new;
                new->next = NULL;
        }
        else
        {
                new->next = *head;
                (*head)->prev = new;
                *head = new;
        }
        return (new);
}