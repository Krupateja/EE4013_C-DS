// Online C compiler to run C program online
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
    int temp1,temp2,temp3;
    
    temp1 = x+3;
    temp2 = y->f1;
    temp3 = y->f2;
    
    z = temp1+temp2+temp3;
    for(i=0;i<200;i++){
        if(z>i){
            p += temp1;
            q += temp3;
        }else{
            p += temp3;
            q += temp1;
        }
    }
    // printf("%d-%d-%d-%d-%d-%d\n",x,y->f1,y->f2,z,p,q);
    
    return 0;
}
