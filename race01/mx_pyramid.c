void mx_printchar(char c);

static int left_side(int n, int r_side, int tabs_inside) {
    for (int i = 1; i < n; i++)
        mx_printchar(' ');
    if (n)
        mx_printchar('/');
    if (r_side >= n) {
        for (int i = 0; i < tabs_inside; i++) {
            if (n == 1)
                mx_printchar('_');
            else
                mx_printchar(' ');
        }
        mx_printchar('\\');
        tabs_inside += 2;
    }
    return tabs_inside;
}

static int right_side(int n, int r_back, int r_down, int tabs_right) {
    for (int i = 0; i < tabs_right; i++)
        mx_printchar(' ');
    if (r_back < n) {
        mx_printchar('\\');
        tabs_right++;
    }
    if (r_down == n - 1)
        tabs_right--;
    if (r_down >= n) {
        mx_printchar('|');
        tabs_right--;
    }
    return tabs_right;
}

void mx_pyramid(int n) {
    if (n > 1 && n % 2 == 0) {
        int right_side = n - 1;
        int back = n / 2;
        int r_down = n / 2;
        int tabs_inside = 1;
        int tabs_right = 0;
        while (n)
        {            
            tabs_inside = left_side(n, right_side, tabs_inside);
            tabs_right = right_side(n, back, r_down, tabs_right);
            mx_printchar('\n');
            n--;
        }
    }
}
