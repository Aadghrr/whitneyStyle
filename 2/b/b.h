typedef int I;
typedef struct b {I v;struct b* l;struct b* g;} b;
b* cb(I v){b* t=(b*)M(b);t->v=v;return t;};
b* ae(b* t,I v,I x){b* r = cb(v);if(x){t->l=r;return r;}t->g=r;return r;}
I ge(b* t){return t->v;}
