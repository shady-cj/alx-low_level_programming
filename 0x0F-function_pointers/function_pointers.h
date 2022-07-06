#ifndef FUNC_POINTER_H
#define FUNC_POINTER_H
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
