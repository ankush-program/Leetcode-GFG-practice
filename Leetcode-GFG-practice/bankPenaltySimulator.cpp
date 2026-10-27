#include <stdio.h>

int main(){
    int bal;
    scanf("%d",&bal);
    
    int txn=1,penalty=0;

    while(txn!=0){
        scanf("%d",&txn);
        if(bal+txn<0){
            penalty+=50;
            bal-=50;
        }
        else bal+=txn;
    }

    printf("%d %d", bal,penalty);
    
    return 0;
}