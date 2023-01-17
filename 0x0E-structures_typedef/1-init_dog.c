#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type "struct dog"
 *
 * @d: the array name containing dog details.
 *
 * @name: "name" index (element) in the (d) array. Can be also visualized
 *        in this array format -- d[name]
 *
 * @age: "age" index (element) in the (d) array. Can be also visualized
 *       in this array format -- d[name]
 *
 * @owner: "owner" index (element) in the (d) array. Can be also visualized
 *        in this array format -- d[name]
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog name, age, owner;

	d = malloc(sizeof(struct dog));

/* STEP 1 */
/* access into "name" index, and manipulate value to "Poppy" */
	/*d.name = "Poppy"; */

/* STEP 2 */
/* access into "age" index, and manipulate value to "3.5" */
	/* d.age = 3.5;*/

/* STEP 3 */
/* access into "owner" index, and manipulate value to "Bob" */
	/* d.owner = "Bob"; */

}
