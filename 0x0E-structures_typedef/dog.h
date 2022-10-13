#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct doh
 * @name: name
 * @age: age
 * @owner: Owner
 * Description: the struct is for dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void freed_dog(dog_t *d);

#endif
