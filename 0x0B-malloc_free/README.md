# 0x0B. C - malloc, free
---
C Memory allocation
---
## 0-create_array.c
- Prototype: char *create_array(unsigned int size, char c);
- Returns NULL if size = 0
- Returns a pointer to the array, or NULL if it fails
## 1-strdup.c
- Prototype: char *_strdup(char *str);
- The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
- Returns NULL if str = NULL
- On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available
