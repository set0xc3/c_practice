/* date = June 4th 2022 6:01 pm */

#ifndef ARRAY_H
#define ARRAY_H

#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>

typedef struct _array
{
    int size;
    int capacity;
    int *data;
} array;

array *array_create(int capacity);
void array_destroy(array *ptr);

int *array_data(array *ptr);
int array_size(array *ptr);
int array_capacity(array *ptr);
bool array_empty(array *ptr);
int array_at(array *ptr, int index);

void array_push(array *ptr, int value);
void array_pop(array *ptr);
void array_insert(array *ptr, int index, int value);
void array_prepend(array *ptr, int value);
void array_delete(array *ptr, int index);
void array_remove(array *ptr, int value);
int array_find(array *ptr, int value);

void valid_address(void *ptr);

#endif //ARRAY_H
