#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
int  check_cycle (listint-t * list)
{
	listint-t *slow = list, *fast = list;
	{
		while (fast && fast-> next)
		{
			slow = slow ->next;
			fast = fast->next ->next;
			if (slow = fast)
			{
			return (1);
			}
		}
	}

	       return (0);
}
