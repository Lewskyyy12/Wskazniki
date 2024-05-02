#include <stdio.h>

int liczbyMniejsze(int *p, int *q){
    if(*p<=*q)
        return *p;
    else
        return *q;
}

int* WskaznikMniejszej(int *p, int *q){
    if(*p<=*q) return p;
    else return q;
}
void ZamianaWartosci(int *p, int *q){
    int a = *p;
    *p=*q;
    *q= a;

}

void ZamianaWartosciMniejsza(int *p, int *q){
    if(*q<*p) {
        int a = *p;
        *p = *q;
        *q = a;
    }
}
int SumaWskaznik(int *p, int *q){
    return *p+*q;
}
void zmianaWartosci(int *w, int n){
    *w = n;
}

int main() {
    int a =4,b=6;
    int *p = &a;
    int *q= &b;
    int* WskazMniej = WskaznikMniejszej(p,q);
    printf("%d\n",liczbyMniejsze(p,q));
    printf("%d -> %d\n", WskazMniej, *WskazMniej);
    printf("%d , %d\n", a,b);
    ZamianaWartosci(p,q);
    printf("%d , %d\n", a,b);
    ZamianaWartosciMniejsza(p,q);
    printf("%d , %d\n", a,b);
    printf("%d\n", SumaWskaznik(p,q));
    int n= 10;
    int *w= &a;
    printf("%d -> ",a);
    zmianaWartosci(w,n);
    printf("%d\n",a);
    return 0;
}
