#include "m.h"
#include "s.h"
pb(b* t){aeb(t,3,1);aeb(t,7,0);aeb(t->l,2,1);aeb(t->l,9,0);aeb(t->g,4,0);}
ch(I x){if(4==x){printf("Found");return 1;}printf("%d!=%d\n",4,x);return 0;}
main(){b* t=cb(1);S* a=cs();ae(a,t);pb(t);b* x;while(1){x=ge(a);ae(a,x->l);ae(a,x->g);if(ch(x->v)==1){break;};};}
