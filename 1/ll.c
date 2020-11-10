typedef struct nd {int v;struct nd* nx;} n; 
#define M(x) malloc(sizeof(x))
#define P(p) printf("%d \n",p)
n* nc(int v){n* r;r->v=v;r->nx=M(n);return r->nx;}
main(){n* n1 = M(n);n* n2 = M(n);n1->v=1;n1->nx=n2;n2->v=2;n* t=n1;while(t->nx){P(t->v);t=t->nx;}}


