
#include<stdio.h>

typedef struct complex {
    int img;
     int real;
     int a[20];

}cmp;


void add(cmp *a, cmp *b, cmp* c)
{
  c->real = a->real + b->real;
  c->img = a->img + b->img;
}


int main(){

    cmp a,b,c;
    scanf("%d%d , &a.real,&a.img");
    scanf("%d%d , &b.real,&b.img");
    add(&a,&b,&c);
    reutrn 0;

}
