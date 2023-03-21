#ifndef DOG_H
#define DOG_H

/**
 * dog - describes a dog.
 * @name: the dog's name.
 * @age: the dog's age.
 * @owner: the dog's owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/* Defining a new type 'dog_t' as the new name for the type 'struct dog' */
typedef struct dog dog_t;

/* more prototypes using 'dog_t' */
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
