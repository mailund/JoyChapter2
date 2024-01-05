
#ifndef HASH_H
#define HASH_H

#include <stdlib.h>
#include <stdbool.h>

typedef unsigned int hash_key;

struct bin {
	int is_free : 1;
	hash_key key;
};

struct hash_table {
    size_t size;
	struct bin bins[]; // flexible array member
};

struct hash_table *empty_table(size_t size);
void delete_table(struct hash_table *table);

void insert_key   (struct hash_table *table, hash_key key);
bool contains_key (struct hash_table *table, hash_key key);
void delete_key   (struct hash_table *table, hash_key key);



#endif
