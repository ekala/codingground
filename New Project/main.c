#include <stdio.h>
#include "hashset.h"
#include "hashset_itr.h"

int main()
{
    hashset_t config = hashset_create();
    hashset_add(config, "wireless");
    hashset_add(config, "network");
    
    hashset_itr_t itr = hashset_iterator(config);

    while (hashset_iterator_next(itr) != -1)
    {
        size_t val = hashset_iterator_value(itr);
        printf("Fetching value");
    }
    
    printf("%d\n", itr->index);
    return 0;
}

