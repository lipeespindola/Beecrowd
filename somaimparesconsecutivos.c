#include <stdio.h>

int main() {

int N, X, Y, temp;

scanf("%d", &N);

while(N > 0) {
scanf("%d %d", &X, &Y);

if(X < Y){
temp = X;
X = Y;
Y = temp;
}

int total = 0;

for(int i = Y + 1; i < X; i++){
if(i % 2 != 0){
total += i;   
}
}
printf("%d\n", total);
N--;
}

return 0;

}




