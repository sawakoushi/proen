//func1.c
#include <stdio.h>

double getnx(   ){
	return x - a * x * y;
}

       getny(   ){
	return ;
}

       getnz(   ){
	return ;
}


int main(void){
	int i;
	double x, y, z, nx, ny, nz, a, b;
	x = 99;
	y = 1;
	z = 0;
	a = 0.001;
	b = 0.01;

	for(i=0;i<30;i++){
		// $B<!$NF|$K$J$k$N$G!V:#F|$NCM!W$r!VL@F|$NCM!W$K=q$-49$($k!%(B
		nx = getnx( );
		ny = getny( );
		nz = getnz( );
		x = nx;
		y = ny;
		z = nz;

	}

	printf("$B46@w$7$?$3$H$,$J$$?M$O(B %lf $B?M(B\n", x);
	printf("$B46@w$7$F$$$k?M$O(B %lf $B?M(B\n", y);
	printf("$B2sI|$7$??M$O(B %lf $B?M(B\n", z);
	return 0;
}
