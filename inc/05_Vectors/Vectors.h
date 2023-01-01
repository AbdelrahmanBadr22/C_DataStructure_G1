#ifndef VECTORS_H_
#define VECTORS_H_
#include <stdint.h>
typedef uint32_t VectorType;
typedef struct
{
	VectorType CurrSize;
	VectorType MaxSize;
	VectorType* ptr;
}vector_t;

void Create(vector_t *V);
void pushBack(vector_t *V,VectorType e);
void popBack(vector_t *V);

#endif /* VECTORS_H_ */
