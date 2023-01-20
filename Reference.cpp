#include "Reference.h"
#include <stdlib.h>
GameObject::GameObject(){
    
}

GameObject::~GameObject(){
    free(components);
}