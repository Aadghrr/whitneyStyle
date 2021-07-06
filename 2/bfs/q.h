#include "b.h"
typedef int I;
typedef struct Qs {b* d;struct Qs* nxt;} Q;
Q* cq(b* d){Q* r=(Q*)M(Q);r->d=d;return r;};
ae(Q* q,b* d){if(d){while(q->nxt){q=q->nxt;};q->nxt=(Q*)M(Q);q->nxt->d=d;}};
b* ge(Q* q,Q** p){if(q->nxt){*p=q->nxt;};return q->d;};
