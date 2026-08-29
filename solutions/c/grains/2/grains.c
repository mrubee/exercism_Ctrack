#include "grains.h"

uint64_t square(uint8_t num){
    uint64_t i=1;
    uint64_t x=1;
    if (num==0){
        return 0;
    }else{
    while(i<num){
        x*=2;
        i++;   }
         return x;
    }
    
}
uint64_t total(void){
    uint64_t tot=1;
    int f=1;
    uint64_t y=1;
    while (f<=63){
        y*=2;
        tot=tot+y;
        f++;
    }
    return tot;
    


    
}