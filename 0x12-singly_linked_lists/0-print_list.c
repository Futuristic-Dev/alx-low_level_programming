#include "lists.h"

/**
 * print_list - a function that prints
 * all the elements of a listi
 * @h: the list
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
    unsigned short int i;

    while (h != NULL)
    {
        if (h->str == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            printf("[%u] %s\n", h->len, h->str);
        }
        h = h->next;
        i++;
    }

    return (i);
}
