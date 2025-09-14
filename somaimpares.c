#include <stdio.h>

int main () {

int N, X, Y, total;


scanf("%d", &N);

while(N != 0){
scanf("%d %d", &X, &Y);

if(Y > X) {
while(Y > X){

if(Y % 2 != 0){
total += Y;
Y--;
}

else {
Y--;    
}
}
}

else {
while(X > Y){

if(X % 2 != 0){
total += X;
X--;
 }
        
else {
X--;    
        }


}
}

printf("%d\n", total);

}

return 0;

}