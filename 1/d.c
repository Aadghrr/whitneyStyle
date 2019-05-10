typedef long I;typedef char C;
#define _(n,$) {I i=0,_n=(n);for(;i<_n;++i){$;}}
#define P(p) printf("%s\n",p)
main(){C s[99];while(gets(s))_(3,P(s));}
