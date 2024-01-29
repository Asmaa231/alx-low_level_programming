#include "lists.h"
/**
 * add_dnodeint - function adds a new node at a dlistint_t list beginning
 *@head: head node address
 *@n: list size
 *Return: list size
 */

size_t dlistint_len(const dlistint_t *h)
{
        size_t i = 0;

        while (h)
        {
                h = h->next;
                i++;
        }
        return (i);
}