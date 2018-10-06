#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include "linked_list.h"

using namespace std;

char** split(char* str, const char* delim)
{
	char **string_list = (char**)malloc(10 * sizeof(char*));
	for (int i = 0; i < 10; i++) {
		string_list[i] = NULL;
	}

	int idx = 0;
	char* token = strtok(str, delim);
	while (token != NULL) {
		string_list[idx] = (char*)malloc(strlen(token) + 1);
		strcpy(string_list[idx], token);
		token = strtok(NULL, delim);

		idx++;
	}
	return string_list;
}

int main(void)
{
	FILE* fp;
	fp = fopen("input.txt", "r");
	char currentLine[100];
	struct Item* firstItem = NULL;
	
	while(!feof(fp)) {
		fgets(currentLine, sizeof(currentLine), fp);
		char** tmp = split(currentLine, ":");
		struct Item* newItem = create_item();
		char** subjects = split(tmp[3], ",");
	
		newItem->name = tmp[0];
		newItem->age = tmp[1];
		newItem->id = tmp[2];
		newItem->subjects = subjects;

		if (firstItem == NULL) {
			firstItem = newItem;
		} else {
			insert_item(firstItem, newItem);
		}

	}
	
	struct Item* currentItem = firstItem;
	while (currentItem->nextItem != NULL) {
		char hakbun[5] = "";
		for (int i = 0; i < 4; i++) {
			hakbun[i] = currentItem->id[i];
		}
		if (strcmp(hakbun, "2013") == 0) {
			printf("%s: %s: ", currentItem->name, currentItem->id);
			for (int i = 0; i < 10; i++) {
				if (currentItem->subjects[i] == NULL) break;
				printf("%s", currentItem->subjects[i]);
				if (currentItem->subjects[i + 1] != NULL) {
					printf(", ");
				}
			}
		}
		currentItem = currentItem->nextItem;
	}
	
	struct Item* now = firstItem;
	struct Item* next;
	while (now->nextItem != NULL) {
		next = now -> nextItem;
		delete now;
		now = next;
	}
	delete now;
		
	fclose(fp);
	return 0;
}
