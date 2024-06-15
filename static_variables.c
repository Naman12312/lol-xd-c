#include <stdio.h>
int h(int x){
	return x*x;
}
int f(int x){ // <----- this int x right here(the one accepted by the function in its defintion) is called formal parameter or just parameter.
    //note that this x inside function is not the same as the one passed to the function while calling it. This can be verified like this:
    printf("Address of x inside f(x): %x\n", &x);
    //static int y = x; // Will throw error cuz static variable only accepts constant literal.
    //static int z = h(x); // Will throw error cuz static variable only accepts constant literal.
    // static int z; // this will automatically assign z to 0.
    static int z = 2; // if z werent a static variable, then it would be deleted every time the function exits, but cuz it is a static variable, it will retain its last assigned value.
    //int z = 2; // to try this out, comment the line above and decomment this line.
    z++;
    
    return z;

}
int main(){
	int x = 1;
	int* ptr = &x;
    	printf("Address of x outside f(x): %x\n", ptr); //this is different from the address printed by line 7.
    	printf("%d\n",f(x)); // <----- this x right here (the one that's passed to the function while calling it) is called actual parameter or argument.

	printf("%d\n",f(x));
    	printf("%d\n",f(x));
    	printf("%d\n",f(x));
    	printf("%d\n",f(x));
	


}
