#include "m.h"
#include "b.h"
#define P(t) printf("  %d\n/  \\ \n%d  %d\n",t->v,t->l->v,t->g->v)
main(){b* t;t=cb(1);ae(t,3,1);ae(t,7,0);P(t);}
