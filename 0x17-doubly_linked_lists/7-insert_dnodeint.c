#include "lists.h"
/**
 *insert_dnodeint_at_index - function inserts a new node at a given position.
 *@h: poiter to head of list
 *@idx: position of new node
 *@n: integer data of new node
 *Return: if faileur null or rtuen new node adrss
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
        dlistint_t *tmp = *h, *new;

        if (idx == 0)
                return (add_dnodeint(h, n));

        for (; idx != 1; idx--)
        {
                tmp = tmp->next;
                if (tmp == NULL)
                        return (NULL);
        }

        if (tmp->next == NULL)
                return (add_dnodeint_end(h, n));

        new =  malloc(sizeof(dlistint_t));
        if (new == NULL)
                return (NULL);

        new->n = n;
        new->prev = tmp;
        new->next = tmp->next;
        new->next->prev = new;
        new->next = new;

        return (new);
}