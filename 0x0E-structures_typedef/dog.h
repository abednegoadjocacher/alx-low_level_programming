#ifndef dog_h
#define dog_h
/**
 * struct dog - Structure
 * @name: A pointer to name
 * @age:  Age of the dog
 * @owner: The owner name
 */
/**
 * dog_t - New name for struct dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
