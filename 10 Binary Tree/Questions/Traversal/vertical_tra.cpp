#include "tree.h"

int main()
{
    node *rt = 0;
    levelBuild(rt);
    level_order(rt);

    return 0;
}
