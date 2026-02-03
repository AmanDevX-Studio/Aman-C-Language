#include <stdio.h>
// declaire parameter fucntion
void myFun(char name[]){
    printf("Hii %s !\n",name);
}

int main(){
    // calling the function 
    myFun("Aman");
    myFun("Sarita");
    myFun("Sushil");
    myFun("deepak");
    myFun("Krishan");

    return 0;
}