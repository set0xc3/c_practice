#include "array.h"

array 
*array_create(int capacity) 
{
    array *ptr = (array *)malloc(sizeof(array));
    valid_address(ptr);
    
    ptr->capacity = capacity;
    ptr->data = (int *)malloc(sizeof(int) * capacity);
    valid_address(ptr->data);
    
    return ptr;
}

void 
array_destroy(array *ptr)
{
    free(ptr->data);
    free(ptr);
}

int 
*array_data(array *ptr)
{
    return ptr->data;
}

int 
array_size(array *ptr)
{
    return ptr->size;
}

int 
array_capacity(array *ptr)
{
    return ptr->capacity;
}

bool 
array_empty(array *ptr)
{
    return ptr->size == 0;
}

int 
array_at(array *ptr, int index)
{
    if (index < 0 || index > ptr->size - 1)
        return -1;
    
    return *(ptr->data + index);
}

void 
array_push(array *ptr, int value)
{
    if (ptr->size == ptr->capacity)
        return;
    
    *(ptr->data + ptr->size) = value;
    ptr->size++;
}

void 
array_pop(array *ptr)
{
    if (ptr->size == 0)
        return;
    
    *(ptr->data + ptr->size - 1) = 0;
    ptr->size--;
}

void 
array_insert(array *ptr, int index, int value)
{
    if (index < 0 || index > ptr->size - 1)
        return;
    
    memmove(ptr->data + index + 1, ptr->data + index, (ptr->size - index) * sizeof(int));
    
    *(ptr->data + index) = value;
    ptr->size++;
}

void 
array_prepend(array *ptr, int value)
{
    array_insert(ptr, 0, value);
}

void 
array_delete(array *ptr, int index)
{
    if (index < 0 || index > ptr->size - 1)
        return;
    
    memmove(ptr->data + index, ptr->data + index + 1, (ptr->size - index) * sizeof(int));
    ptr->size--;
}

void 
array_remove(array *ptr, int value)
{
    for (int i = 0; i < ptr->size; ++i)
    {
        if (*(ptr->data + i) == value)
        {
            array_delete(ptr, i);
            --i;
        }
    }
}

int
array_find(array *ptr, int value)
{
    for (int i = 0; i < ptr->size; ++i)
    {
        if (*(ptr->data + i) == value)
            return i;
    }
    return -1;
}

void 
valid_address(void *ptr)
{
    assert(ptr);
}