int add(int a, int b){
	int ac;
	int bc;
	return a+b;
}

int fu;

int main(){
	int a[100];
	int b;
	int c;
	int i;
	i = 0;
	b = 1;
	c = b;
	while (i < 100){
		if (i < 50){
			a [i] = add(b, 1);
		}else{
			a [i] = add(b, b + c);
			c = b;
		}
		i = i + 1;
		if (i == 2){
			i = 2;
		}
	}
	return 0;
}