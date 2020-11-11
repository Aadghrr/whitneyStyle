#define NULL  0
#define M(x) malloc(sizeof(x))
#define P(p) printf("%d ",p)
typedef struct n {int v;struct n* l;struct n* r;} n;
n* cN(int v){n* nn=M(n*);nn->v=v;nn->l=NULL;nn->r=NULL;return nn;}
T(n* r){if(!r){return 0;}T(r->l);P(r->v);T(r->r);}
main(){n* r=cN(10);r->l=cN(15);r->r=cN(20);T(r);return 0;}
