#include "lists.h"
/**
 **add_dnodeint_end - function adds a new node at the end of a dlistint_t list
 *@head: pointer address to current head node
 *@n: int new node field
 *Return: new node address or null
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
        dlistint_t *new = malloc(sizeof(dlistint_t)), *node;

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
                node == *head;
                while (node->next)
                        node = node->next;

                node->next = new;
                new->prev = node;
        }
        return (new);
}