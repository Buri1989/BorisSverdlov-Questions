#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_LEN_OF_LINE 256

//files
#define FILE_NAME "vehicle_data.txt"
#define OUT "errors_summary.txt"

//Special Characters
#define COMMA ','
#define END_OF_LINE '\0'
#define NEW_LINE '\n'

//Error messages
#define OPEN_FAILED_MESSAGE "Could not open text file\n"


int main() {

	char line[MAX_LEN_OF_LINE];
	
	FILE* file = fopen(FILE_NAME, "r");
	FILE* errors_summary = fopen(OUT, "w");
	if (file == NULL && errors_summary == NULL) {
		printf(OPEN_FAILED_MESSAGE);
		exit(0);
	}
	//Takes the first line with the headlines
	fgets(line, sizeof(line), file);
	//while loop-Takes a line from the file each iteration into the buffer line,after the headlines
	while (fgets(line, sizeof(line), file) != NULL) {
		char* chr_at_line = line;
		int* arr = (int*)malloc(3 * sizeof(int));
		int i = 0;
		char* tmp = chr_at_line;
		//while loop - a line each time
		while (*chr_at_line != NEW_LINE && *chr_at_line != END_OF_LINE && i < 3) {
			if (*chr_at_line == COMMA) {
				arr[i] = atoi(tmp);
				i++;

				tmp = chr_at_line + 1 ;
				if(i == 2)  arr[i] = atoi(tmp);
			}
			chr_at_line++;
		}
		//Multiply the (time[s]*velocity[m/s])*3 -> to find the distance 
		int sol = (arr[0] * arr[1]) * 3;
		//checking if the data is currect,if not prints into a new file
		if (sol != arr[2]) {
			fprintf(errors_summary, "%d,%d,%d\n", arr[0], arr[1], arr[2]);
		}
		free(arr);
	}
	fclose(file);
	fclose(errors_summary);
	return 0;
}
	


