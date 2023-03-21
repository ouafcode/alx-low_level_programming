#ifndef DOG_H
#define DOG_H

/**
 * struct dog - define new type of dogs
 * @name: first member name of dog
 * @age: second member age of dog
 * @owner: third member
 *
 * Description: Long description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
