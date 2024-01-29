#include "lists.h"

/**
 * int sum_dlistint - function returns the sum of all the data (n)
 *                  of a dlistint_t linked list
 *@head: pointer to current head node
 *Return: lists sum
 */
int sum_dlistint(dlistint_t *head)
{
        int sum = 0;

        while (head)
        {
                sum += head->n;
                head = head->next;
        }
        return (sum);
}