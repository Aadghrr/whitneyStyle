typedef struct nd {int d;struct nd* nxt;} nd;
typedef struct g {struct nd* h[6];} g;
typedef struct e {int s,d;} e;
g* cG(e es[], int n);
