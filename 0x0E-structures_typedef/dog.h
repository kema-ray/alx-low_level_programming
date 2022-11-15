#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
* dog_s - typedef for struct dog
*/
typedef struct dog dog_s;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
