#define M(x) malloc(sizeof(x))
#define P(p) printf("%d ",p)
typedef struct nd {int v;struct nd* l;struct nd* r;} n;
n* cN(int va){n* nn=M(n);nn->v=va;nn->l=0;nn->r=0;return nn;}
T(n* rt){if(rt==0){return 0;}T(rt->l);P(rt->v);T(rt->r);}
main(){n* rt=cN(10);rt->l=cN(15);rt->r=cN(20);T(rt);return 0;}
