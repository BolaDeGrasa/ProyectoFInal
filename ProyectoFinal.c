# define N 10
int array[N]={4,6,8,2,10,9,6,13,17,1};


int mul(int mul, int a){
    return mul+(a*2);
}

int op(int *a,int Num){
    int cont=0;
    for(int i=0; i<Num;i++){
        cont=mul(cont, a[i]);
    }
    return cont;
}

int main(){
    int total = op(array,N);
    return 0;
}