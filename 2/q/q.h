typedef int I;
typedef struct Qs {I d;struct Qs* nxt;} Q;
Q* cq(I de){Q* r=(Q*)M(Q);r->d=de;return r;};
ae(Q* q,I de){while(q->nxt){q=q->nxt;};q->nxt=(Q*)M(Q);q->nxt->d=de;};
I ge(Q* q,Q** p){I i=q->d;*p=q->nxt;return i;};
