#include <stdio.h>
int main () {
	printf("====================================\n");
    printf("      ELECTRICITY BILL GENERATOR\n");
    printf("====================================\n");

	char name[50];
	float units,Bill,gst,TotalBill;
	printf("\nEnter Your Name = ");
	scanf("%s", &name);
	
	printf("\nEnter Your Unit = ");
	scanf(" %f", &units);
	
	if(units<=100){
		Bill= units*1.5;
	}
	
	else if(units<=200){
		Bill= units*2.5;
	}
	
	else if(units<=300){
		Bill= units*4.0;
	}
	
	else {
		Bill= units*5.0;
	}
	
	gst= (Bill*18)/100;
	TotalBill= Bill+gst;
	
	printf("\n====================================\n");
    printf("          ELECTRICITY BILL\n");
    printf("====================================\n");

    printf("Consumer Name : %s\n", name);
    printf("Units Consumed: %.2f\n", units);

    printf("\nEnergy Charge : Rs %.2f", Bill);
    printf("\nGST (18%)     : Rs %.2f", gst);

    printf("\n------------------------------------");
    printf("\nTotal Bill    : Rs %.2f", TotalBill);

    if (TotalBill < 500) {
        printf("\nCategory      : Low Consumption");
    }
    else if (TotalBill <= 1500) {
        printf("\nCategory      : Moderate Consumption");
    }
    else {
        printf("\nCategory      : High Consumption");
    }

    printf("\n====================================\n");
	
	return 0;
}