#include "m.h"
typedef struct nd {int d;struct nd* nxt;} nd;
typedef struct g {struct nd* h[6];} g;
typedef struct e {int s,d;} e;
g* cG(e es[], int n){g* gr =(g*)M(g);F(6){gr->h[i]=0;};F(n){nd* nN = (nd*)M(nd);nN->d=es[i].d;nN->nxt=gr->h[es[i].s];gr->h[es[i].s]=nN;}return gr;}
