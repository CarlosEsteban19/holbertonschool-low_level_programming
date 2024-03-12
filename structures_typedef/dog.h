#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure with doggies
 * @name: name of doggies
 * @owner: owner of doggies
 * @age: how old be doggies
 */
struct dog
{
char *name;
char *owner;
float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
