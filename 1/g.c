#define M(x) malloc(sizeof(x))
#define F(n) for(int i=0;i<n;i++)
#define P(i,p) printf("%d - %d",i,p->d)
typedef struct nd {int d;struct nd* nxt;} nd;
typedef struct g {struct nd* h[6];} g;
typedef struct e {int s,d;} e;
g* cG(e es[], int n){g* gr =(g*)M(g);F(6){gr->h[i]=0;};F(n){nd* nN = (nd*)M(nd);
nN->d=es[i].d;nN->nxt=gr->h[es[i].s];gr->h[es[i].s]=nN;}return gr;}
void pG(g* gr){F(6){nd* p = gr->h[i];while(p!=0){P(i,p);p = p->nxt;};};}
main(){e es[] = {{0,1},{1,2},{2,3},{2,0},{3,2},{5,4}};g* gr = cG(es,6);pG(gr);};

