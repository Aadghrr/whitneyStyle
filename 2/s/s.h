typedef int I;
typedef struct Ss {I d;struct Ss* nxt;} S;
S* cs(){S* r=(S*)M(S);r->nxt=(S*)M(S);return r;};
ae(S* s,I de){while(s->nxt){s=s->nxt;};s->nxt=(S*)M(S);s->nxt->d=de;};
I ge(S* s){while(s->nxt->nxt){s=s->nxt;};I i=s->nxt->d;s->nxt=0;return i;};
