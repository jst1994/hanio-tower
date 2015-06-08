#include <stdio.h>
#include <stdlib.h>

void hanoi(int n,char from,char through,char to){
    if(n==1)
    {
        printf("%c->%c\n",from,to);
        return;
    }
    hanoi(n-1,from,to,through);
    hanoi(1,from,through,to);
    hanoi(n-1,through,from,to);
}

int main()
{
    hanoi(3,'A','B','C');
	return 0;
}
