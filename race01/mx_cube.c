void mx_printchar(char c);
void mx_first(int n) {
	for (int i = 0; i < n/2; i++) {
		for (int j = n/2 -i-1; j >= 0; j--) {
			mx_printchar(' ');
		}
		mx_printchar('/');
		for (int m = 0; m < n*2; m++) {
               mx_printchar(' ');
		}
		mx_printchar('/');
		for ( int k = 0; k < i; k++) 
			mx_printchar(' ');
		mx_printchar('|');
		mx_printchar('\n');
	}
	
}

void second_half(int n) {
	int z = 0;
	if ( n % 2 == 0)
		z = n/2-1;
	else 
		z = n/2; 
		
	for (int i = 0; i < z; i++) {
		mx_printchar('|');
		for (int j = 0; j < n*2; j++)
			mx_printchar(' ');
		mx_printchar('|');
		for (int j = 0; j < n/2; j++)
	        mx_printchar(' ');
		mx_printchar('|');
		mx_printchar('\n');
		}
}
void firs_line(int n) {
	for (int i = 0; i <= n/2; i++) {
         mx_printchar(' ');
     }
	mx_printchar('+');
	for (int i = 0; i < n*2; i++) {
         mx_printchar('-');
	}
	mx_printchar('+');
	mx_printchar('\n');
}

void second_line(int n) {
 	mx_printchar('+');
	for (int i = 0; i < n*2; i++) {
		mx_printchar('-');
	}
	mx_printchar('+');
	for (int i = 0; i < n/2; i++) {
		mx_printchar(' ');
	}
	mx_printchar('|');
    mx_printchar('\n');
	
}
void third_line(int n) {
	mx_printchar('|');
	for (int i = 0; i <= n*2-1; i++) {
         mx_printchar(' ');
    }
	mx_printchar('|');
	for (int j = 0; j < n/2; j++)
         mx_printchar(' ');
    mx_printchar('+');
    mx_printchar('\n');
}
void forth_line(int n) {
	mx_printchar('+');
	for (int i = 0; i < n*2; i++) {
    	mx_printchar('-');
	}
	mx_printchar('+');
    mx_printchar('\n');
}
	
void third_half(int n) {
	for(int i = 0; i < n/2; i++) {
		mx_printchar('|');
	for (int j = 0; j < n*2; j++)
    	mx_printchar(' ');
    mx_printchar('|');
	for (int y = n/2-i-2; y >=0; y--)
		mx_printchar(' ');
	mx_printchar('/');
	mx_printchar('\n');
	}
}



void mx_cube(int n) {
	if (n > 1) {
		firs_line(n);
		mx_first(n);
		second_line(n);
		second_half(n);
		third_line(n);
		third_half(n);
		forth_line(n);
	}
}
