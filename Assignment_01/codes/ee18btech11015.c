

#include <stdio.h>
#include <stdlib.h>

struct node{
    int f1,f2;
};

int main() {
    // Write C code here
    struct node y = (struct node)malloc(sizeof(struct node));
    // y->f1 = 1;
    // y->f2 = 2;
    int x,z,p,q,i;
    // x = 0;
    // p = 0;
    // q = 0;
    int t1,t2,t3;
    
    t1 = x+3;
    t2 = y->f1;
    t3 = y->f2;
    
    z = t1+t2+t3;
    for(i=0;i<200;i++){
        if(z>i){
            p += t1;
            q += t3;
        }else{
            p += t3;
            q += t1;
        }
    }
    // printf("%d-%d-%d-%d-%d-%d\n",x,y->f1,y->f2,z,p,q);
    
    return 0;
}
