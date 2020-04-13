#define NULL 0

int main(){
    int a = 10;
    int *p = &a;
    p = NULL;
    *p = 30;
    return 0;
}

