#include <stdlib.h>
#include "lists.h"

/**
*check_cycle - Checks if a singly-linked list contains a cycle
*@list: A singly-linked list
*
*Return: If there is no cycle - 0
*        If ther is a cycle - 1
*/
int check_cycle(listint *list)
{
listint_t *turtlee, *hare;

if (list == NULL || list->next == NULL)
return (0);

turtle = list->next;
hare = list->next->next;

while (turtlee && hare && hare->next)
{
if (turtlee == hare)
return (1);

turtlee = turtlee->next;
hare = hare->next->next;
}

return (0);
}
