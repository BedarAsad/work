#include<stdio.h>
#include<stdlib.h>

struct player{
    int scr;
};
int main()
{
    int index,j,k,tm,point1=10;
    struct player arr_player[100];
    FILE *file;
	file = fopen("highscore.txt", "r");
	arr_player[0].scr = point1;
	for ( index = 1; index < 6; index++)
	{
		fscanf(file, "%d", &arr_player[index].scr);
	}
	fclose(file);
	for ( j = 0; j < 6; j++){
		for ( k = 0; k < 5; k++){
			if (arr_player[k].scr < arr_player[k + 1].scr)
			{
				 tm = arr_player[k].scr;
				arr_player[k] = arr_player[k + 1];
				arr_player[k + 1].scr = tm;
			}
		}
	}
	file = fopen("highscore.txt", "w");
	for ( k = 0; k < 5; k++){
		fprintf(file, "%d\n", arr_player[k].scr);
	}
	fclose(file);
	return 0;
}
