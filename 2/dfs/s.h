#include "b.h"
typedef int I;
typedef struct Ss {b* d;struct Ss* nxt;} S;
S* cs(){S* r=(S*)M(S);r->nxt=(S*)M(S);return r;};
ae(S* s,b* de){while(s->nxt){s=s->nxt;};s->nxt=(S*)M(S);s->nxt->d=de;};
b* ge(S* s){while(s->nxt->nxt){s=s->nxt;};b* x=s->nxt->d;s->nxt=0;return x;};
