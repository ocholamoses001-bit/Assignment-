/*
NAME:MOSES OUMA
PA106/G/28795/25
*/

int main(){
	FILE *fb;
	double transaction_amount;
	double total_sales = 0.0;
	
	//open file (i)
	if ((fp = fopen(FILENAME, "r")) == NULL){
		perror("Error opening file");
		return 1;
	}
	
	//Read and Calculate (i & ii)
	//Reads doubles from the file until EOF
	while (fscanf(fp, "%1f", &transaction_amount) == 1){
		total_sales += transaction_amount;
	}
	
	//close file (iii) fclose(fp);
	
	// Display total (ii) printf("Total sales for the day: $%.2f\n", total_sales);
	
	return 0;
	
}