#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

struct Item {
	char* name;
	char* age;
	char* id;
	char** subjects;
	Item* nextItem;
};

struct Item* create_item();
struct Item* find_end_of_list(struct Item* linked_list);
void insert_item(struct Item* linked_list, struct Item* item);

#endif
