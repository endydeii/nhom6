//Bai1
#include <stdio.h>
#include <stdlib.h>

float* tinh_phi(float rate, int hours) {
    float* tong_phi = malloc(sizeof(float));
    if (hours <= 40) {
        *tong_phi = rate * hours;
    } else {
        int gio_lam_them = hours ;
        *tong_phi = rate * 40 + rate * 2 * gio_lam_them;
    }
    return tong_phi;
}

int main() {
    float rate;
    int hours;
    printf("Moi nhap rate ");
    scanf("%f", &rate);
    printf("moi nhap so gio lam viec ");
    scanf("%d", &hours);
    float* tong_phi = tinh_phi(rate, hours);
    printf("tong chi phi phai tra la %.2f", *tong_phi);
    free(tong_phi);
    return 0;
}
//Bai2
#include <stdio.h>
#include <stdlib.h>
int* tinh_so_chinh_phuong(int n){
	int* so_chinh_phuong=malloc(n *sizeof(int));
	for (int i =0;i<n;i++){
		so_chinh_phuong[i]=(i+1)*(i+1);
	}
	return so_chinh_phuong;
	
	
}
int main(){
	int n;
	printf ("moi nhap vao so n\n");
	scanf ("%d",&n);
	int* so_chinh_phuong = tinh_so_chinh_phuong(n);
	for (int i=0;i<n;i++){
		printf ("%d",so_chinh_phuong[i]);
		
	}
	free(so_chinh_phuong);
	return 0;
}
//Bai3
#include <stdio.h>
#include <stdlib.h>
void swap_phantu(int arr[],int a){
	int temp =arr [a];
	arr [a]=arr[a+1];
	arr [a+1]=temp;
	
}
int* swap_mang (int arr[],int n,int a){
	int* mang_moi=malloc(n *sizeof(int));
	for (int i=0;i<n;i++){
		mang_moi[i]=arr[i];
		
	}
	swap_mang(mang_moi,a);
	return mang_moi;
}
int main (){
	
}

