#ifndef DOG_H
#define DOG_H
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/**
 * struct dog -structure tag name
 * Description: creates struct variable
 * of type dog
 * @name: name of dog
 * @owner: owner of dog
 * @age: age of dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
