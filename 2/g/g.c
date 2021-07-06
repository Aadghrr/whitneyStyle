#define P(i,p) printf("%d - %d",i,p->d)
#include "g.h"
#include "m.h"
void pG(g* gr){F(6){nd* p = gr->h[i];while(p!=0){P(i,p);p = p->nxt;};};}
main(){e es[] = {{0,1},{1,2},{2,3},{2,0},{3,2},{5,4}};g* gr = cG(es,6);pG(gr);};

