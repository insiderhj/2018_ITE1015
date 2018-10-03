#include "linked_list.h"
#include <stdlib.h>

struct Item* create_item()
{
	struct Item* newItem = new struct Item;
	return newItem;
}

struct Item* find_end_of_list(struct Item* linked_list)
{
	struct Item* currentItem = linked_list;
	while (currentItem->nextItem != NULL) {
		currentItem = currentItem->nextItem;
	}
	return currentItem;
}

void insert_item(struct Item* linked_list, struct Item* item)
{
	struct Item* eol = find_end_of_list(linked_list);
	eol->nextItem = item;
}
